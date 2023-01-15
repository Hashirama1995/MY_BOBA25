using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARTapToPlaceObject : MonoBehaviour
{
    public GameObject placementIndicator;
    public GameObject ghost;
    public GameObject objectToPlace;

    // furniture
    public GameObject chair;
    public GameObject table;
    public GameObject pouf;
    public GameObject shelf;
    public GameObject sofa;
    public GameObject emptyZone;

    private Pose PlacementPose; // contains a Vector3 for a position and a quaternion for rotation
    private ARRaycastManager aRRaycastManager;
    private ARAnchorManager aRanchorManager;
    private ARPlaneManager aPlaneManager;
    private bool placementPoseIsValid = false;

    private ARRaycastHit lastHit;
    ARAnchor localAnchor;

    private List<GameObject> placementList = new List<GameObject>();
    void Start()
    {
        aRRaycastManager = FindObjectOfType<ARRaycastManager>();
        aRanchorManager = FindObjectOfType<ARAnchorManager>();
        aPlaneManager = FindObjectOfType<ARPlaneManager>();
    }

    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();

    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid) // works
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }
    
    // does raycast to center of screen, looks for planes, and stores the results in hits.
    // then if there are hits, set placementPose to that pose.
    private void UpdatePlacementPose()
    {
        var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        
        aRRaycastManager.Raycast(screenCenter, hits, TrackableType.Planes);
        
        placementPoseIsValid = hits.Count > 0;
       
        if (hits[0].trackable is ARPlane plane)
        {
            lastHit = hits[0];
        }

        if (placementPoseIsValid)
        {
            PlacementPose = hits[0].pose;
        }
    }

        // Next section
        public void PlaceObject()
    {
        GameObject temp = ghost;
        if (placementPoseIsValid)
        {
            ghost.GetComponent<Recolour>().SetOriginalMaterial();
            ghost.transform.parent = null;
            temp = Instantiate(objectToPlace, PlacementPose.position, PlacementPose.rotation);
            //AnchorContent(temp, temp.GetComponent<Pose>());
            //temp.AddComponent<ARAnchor>();
            
            temp.GetComponent<Recolour>().SetValid();
            temp.AddComponent<ARAnchor>();
            //ghost = Instantiate(objectToPlace, PlacementPose.position, PlacementPose.rotation);
            //ghost.GetComponent<Recolour>().SetValid();
            placementList.Add(temp);
            ghost.transform.parent = placementIndicator.transform;
        }
        else
        {
            Debug.Log("!!!_POSE INVALID");
        }

        if(objectToPlace.tag == "Table")
        { 
            AdditionalObject temp2 = temp.GetComponent<AdditionalObject>();

            //ARAnchor FirstOBj_aRAnchor = temp.GetComponent<ARAnchor>();

            //GameObject tempSecondObject = Instantiate(objectToPlace, PlacementPose.position + new Vector3(1,0,0), PlacementPose.rotation);
            //AnchorContent(tempSecondObject, tempSecondObject.GetComponent<Pose>());
            

            temp2.CreateAdditionalTable(PlacementPose.position, PlacementPose.rotation);
        }
        else if(objectToPlace.tag == "rack")
        {
            AdditionalObject temp2 = temp.GetComponent<AdditionalObject>();
            temp2.CreateAdditionalRack(PlacementPose.position, PlacementPose.rotation);
        }
    }


    ARAnchor AnchorContent(GameObject content, Pose pose)
    {
        if(lastHit != null)
        {
            if (aRanchorManager && aPlaneManager)
            {
                if(lastHit.trackable is ARPlane plane)
                {
                    ARAnchor anchor;
                    var oldPrefab = aRanchorManager.anchorPrefab;
                    aRanchorManager.anchorPrefab = content;
                    anchor = aRanchorManager.AttachAnchor(plane, lastHit.pose);
                    aRanchorManager.anchorPrefab = oldPrefab;
                    if (anchor != null)
                    {
                        return anchor;
                    }
                }
            }
        }
        return null;
        
    }

    private void UseObject(GameObject o)
    {
        objectToPlace = o;
        Destroy(ghost);
        ghost = Instantiate(o, PlacementPose.position, PlacementPose.rotation);
        ghost.GetComponent<Recolour>().SetValid();
        ghost.transform.parent = placementIndicator.transform;
    }
    
    public void UseChair()
    {
        UseObject(chair);
    }
    
    public void UseTable()
    {
        UseObject(table);
    }
    
    public void UsePouf()
    {
        UseObject(pouf);
    }
    
    public void UseShelf()
    {
        UseObject(shelf);
    }
    
    public void UseSofa()
    {
        UseObject(sofa);
    }
}
