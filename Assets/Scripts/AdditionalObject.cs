using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class AdditionalObject : MonoBehaviour
{
    public GameObject emptyObject;
    private List<GameObject> objects = new List<GameObject>();
    private GameObject objjj;
    private ARRaycastHit lasthit;

    public void CreateAdditionalTable(Vector3 pos , Quaternion rot)
    {
        Debug.Log("!!!COUNT BEFORE  =" + objects.Count);
        Vector3 pos2 = new Vector3(pos.x, pos.y + 0.81f, pos.z);
        objjj = Instantiate(emptyObject, pos2, rot);
        objjj.AddComponent<ARAnchor>();
        objects.Add(objjj);
        objects[0].GetComponent<CreateAddObject>().InitializedList(objects);
        Debug.Log("!!!COUNT After  =" + objects.Count);
    }

    public void CreateAdditionalRack(Vector3 pos, Quaternion rot)
    {
        Vector3 posFirst = new Vector3(pos.x, pos.y + 0.12f, pos.z);
        objjj = Instantiate(emptyObject, posFirst, rot);
        objjj.AddComponent<ARAnchor>();
        objects.Add(objjj);
        Vector3 posSecond = new Vector3(pos.x, pos.y + 0.5f, pos.z);
        objjj = Instantiate(emptyObject, posSecond, rot);
        objects.Add(objjj);
        objjj.AddComponent<ARAnchor>();
        Vector3 posThird = new Vector3(pos.x, pos.y + 0.9f, pos.z);
        objjj = Instantiate(emptyObject, posThird, rot);
        objects.Add(objjj);
        objjj.AddComponent<ARAnchor>();
        Vector3 posFour = new Vector3(pos.x, pos.y + 1.2f, pos.z);
        objjj = Instantiate(emptyObject, posFour, rot);
        objects.Add(objjj);
        objjj.AddComponent<ARAnchor>();
        for (int i = 0; i < objects.Count; i++)
        {
            Debug.Log("!!!_ INITIALIZED OBJECT " + i);
            objects[i].GetComponent<CreateAddObject>().InitializedList(objects);
        }
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
        Debug.Log("!!!_AAAAA OBJECT COUNT = " + objects.Count);
        for (int i = 0; i < objects.Count; i++)
        {
            if (objects[i] == null)
                continue;
            Debug.Log("!!!_ old position" + objects[i].transform.position);

            //objects[i].transform.Translate(delta);
            objects[i].transform.position = objects[i].transform.position + delta;
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
