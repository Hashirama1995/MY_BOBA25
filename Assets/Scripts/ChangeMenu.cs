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
    
    void Start()
    {
        /*
        catalogueControls.SetActive(true);
        currentlyDisplayed = catalogueControls;
        */
    }
    
    public void SetAddItem()
    {
        //ToggleMenu(addItemControls);
        addItemControls.SetActive(true);
        stopFlag = true;
        isAddItemMode = false;
        addItemButton.SetActive(false);
        Debug.Log("!!!_ addItemControls");
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

    /*
    public void SetAddItemChoise()
    {
        Debug.Log("!!!_SetAddItemChoise");
    }*/

    public static void AddItemMode(bool b, GameObject currentEmpty = null)
    {
        currentEmptyZone = null;
        Debug.Log("!!!_BOOL (ADDITEMMODE) = " + b);
        isAddItemMode = b;
        if(currentEmpty != null)
        {
            currentEmptyZone = currentEmpty;
        }
        Debug.Log("!!!_END ADD ITEM MODE");
    }

    private void Update()
    {
        if (stopFlag && isAddItemMode)
        {
            addItemButton.SetActive(true);
            addItemControls.SetActive(false);
            stopFlag = false;
            Debug.Log("!!!_ ADD ITEM MENU = TRUE");
        }
        else if (!stopFlag && !isAddItemMode)
        {
            addItemButton.SetActive(false);
            stopFlag = true;
            currentEmptyZone = null;
            Debug.Log("!!!_ ADD ITEM MENU = FALSE");
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
            Debug.Log("!!!_ 1 currentlyDisplayed == catalogueControls");
        }
        
        if (currentlyDisplayed != menu)
        {
            currentlyDisplayed.SetActive(false);
            menu.SetActive(true);
            currentlyDisplayed = menu;
            isSectionDisplayedToggle = true;
            Debug.Log("!!!_ 2 currentlyDisplayed != menu");
        }
        else
        {
            currentlyDisplayed.SetActive(!isSectionDisplayedToggle);
            isSectionDisplayedToggle = !isSectionDisplayedToggle;
            Debug.Log("!!!_ 3 else");
        }
    }

    public GameObject GetCurrentEmptyZone()
    {
        addItemControls.SetActive(false);
        return currentEmptyZone;
    }
}
