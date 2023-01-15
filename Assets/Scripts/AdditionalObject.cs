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
        Vector3 pos2 = new Vector3(pos.x, pos.y + 0.81f, pos.z);
        objjj = Instantiate(emptyObject, pos2, rot);
        objjj.AddComponent<ARAnchor>();
        objects.Add(objjj);
        objects[0].GetComponent<CreateAddObject>().InitializedList(objects);
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
            objects[i].GetComponent<CreateAddObject>().InitializedList(objects);
        }
    }

    public void RemoveAdditional()
    {
        //Destroy(objjj);
        
        for (int i = 0; i < objects.Count; i++)
        {
            Destroy(objects[i]);
        }
    }

    public void NewPosition(Vector3 delta)
    {
        for (int i = 0; i < objects.Count; i++)
        {
            if (objects[i] == null)
                continue;
            objects[i].transform.position = objects[i].transform.position + delta;
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
