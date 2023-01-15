using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ARTapAddItem : MonoBehaviour
{

    public GameObject plate;
    public GameObject pot;
    public GameObject floor;
    public GameObject FineContol;

    private ARRaycastManager aRRaycastManager;
    // Start is called before the first frame update
    void Start()
    {
        aRRaycastManager = FindObjectOfType<ARRaycastManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void AddObjectOnItem(GameObject obj)
    {
        GameObject emptyZone = GetCurrentEmptyZone();
        List<GameObject> list = GetCurrentEmptyList();
        GameObject teee = Instantiate(obj, emptyZone.transform.position, Quaternion.identity);
        CreateAddObject cao = teee.GetComponent<CreateAddObject>();

        if(list != null)
        {
            cao.InitializedList(list);
            //Debug.Log("!!!_______" + list.Contains(emptyZone));

            int a = list.FindInstanceID(emptyZone);
            Debug.Log("!!!_______" + a);

            CreateAddObject temp = emptyZone.GetComponent<CreateAddObject>();
            temp.ReplaceObject(a, teee);
        }
        else
        {
            Debug.Log("!!!__LIST IS EMPTY ARTAPADDITEM");
            CreateAddObject temp = emptyZone.GetComponent<CreateAddObject>();
            temp.ReplaceObject(0, teee);
        }
        
        Debug.Log("!!!_ ZAMENA PROISOSHLA");
    }

    public void AddFloorOnItem()
    {
        AddObjectOnItem(floor);
        Debug.Log("!!!_ AddFloorOnItem");
    }

    public void AddPotOnItem()
    {
        AddObjectOnItem(pot);
        Debug.Log("!!!_ AddPotOnItem");
    }

    public void AddPlateOnItem()
    {
        AddObjectOnItem(plate);
        Debug.Log("!!!_ AddPlateOnItem");
    }

    public void DestroyObject()
    {
        Debug.Log("!!!_ DestroyObject");
    }

    private GameObject GetCurrentEmptyZone()
    {
        ChangeMenu temp = FineContol.GetComponent<ChangeMenu>();
        GameObject currentEmpty = temp.GetCurrentEmptyZone();
        if (currentEmpty == null)
        {
            Debug.Log("!!!_ NULL EMPTY OBJECT");
        }
        else
        {
            Debug.Log(currentEmpty);
        }
        return currentEmpty;
    }

    private List<GameObject> GetCurrentEmptyList()
    {
        ChangeMenu temp = FineContol.GetComponent<ChangeMenu>();
        List<GameObject> list = temp.GetCurrentEmptyList();
        if (list == null)
        {
            Debug.Log("!!!_ NULL EMPTY list");
        }
        return list;
    }
}
