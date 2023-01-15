using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class ChangeMenu : MonoBehaviour
{
    public GameObject catalogueControls;
    public GameObject moveControls;
    public GameObject rotateControls;
    public GameObject currentlyDisplayed;
    public GameObject deleteControls;
    public GameObject addItemControls;
    public GameObject ghost;
    public GameObject placementIndicator;
    
    public bool isSectionDisplayedToggle = false;

    private static bool isAddItemMode = false;
    bool stopFlag = true;
    public GameObject addItemButton;
    private static GameObject currentEmptyZone;
    private static List<GameObject> currentEmptyList;
    
    void Start()
    {

    }
    
    public void SetAddItem()
    {
        //ToggleMenu(addItemControls);
        addItemControls.SetActive(true);
        stopFlag = true;
        isAddItemMode = false;
        addItemButton.SetActive(false);
    }

    public void SetCatalogue()
    {
        ToggleMenu(catalogueControls);
    }
    public void SetMove()
    {
        ToggleMenu(moveControls);
    }
    
    public void SetRotate()
    {
        ToggleMenu(rotateControls);
    }
    
    public void SetDelete()
    {
        ToggleMenu(deleteControls);
    }


    public static void AddItemMode(bool b, List<GameObject> list, GameObject currentEmpty = null)
    {
        currentEmptyZone = null;
        //currentEmptyList = null;
        isAddItemMode = b;
        if (currentEmpty != null )
        {
            currentEmptyZone = currentEmpty;            
        }
        if(list != null)
        {
            currentEmptyList = list;
        }
    }

    private void Update()
    {
        if (stopFlag && isAddItemMode)
        {
            addItemButton.SetActive(true);
            addItemControls.SetActive(false);
            stopFlag = false;
        }
        else if (!stopFlag && !isAddItemMode)
        {
            addItemButton.SetActive(false);
            stopFlag = true;
            currentEmptyZone = null;
        }
    }

    private void ToggleMenu(GameObject menu)
    {
        addItemControls.SetActive(false);
        if (!stopFlag && isAddItemMode)
        {
            stopFlag = true;
            isAddItemMode = false;
            addItemButton.SetActive(false);
        }

        if (currentlyDisplayed == catalogueControls || menu == addItemControls)
        {
            Destroy(ghost);
            placementIndicator.SetActive(false);
        }
        
        if (currentlyDisplayed != menu)
        {
            currentlyDisplayed.SetActive(false);
            menu.SetActive(true);
            currentlyDisplayed = menu;
            isSectionDisplayedToggle = true;
        }
        else
        {
            currentlyDisplayed.SetActive(!isSectionDisplayedToggle);
            isSectionDisplayedToggle = !isSectionDisplayedToggle;
        }
    }

    public GameObject GetCurrentEmptyZone()
    {
        addItemControls.SetActive(false);
        return currentEmptyZone;
    }

    public List<GameObject> GetCurrentEmptyList()
    {
        return currentEmptyList;
    }
}
