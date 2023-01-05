using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class MoveObject : MonoBehaviour
{
    // private ARRaycastManager aRRaycastManager;
    public Camera aRCamera;

    private GameObject objectToMove;
    Vector3 oldPose;
    Vector3 newPose;
    void Update()
    {
        Touch touch = Input.GetTouch(0);
        if (touch.phase == TouchPhase.Began)
        {
            Ray ray = Camera.current.ScreenPointToRay(touch.position);
            RaycastHit hitObject;
            if (Physics.Raycast(ray, out hitObject))
            {
                objectToMove = hitObject.transform.parent.transform.parent.gameObject;

                oldPose = objectToMove.transform.position;
                Debug.Log("!!!_ old position" + oldPose);

                objectToMove.GetComponent<Recolour>().SetSelected();
                objectToMove.transform.parent = aRCamera.transform;
            }
        }       
    }

    public void Deselect()
    {
        Debug.Log("!!!_ DONE");
        objectToMove.GetComponent<Recolour>().SetOriginalMaterial();

        Debug.Log("!!!_ new position" + objectToMove.transform.position);
        
        if (objectToMove.tag == "Table")
        {
            Vector3 delta = objectToMove.transform.position - oldPose;
            Debug.Log("!!!_ delta" + objectToMove.transform.position);
            objectToMove.GetComponent<AdditionalObject>().NewPosition(delta);
        }

        objectToMove.transform.parent = null;
        objectToMove = null;
        oldPose = Vector3.zero;
        newPose = Vector3.zero;
    }
}
