using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateAddObject : MonoBehaviour
{
    bool currentMode = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Touch touch = Input.GetTouch(0);
        if (touch.phase == TouchPhase.Began)
        {
            Ray ray = Camera.current.ScreenPointToRay(touch.position);
            RaycastHit hitObject;
            if (Physics.Raycast(ray, out hitObject))
            {
                if(hitObject.transform.gameObject.tag == "empty")
                {
                    currentMode = !currentMode;
                    Debug.Log("!!!_empty Object");
                    ChangeMenu.AddItemMode(currentMode, hitObject.transform.gameObject);

                }
            }
        }
    }
}
