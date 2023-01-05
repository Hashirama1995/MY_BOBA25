using System.Collections;
using System.Collections.Generic;
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
        GameObject teee = Instantiate(obj, emptyZone.transform.position, Quaternion.identity);
        Destroy(emptyZone);
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
}
