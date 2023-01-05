using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdditionalObject : MonoBehaviour
{
    public GameObject emptyObject;
    private List<GameObject> objects = new List<GameObject>();
    private GameObject objjj;
    public void CreateAdditional(Vector3 pos , Quaternion rot)
    {
        Debug.Log("!!!COUNT BEFORE  =" + objects.Count);
        Vector3 pos2 = new Vector3(pos.x, pos.y + 0.8f, pos.z);
        objjj = Instantiate(emptyObject, pos2, rot);
        objects.Add(objjj);

        Debug.Log("!!!COUNT After  =" + objects.Count);
    }

    public void RemoveAdditional()
    {
        Debug.Log("!!!_remove - We Inside");
        //Destroy(objjj);
        
        Debug.Log("!!!_OBJECT COUNT = " + objects.Count);
        for (int i = 0; i < objects.Count; i++)
        {
            Debug.Log("!!!_" + i);
            Destroy(objects[i]);
        }
    }

    public void NewPosition(Vector3 delta)
    {
        Debug.Log("!!!_NeW POSITION - We Inside");
        Debug.Log("!!!_OBJECT COUNT = " + objects.Count);
        for (int i = 0; i < objects.Count; i++)
        {
            
            Debug.Log("!!!_ old position" + objects[i].transform.position);
            objects[i].transform.Translate(delta);
            //objects[i].transform.position = objects[i].transform.position + delta;
            Debug.Log("!!!_ new position" + objects[i].transform.position);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
