using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateAddObject : MonoBehaviour
{
    bool currentMode = false;
    List<GameObject> objects;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void CrearList()
    {
        objects = null;
    }
    public void InitializedList(List<GameObject> list)
    {
        objects = list;
        Debug.Log("!!!_ list count ="+list.Count);
    }

    public void ReplaceObject(int index, GameObject newObj)
    {
        Debug.Log("!!!_ replace object start");
        GameObject temp = objects[index];
        objects[index] = newObj;
        Destroy(temp.gameObject);
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
                GameObject tempObj = hitObject.transform.gameObject;
                if (tempObj.tag == "empty")
                {
                    currentMode = !currentMode;
                    Debug.Log("!!!_empty Object");
                    ChangeMenu.AddItemMode(currentMode, objects, hitObject.transform.gameObject);

                }
            }
        }
    }

    private void OnDestroy()
    {
        
    }
}
