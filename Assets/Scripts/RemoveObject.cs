using UnityEngine;

public class RemoveObject : MonoBehaviour
{
    void Update()
    {
        Touch touch = Input.GetTouch(0);
        if (touch.phase == TouchPhase.Began)
        {
            Ray ray = Camera.current.ScreenPointToRay(touch.position);
            RaycastHit hitObject;
            if (Physics.Raycast(ray, out hitObject))
            {
                if(hitObject.transform.parent.transform.parent.gameObject.tag == "Table" || hitObject.transform.parent.transform.parent.gameObject.tag == "rack")
                {
                    AdditionalObject AO = hitObject.transform.parent.transform.parent.gameObject.GetComponent<AdditionalObject>();

                    if (!AO)
                        throw new MissingComponentException("!!!_ "+ AO.GetType().Name + " component not found!");

                    AO.RemoveAdditional();
                }

                Destroy(hitObject.collider.transform.parent.transform.parent.gameObject);
            }
        }       
    }
}
