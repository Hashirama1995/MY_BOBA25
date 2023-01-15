using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class MoveObject : MonoBehaviour
{
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
                objectToMove.GetComponent<Recolour>().SetSelected();
                objectToMove.transform.parent = aRCamera.transform;
            }
        }       
    }

    public void Deselect()
    {
        objectToMove.GetComponent<Recolour>().SetOriginalMaterial();        
        if (objectToMove.tag == "Table" || objectToMove.tag == "rack")
        {

            Vector3 delta = objectToMove.transform.position - oldPose;
            objectToMove.GetComponent<AdditionalObject>().NewPosition(delta);
        }

        objectToMove.transform.parent = null;
        objectToMove = null;
        oldPose = Vector3.zero;
        newPose = Vector3.zero;
    }
}
