#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// ARTapAddItem
struct ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4;
// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// AddObjectChoise
struct AddObjectChoise_tEE9CC4BF58FBF7DA6EDF69BB3CF74346CCFB9B28;
// AdditionalObject
struct AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeMenu
struct ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CreateAddObject
struct CreateAddObject_tE1FAB11693D8715FF5011FCD83E88AF95042BBD7;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MissingComponentException
struct MissingComponentException_tFBBE11BC7F2A81EE2B3E19B2B7F6AA4131F84A0E;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveObject
struct MoveObject_tB76ABA839B800A36E31D69AA04BA7FA9A17C8F3C;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Recolour
struct Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// RemoveObject
struct RemoveObject_tF3575F2358E01A187755C0E651757BA1F33F93E6;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RotateObject
struct RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UseSystemFont
struct UseSystemFont_t193304CBF31598C6D0A4395EB7FE0C97416FD5B9;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingComponentException_tFBBE11BC7F2A81EE2B3E19B2B7F6AA4131F84A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral034A6D36A2A7C368E0D7141AA17A3F01C9916350;
IL2CPP_EXTERN_C String_t* _stringLiteral08CD88EF355C86F92CC55F50E5256369102191FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1EE153BE947410284D187C1D7872A6F6B0008D86;
IL2CPP_EXTERN_C String_t* _stringLiteral3050FAF8EF37253224FFB673DEC5FFF945D01AA8;
IL2CPP_EXTERN_C String_t* _stringLiteral397ED4A2D97E36BCF6B46AA97845DF659D00AA34;
IL2CPP_EXTERN_C String_t* _stringLiteral3A3B80CBE325EEC7ED907B9A533982F84AA0F9C5;
IL2CPP_EXTERN_C String_t* _stringLiteral3F2A2EC5D14031AC74A6FBE597DDE2954434F1D5;
IL2CPP_EXTERN_C String_t* _stringLiteral40165C48DD0040747E90D06F432EBB8B4BF7E921;
IL2CPP_EXTERN_C String_t* _stringLiteral44C56CF41D98311822B0B7C97A261D2BEE162B4D;
IL2CPP_EXTERN_C String_t* _stringLiteral49B0A2F250C02C9CC4E2A84B1C2C615188B0DF65;
IL2CPP_EXTERN_C String_t* _stringLiteral5D09DB8364D6F2E984E49321B05A1E9134AF27D6;
IL2CPP_EXTERN_C String_t* _stringLiteral5D73ACB935A71FEFB7FB44DC44538D7156E4D9F5;
IL2CPP_EXTERN_C String_t* _stringLiteral5E87B908BF609DD670DEE455384509003842A981;
IL2CPP_EXTERN_C String_t* _stringLiteral657D239315C4B5B93D6DC37D593FBCF21C19BC31;
IL2CPP_EXTERN_C String_t* _stringLiteral669DF6F85FA09B247F9C9C1B40964FB217E6F86D;
IL2CPP_EXTERN_C String_t* _stringLiteral7AAE1194921BEED460EFB07073BCDDAAF072FF19;
IL2CPP_EXTERN_C String_t* _stringLiteral8519347949156DCDB059672595E753CCEE3B835E;
IL2CPP_EXTERN_C String_t* _stringLiteral8FB81F6BFCAAF3E2C393E9C7B933768B9B52C3E2;
IL2CPP_EXTERN_C String_t* _stringLiteral913CEECDC1EBD7F78F5277CEC349D320CF2640EE;
IL2CPP_EXTERN_C String_t* _stringLiteral98729813C319CD4BBEBEEDA545E067673A4D82AA;
IL2CPP_EXTERN_C String_t* _stringLiteralABC9F72975584F25F6A6A1D9C969F09E40155ED4;
IL2CPP_EXTERN_C String_t* _stringLiteralB5488F52AC94ABF8EE2DAF1B6BF562BBF509D613;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A5CB2E00EB486A497FE13B77E8AEFBCDEE3EDE;
IL2CPP_EXTERN_C String_t* _stringLiteralBBE05CBD3B780C41FCA701C7F846A9FC92191C9E;
IL2CPP_EXTERN_C String_t* _stringLiteralBF910946CA51856717C6B72F0EA0520CBEAE530A;
IL2CPP_EXTERN_C String_t* _stringLiteralC4D898A045489E6813543ECB151533C5DF1BBA76;
IL2CPP_EXTERN_C String_t* _stringLiteralC8F34A285851014F2469F855CFDD9176F7C34327;
IL2CPP_EXTERN_C String_t* _stringLiteralD553922658BB9AD25CD17CCEB9360AACF7C17A46;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A279130101E5FF35F632166DC18EE0CBE258FD;
IL2CPP_EXTERN_C String_t* _stringLiteralD9480A22CE0D75380C4FB6CD609372AA8F9F3653;
IL2CPP_EXTERN_C String_t* _stringLiteralE26B17597CDFB13035D7C6C0E39C4C2F06211C6F;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CDDE61DC4085F768BA21BC629E1411FA39C159;
IL2CPP_EXTERN_C String_t* _stringLiteralECD10141B6D88C65AEBFE173D831574C6E8D08EC;
IL2CPP_EXTERN_C String_t* _stringLiteralEF179A3366082A8B58643894CAEAC99181DF678E;
IL2CPP_EXTERN_C String_t* _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20;
IL2CPP_EXTERN_C String_t* _stringLiteralF78446731E69F6D8C56619916A895264D2E87699;
IL2CPP_EXTERN_C String_t* _stringLiteralFA88DDFF59EBFE34FC6093323C5DF8FA8DA5F8C4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_mA5FF9033B83A645E462F48DABD4105B75CB9C1A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m6C0D164D853001737CDC01D63A5651D819135639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoveObject_Update_m4C0A0516891901DB1BA6C3263CF15DE40946015B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RotateObject_OnSliderChanged_mC2391B4DA321550AF9D64DDD63753BA9B539110F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.MissingComponentException
struct MissingComponentException_tFBBE11BC7F2A81EE2B3E19B2B7F6AA4131F84A0E  : public Exception_t
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// ARTapAddItem
struct ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARTapAddItem::plate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plate_4;
	// UnityEngine.GameObject ARTapAddItem::pot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pot_5;
	// UnityEngine.GameObject ARTapAddItem::floor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___floor_6;
	// UnityEngine.GameObject ARTapAddItem::FineContol
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FineContol_7;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARTapAddItem::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_8;
};

// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARTapToPlaceObject::placementIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placementIndicator_4;
	// UnityEngine.GameObject ARTapToPlaceObject::ghost
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ghost_5;
	// UnityEngine.GameObject ARTapToPlaceObject::objectToPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToPlace_6;
	// UnityEngine.GameObject ARTapToPlaceObject::chair
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chair_7;
	// UnityEngine.GameObject ARTapToPlaceObject::table
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___table_8;
	// UnityEngine.GameObject ARTapToPlaceObject::pouf
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pouf_9;
	// UnityEngine.GameObject ARTapToPlaceObject::shelf
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shelf_10;
	// UnityEngine.GameObject ARTapToPlaceObject::sofa
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sofa_11;
	// UnityEngine.GameObject ARTapToPlaceObject::emptyZone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___emptyZone_12;
	// UnityEngine.Pose ARTapToPlaceObject::PlacementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PlacementPose_13;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARTapToPlaceObject::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_14;
	// System.Boolean ARTapToPlaceObject::placementPoseIsValid
	bool ___placementPoseIsValid_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ARTapToPlaceObject::placementList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___placementList_16;
};

// AddObjectChoise
struct AddObjectChoise_tEE9CC4BF58FBF7DA6EDF69BB3CF74346CCFB9B28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AdditionalObject
struct AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AdditionalObject::emptyObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___emptyObject_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AdditionalObject::objects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___objects_5;
	// UnityEngine.GameObject AdditionalObject::objjj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objjj_6;
};

// ChangeMenu
struct ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ChangeMenu::catalogueControls
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___catalogueControls_4;
	// UnityEngine.GameObject ChangeMenu::moveControls
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___moveControls_5;
	// UnityEngine.GameObject ChangeMenu::rotateControls
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rotateControls_6;
	// UnityEngine.GameObject ChangeMenu::currentlyDisplayed
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentlyDisplayed_7;
	// UnityEngine.GameObject ChangeMenu::deleteControls
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deleteControls_8;
	// UnityEngine.GameObject ChangeMenu::addItemControls
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___addItemControls_9;
	// UnityEngine.GameObject ChangeMenu::ghost
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ghost_10;
	// UnityEngine.GameObject ChangeMenu::placementIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placementIndicator_11;
	// System.Boolean ChangeMenu::isSectionDisplayedToggle
	bool ___isSectionDisplayedToggle_12;
	// System.Boolean ChangeMenu::stopFlag
	bool ___stopFlag_14;
	// UnityEngine.GameObject ChangeMenu::addItemButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___addItemButton_15;
};

struct ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields
{
	// System.Boolean ChangeMenu::isAddItemMode
	bool ___isAddItemMode_13;
	// UnityEngine.GameObject ChangeMenu::currentEmptyZone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentEmptyZone_16;
};

// CreateAddObject
struct CreateAddObject_tE1FAB11693D8715FF5011FCD83E88AF95042BBD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CreateAddObject::currentMode
	bool ___currentMode_4;
};

// MoveObject
struct MoveObject_tB76ABA839B800A36E31D69AA04BA7FA9A17C8F3C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera MoveObject::aRCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___aRCamera_4;
	// UnityEngine.GameObject MoveObject::objectToMove
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToMove_5;
	// UnityEngine.Vector3 MoveObject::oldPose
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldPose_6;
	// UnityEngine.Vector3 MoveObject::newPose
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newPose_7;
};

// Recolour
struct Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material Recolour::valid
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___valid_4;
	// UnityEngine.Material Recolour::invalid
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___invalid_5;
	// UnityEngine.Material Recolour::selected
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___selected_6;
	// System.Collections.Generic.List`1<UnityEngine.Material> Recolour::originalMaterials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___originalMaterials_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Recolour::children
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___children_8;
};

// RemoveObject
struct RemoveObject_tF3575F2358E01A187755C0E651757BA1F33F93E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RotateObject
struct RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject RotateObject::objectToRotate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToRotate_4;
	// UnityEngine.UI.Slider RotateObject::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
	// System.Single RotateObject::previousValue
	float ___previousValue_6;
	// System.Single RotateObject::startValue
	float ___startValue_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UseSystemFont
struct UseSystemFont_t193304CBF31598C6D0A4395EB7FE0C97416FD5B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text UseSystemFont::label
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___label_4;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;

// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m6C0D164D853001737CDC01D63A5651D819135639 (const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.GameObject ARTapAddItem::GetCurrentEmptyZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARTapAddItem_GetCurrentEmptyZone_m258A10F788A15AB1CF1C39DDBB49E880CFB8518F (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void ARTapAddItem::AddObjectOnItem(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem_AddObjectOnItem_m48E3E045F00AA6764D6E8E206877FB0539CE5E52 (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ChangeMenu>()
inline ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* GameObject_GetComponent_TisChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_mA5FF9033B83A645E462F48DABD4105B75CB9C1A8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject ChangeMenu::GetCurrentEmptyZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ChangeMenu_GetCurrentEmptyZone_m3B25DA1213C0B41B928747186007AAE81ECEE15F (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ARTapToPlaceObject::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) ;
// System.Void ARTapToPlaceObject::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Recolour>()
inline Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean Recolour::SetOriginalMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recolour_SetOriginalMaterial_m8F31C8BC150F5381DFF9876F8E60A23F7888E30C (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void Recolour::SetValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recolour_SetValid_m8B42B6C418B7113F51D7E861AD90ED40A0C02C29 (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AdditionalObject>()
inline AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void AdditionalObject::CreateAdditional(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject_CreateAdditional_mC7A6C805132B7520F8475A576D07A5C7FCBEDE0E (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, const RuntimeMethod* method) ;
// System.Void ARTapToPlaceObject::UseObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UseObject_mD90D16B22ADE32005AED84E273E5ED6E60F152B4 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___o0, const RuntimeMethod* method) ;
// System.Void ChangeMenu::ToggleMenu(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_ToggleMenu_m748D4F71C055AD7D75E4AD79F5EBCE2729BB44E7 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void ChangeMenu::AddItemMode(System.Boolean,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_AddItemMode_mF35C6DB03EED1C963DE0E3D7149C186AA31085F8 (bool ___b0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentEmpty1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Recolour::SetSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recolour_SetSelected_mBAAAEB531B044E7F5BE7A8F35244E0256BC7BBBE (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void AdditionalObject::NewPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject_NewPosition_mA22B50873D5CB0CEA489E1F15A01C91EDF245C81 (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___delta0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(T)
inline void List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Recolour::SetMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recolour_SetMaterial_mA070B11ACA26A8EF9E6A417D6BCF63D5C6255271 (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.MissingComponentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingComponentException__ctor_m51EF49C768D48FBCDFE9F639815A42F50C0259C8 (MissingComponentException_tFBBE11BC7F2A81EE2B3E19B2B7F6AA4131F84A0E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void AdditionalObject::RemoveAdditional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject_RemoveAdditional_m2B121783862D9F666B0123BC6A69235E6FFF85E4 (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___call0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Font_GetOSInstalledFontNames_m0C3D5751862D10A13CA25B9DE98C0EAE8A686B75 (const RuntimeMethod* method) ;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* Font_CreateDynamicFontFromOSFont_m3DF4B7A70F4AD6918FC44195252D9A645B3C5D62 (String_t* ___fontname0, int32_t ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdditionalObject::CreateAdditional(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject_CreateAdditional_mC7A6C805132B7520F8475A576D07A5C7FCBEDE0E (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5488F52AC94ABF8EE2DAF1B6BF562BBF509D613);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9A5CB2E00EB486A497FE13B77E8AEFBCDEE3EDE);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Debug.Log("!!!COUNT BEFORE  =" + objects.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___objects_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB9A5CB2E00EB486A497FE13B77E8AEFBCDEE3EDE, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Vector3 pos2 = new Vector3(pos.x, pos.y + 0.8f, pos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos0;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___pos0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pos0;
		float L_9 = L_8.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_5, ((float)il2cpp_codegen_add(L_7, (0.800000012f))), L_9, NULL);
		// objjj = Instantiate(emptyObject, pos2, rot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___emptyObject_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___rot1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___objjj_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objjj_6), (void*)L_13);
		// objects.Add(objjj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___objects_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___objjj_6;
		NullCheck(L_14);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_14, L_15, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Debug.Log("!!!COUNT After  =" + objects.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = __this->___objects_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_16, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB5488F52AC94ABF8EE2DAF1B6BF562BBF509D613, L_18, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// }
		return;
	}
}
// System.Void AdditionalObject::RemoveAdditional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject_RemoveAdditional_m2B121783862D9F666B0123BC6A69235E6FFF85E4 (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F2A2EC5D14031AC74A6FBE597DDE2954434F1D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669DF6F85FA09B247F9C9C1B40964FB217E6F86D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE26B17597CDFB13035D7C6C0E39C4C2F06211C6F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Debug.Log("!!!_remove - We Inside");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral669DF6F85FA09B247F9C9C1B40964FB217E6F86D, NULL);
		// Debug.Log("!!!_OBJECT COUNT = " + objects.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___objects_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE26B17597CDFB13035D7C6C0E39C4C2F06211C6F, L_2, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// for (int i = 0; i < objects.Count; i++)
		V_1 = 0;
		goto IL_005b;
	}

IL_0030:
	{
		// Debug.Log("!!!_" + i);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3F2A2EC5D14031AC74A6FBE597DDE2954434F1D5, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// Destroy(objects[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___objects_5;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// for (int i = 0; i < objects.Count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < objects.Count; i++)
		int32_t L_10 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___objects_5;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_11, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AdditionalObject::NewPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject_NewPosition_mA22B50873D5CB0CEA489E1F15A01C91EDF245C81 (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___delta0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EE153BE947410284D187C1D7872A6F6B0008D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E87B908BF609DD670DEE455384509003842A981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral657D239315C4B5B93D6DC37D593FBCF21C19BC31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE26B17597CDFB13035D7C6C0E39C4C2F06211C6F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Debug.Log("!!!_NeW POSITION - We Inside");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5E87B908BF609DD670DEE455384509003842A981, NULL);
		// Debug.Log("!!!_OBJECT COUNT = " + objects.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___objects_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE26B17597CDFB13035D7C6C0E39C4C2F06211C6F, L_2, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// for (int i = 0; i < objects.Count; i++)
		V_1 = 0;
		goto IL_00b4;
	}

IL_0033:
	{
		// Debug.Log("!!!_ old position" + objects[i].transform.position);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___objects_5;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_2 = L_8;
		String_t* L_9;
		L_9 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_2), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1EE153BE947410284D187C1D7872A6F6B0008D86, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// objects[i].transform.Translate(delta);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___objects_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, L_12, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___delta0;
		NullCheck(L_14);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_14, L_15, NULL);
		// Debug.Log("!!!_ new position" + objects[i].transform.position);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = __this->___objects_5;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_16, L_17, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		V_2 = L_20;
		String_t* L_21;
		L_21 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_2), NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral657D239315C4B5B93D6DC37D593FBCF21C19BC31, L_21, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_22, NULL);
		// for (int i = 0; i < objects.Count; i++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00b4:
	{
		// for (int i = 0; i < objects.Count; i++)
		int32_t L_24 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->___objects_5;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_25, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0033;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AdditionalObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject_Start_mAB25B238C97B670DA0EBA123B278EDA3B8F0A159 (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AdditionalObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject_Update_m58C3C4F9445C0134642926BD84901D2176EE8342 (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AdditionalObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionalObject__ctor_mB8163F4954369E1B85620B4B17C9598BBE729BFE (AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> objects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___objects_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objects_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AddObjectChoise::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddObjectChoise_Start_m67D37C9A10BD1ABDF931DD97B019F2F0A8E864EA (AddObjectChoise_tEE9CC4BF58FBF7DA6EDF69BB3CF74346CCFB9B28* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AddObjectChoise::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddObjectChoise_Update_m45B9F8631C8DA5D5709B8D4E631311A750F5A2E4 (AddObjectChoise_tEE9CC4BF58FBF7DA6EDF69BB3CF74346CCFB9B28* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AddObjectChoise::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddObjectChoise__ctor_mCDDD0228AEA97ABFE03B4AE11E85E7CA424C15CC (AddObjectChoise_tEE9CC4BF58FBF7DA6EDF69BB3CF74346CCFB9B28* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARTapAddItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem_Start_m0882C3332AEF37BE0EEFC14C7F8D95C193711BBE (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m6C0D164D853001737CDC01D63A5651D819135639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aRRaycastManager = FindObjectOfType<ARRaycastManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m6C0D164D853001737CDC01D63A5651D819135639(Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m6C0D164D853001737CDC01D63A5651D819135639_RuntimeMethod_var);
		__this->___aRRaycastManager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRRaycastManager_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void ARTapAddItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem_Update_mDA4E894B0C1D709FD986CFB9B6D6E34FFBC14FCE (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ARTapAddItem::AddObjectOnItem(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem_AddObjectOnItem_m48E3E045F00AA6764D6E8E206877FB0539CE5E52 (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98729813C319CD4BBEBEEDA545E067673A4D82AA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject emptyZone = GetCurrentEmptyZone();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = ARTapAddItem_GetCurrentEmptyZone_m258A10F788A15AB1CF1C39DDBB49E880CFB8518F(__this, NULL);
		V_0 = L_0;
		// GameObject teee = Instantiate(obj, emptyZone.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___obj0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(emptyZone);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// Debug.Log("!!!_ ZAMENA PROISOSHLA");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral98729813C319CD4BBEBEEDA545E067673A4D82AA, NULL);
		// }
		return;
	}
}
// System.Void ARTapAddItem::AddFloorOnItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem_AddFloorOnItem_mD4E7B604B1580A2B26C691DC72A6D0DFA4F49537 (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FB81F6BFCAAF3E2C393E9C7B933768B9B52C3E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddObjectOnItem(floor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___floor_6;
		ARTapAddItem_AddObjectOnItem_m48E3E045F00AA6764D6E8E206877FB0539CE5E52(__this, L_0, NULL);
		// Debug.Log("!!!_ AddFloorOnItem");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8FB81F6BFCAAF3E2C393E9C7B933768B9B52C3E2, NULL);
		// }
		return;
	}
}
// System.Void ARTapAddItem::AddPotOnItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem_AddPotOnItem_m857B15D4A7A378A7F629CE4B279EC35ABA37086D (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034A6D36A2A7C368E0D7141AA17A3F01C9916350);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddObjectOnItem(pot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pot_5;
		ARTapAddItem_AddObjectOnItem_m48E3E045F00AA6764D6E8E206877FB0539CE5E52(__this, L_0, NULL);
		// Debug.Log("!!!_ AddPotOnItem");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral034A6D36A2A7C368E0D7141AA17A3F01C9916350, NULL);
		// }
		return;
	}
}
// System.Void ARTapAddItem::AddPlateOnItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem_AddPlateOnItem_m26AA5E4A0F6B78B6636B04F10BD1597A14FC354B (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44C56CF41D98311822B0B7C97A261D2BEE162B4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddObjectOnItem(plate);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___plate_4;
		ARTapAddItem_AddObjectOnItem_m48E3E045F00AA6764D6E8E206877FB0539CE5E52(__this, L_0, NULL);
		// Debug.Log("!!!_ AddPlateOnItem");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral44C56CF41D98311822B0B7C97A261D2BEE162B4D, NULL);
		// }
		return;
	}
}
// System.Void ARTapAddItem::DestroyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem_DestroyObject_m321055D84BBE75466AB4A97882A8589B43AFD061 (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9480A22CE0D75380C4FB6CD609372AA8F9F3653);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("!!!_ DestroyObject");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD9480A22CE0D75380C4FB6CD609372AA8F9F3653, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject ARTapAddItem::GetCurrentEmptyZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARTapAddItem_GetCurrentEmptyZone_m258A10F788A15AB1CF1C39DDBB49E880CFB8518F (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_mA5FF9033B83A645E462F48DABD4105B75CB9C1A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF78446731E69F6D8C56619916A895264D2E87699);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// ChangeMenu temp = FineContol.GetComponent<ChangeMenu>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___FineContol_7;
		NullCheck(L_0);
		ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* L_1;
		L_1 = GameObject_GetComponent_TisChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_mA5FF9033B83A645E462F48DABD4105B75CB9C1A8(L_0, GameObject_GetComponent_TisChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_mA5FF9033B83A645E462F48DABD4105B75CB9C1A8_RuntimeMethod_var);
		// GameObject currentEmpty = temp.GetCurrentEmptyZone();
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = ChangeMenu_GetCurrentEmptyZone_m3B25DA1213C0B41B928747186007AAE81ECEE15F(L_1, NULL);
		V_0 = L_2;
		// if (currentEmpty == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("!!!_ NULL EMPTY OBJECT");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF78446731E69F6D8C56619916A895264D2E87699, NULL);
		goto IL_002c;
	}

IL_0026:
	{
		// Debug.Log(currentEmpty);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
	}

IL_002c:
	{
		// return currentEmpty;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		return L_6;
	}
}
// System.Void ARTapAddItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapAddItem__ctor_mF18CEB3E3754C1CEEE022115C6CFBB128BBD7001 (ARTapAddItem_t63CA3F8BD7DCAD4303F57D6ACD88C7742939F3B4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARTapToPlaceObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Start_m4A8A22AA04062DE0229C41BC767914F2C04F3020 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m6C0D164D853001737CDC01D63A5651D819135639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aRRaycastManager = FindObjectOfType<ARRaycastManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m6C0D164D853001737CDC01D63A5651D819135639(Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m6C0D164D853001737CDC01D63A5651D819135639_RuntimeMethod_var);
		__this->___aRRaycastManager_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRRaycastManager_14), (void*)L_0);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Update_m9B0A45DCE03CA35CFA8CF6CAB12F0369A1C1BAF4 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePlacementPose();
		ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230(__this, NULL);
		// UpdatePlacementIndicator();
		ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57(__this, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// if (placementPoseIsValid) // works
		bool L_0 = __this->___placementPoseIsValid_15;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// placementIndicator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___placementIndicator_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// placementIndicator.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___placementIndicator_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___PlacementPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = (&__this->___PlacementPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6->___rotation_1;
		NullCheck(L_3);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_3, L_5, L_7, NULL);
		return;
	}

IL_003b:
	{
		// placementIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___placementIndicator_4;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_0, L_1, NULL);
		V_0 = L_2;
		// var hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_3, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_3;
		// aRRaycastManager.Raycast(screenCenter, hits, TrackableType.Planes);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_4 = __this->___aRRaycastManager_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = V_1;
		NullCheck(L_4);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_4, L_6, L_7, ((int32_t)15), NULL);
		// placementPoseIsValid = hits.Count > 0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_9, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		__this->___placementPoseIsValid_15 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		// if (placementPoseIsValid)
		bool L_11 = __this->___placementPoseIsValid_15;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// PlacementPose = hits[0].pose;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_12 = V_1;
		NullCheck(L_12);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_13;
		L_13 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_12, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_13;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14;
		L_14 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		__this->___PlacementPose_13 = L_14;
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::PlaceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_PlaceObject_mCECD0707C6789550497BD4079C19763FB030A1B8 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8519347949156DCDB059672595E753CCEE3B835E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6CDDE61DC4085F768BA21BC629E1411FA39C159);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject temp = ghost;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ghost_5;
		V_0 = L_0;
		// if (placementPoseIsValid)
		bool L_1 = __this->___placementPoseIsValid_15;
		if (!L_1)
		{
			goto IL_0087;
		}
	}
	{
		// ghost.GetComponent<Recolour>().SetOriginalMaterial();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___ghost_5;
		NullCheck(L_2);
		Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* L_3;
		L_3 = GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C(L_2, GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4;
		L_4 = Recolour_SetOriginalMaterial_m8F31C8BC150F5381DFF9876F8E60A23F7888E30C(L_3, NULL);
		// ghost.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___ghost_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// temp = Instantiate(objectToPlace, PlacementPose.position, PlacementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___objectToPlace_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (&__this->___PlacementPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = (&__this->___PlacementPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_7, L_9, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_12;
		// temp.GetComponent<Recolour>().SetValid();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* L_14;
		L_14 = GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C(L_13, GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		NullCheck(L_14);
		Recolour_SetValid_m8B42B6C418B7113F51D7E861AD90ED40A0C02C29(L_14, NULL);
		// placementList.Add(temp);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___placementList_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_15);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_16, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// ghost.transform.parent = placementIndicator.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___ghost_5;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___placementIndicator_4;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_18);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_18, L_20, NULL);
		goto IL_0091;
	}

IL_0087:
	{
		// Debug.Log("!!!_POSE INVALID");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE6CDDE61DC4085F768BA21BC629E1411FA39C159, NULL);
	}

IL_0091:
	{
		// if(objectToPlace.tag == "Table")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___objectToPlace_6;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		if (!L_23)
		{
			goto IL_00d3;
		}
	}
	{
		// AdditionalObject temp2 = temp.GetComponent<AdditionalObject>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		NullCheck(L_24);
		AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* L_25;
		L_25 = GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC(L_24, GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC_RuntimeMethod_var);
		// temp2.CreateAdditional(PlacementPose.position, PlacementPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_26 = (&__this->___PlacementPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = (&__this->___PlacementPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = L_28->___rotation_1;
		NullCheck(L_25);
		AdditionalObject_CreateAdditional_mC7A6C805132B7520F8475A576D07A5C7FCBEDE0E(L_25, L_27, L_29, NULL);
		// Debug.Log("!!!_TABLE- create empty");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8519347949156DCDB059672595E753CCEE3B835E, NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UseObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UseObject_mD90D16B22ADE32005AED84E273E5ED6E60F152B4 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8F34A285851014F2469F855CFDD9176F7C34327);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectToPlace = o;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___o0;
		__this->___objectToPlace_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectToPlace_6), (void*)L_0);
		// Destroy(ghost);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___ghost_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// ghost = Instantiate(o, PlacementPose.position, PlacementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___o0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->___PlacementPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = (&__this->___PlacementPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5->___rotation_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___ghost_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ghost_5), (void*)L_7);
		// ghost.GetComponent<Recolour>().SetValid();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___ghost_5;
		NullCheck(L_8);
		Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* L_9;
		L_9 = GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C(L_8, GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		NullCheck(L_9);
		Recolour_SetValid_m8B42B6C418B7113F51D7E861AD90ED40A0C02C29(L_9, NULL);
		// ghost.transform.parent = placementIndicator.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ghost_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___placementIndicator_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_11);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_11, L_13, NULL);
		// Debug.Log("!!!_ usual object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC8F34A285851014F2469F855CFDD9176F7C34327, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UseChair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UseChair_m7AFE39B332C5E8528B0C7AAAB909940320A22683 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// UseObject(chair);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___chair_7;
		ARTapToPlaceObject_UseObject_mD90D16B22ADE32005AED84E273E5ED6E60F152B4(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UseTable_m9C642237E4357B1D3DD74D5ED9FF45BC8E7F490A (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// UseObject(table);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___table_8;
		ARTapToPlaceObject_UseObject_mD90D16B22ADE32005AED84E273E5ED6E60F152B4(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UsePouf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UsePouf_m647D15E2723BC6D1E1F41BF3C7166B3AD659C3BB (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// UseObject(pouf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pouf_9;
		ARTapToPlaceObject_UseObject_mD90D16B22ADE32005AED84E273E5ED6E60F152B4(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UseShelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UseShelf_mECB1EC768C249FD0C05C4CB1C7A95FC10CCE1B6E (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// UseObject(shelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shelf_10;
		ARTapToPlaceObject_UseObject_mD90D16B22ADE32005AED84E273E5ED6E60F152B4(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UseSofa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UseSofa_m8613D3AA5CAFDDBB78C13412A03D24EE0127E2E6 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// UseObject(sofa);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___sofa_11;
		ARTapToPlaceObject_UseObject_mD90D16B22ADE32005AED84E273E5ED6E60F152B4(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__ctor_m835E4B900ABF4C300EE8938022D18FA3FDD16884 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> placementList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___placementList_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placementList_16), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_Start_m118A747C16FB18557360BAA04B8C35BB9735E7B1 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChangeMenu::SetAddItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_SetAddItem_m2F9EF97C5D90A1B07FEB56B57AFC63BDFF92127E (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40165C48DD0040747E90D06F432EBB8B4BF7E921);
		s_Il2CppMethodInitialized = true;
	}
	{
		// addItemControls.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___addItemControls_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// stopFlag = true;
		__this->___stopFlag_14 = (bool)1;
		// isAddItemMode = false;
		((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___isAddItemMode_13 = (bool)0;
		// addItemButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___addItemButton_15;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Debug.Log("!!!_ addItemControls");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral40165C48DD0040747E90D06F432EBB8B4BF7E921, NULL);
		// }
		return;
	}
}
// System.Void ChangeMenu::SetCatalogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_SetCatalogue_m4FABD6B8E01C6055DD7FA86A73A955612DDFA448 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	{
		// ToggleMenu(catalogueControls);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___catalogueControls_4;
		ChangeMenu_ToggleMenu_m748D4F71C055AD7D75E4AD79F5EBCE2729BB44E7(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeMenu::SetMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_SetMove_m76B6721463D4ACCBE909069765E3518C9E833B04 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	{
		// ToggleMenu(moveControls);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___moveControls_5;
		ChangeMenu_ToggleMenu_m748D4F71C055AD7D75E4AD79F5EBCE2729BB44E7(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeMenu::SetRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_SetRotate_m44FABCD02448745A9DA4897F76D6782D5773BFD2 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	{
		// ToggleMenu(rotateControls);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___rotateControls_6;
		ChangeMenu_ToggleMenu_m748D4F71C055AD7D75E4AD79F5EBCE2729BB44E7(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeMenu::SetDelete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_SetDelete_m5BC024946EADFDAD89D6A0E78CA81C7D35FC39F0 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	{
		// ToggleMenu(deleteControls);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deleteControls_8;
		ChangeMenu_ToggleMenu_m748D4F71C055AD7D75E4AD79F5EBCE2729BB44E7(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeMenu::AddItemMode(System.Boolean,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_AddItemMode_mF35C6DB03EED1C963DE0E3D7149C186AA31085F8 (bool ___b0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentEmpty1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral913CEECDC1EBD7F78F5277CEC349D320CF2640EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD553922658BB9AD25CD17CCEB9360AACF7C17A46);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentEmptyZone = null;
		((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___currentEmptyZone_16 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___currentEmptyZone_16), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// Debug.Log("!!!_BOOL (ADDITEMMODE) = " + b);
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___b0), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral913CEECDC1EBD7F78F5277CEC349D320CF2640EE, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// isAddItemMode = b;
		bool L_2 = ___b0;
		((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___isAddItemMode_13 = L_2;
		// if(currentEmpty != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___currentEmpty1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// currentEmptyZone = currentEmpty;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___currentEmpty1;
		((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___currentEmptyZone_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___currentEmptyZone_16), (void*)L_5);
	}

IL_0031:
	{
		// Debug.Log("!!!_END ADD ITEM MODE");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD553922658BB9AD25CD17CCEB9360AACF7C17A46, NULL);
		// }
		return;
	}
}
// System.Void ChangeMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_Update_m9C427A8AA158E3E0D19C22579A59CE759B7BC218 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AAE1194921BEED460EFB07073BCDDAAF072FF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A279130101E5FF35F632166DC18EE0CBE258FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stopFlag && isAddItemMode)
		bool L_0 = __this->___stopFlag_14;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		bool L_1 = ((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___isAddItemMode_13;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// addItemButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___addItemButton_15;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// addItemControls.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___addItemControls_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// stopFlag = false;
		__this->___stopFlag_14 = (bool)0;
		// Debug.Log("!!!_ ADD ITEM MENU = TRUE");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD5A279130101E5FF35F632166DC18EE0CBE258FD, NULL);
		return;
	}

IL_0039:
	{
		// else if (!stopFlag && !isAddItemMode)
		bool L_4 = __this->___stopFlag_14;
		if (L_4)
		{
			goto IL_006b;
		}
	}
	{
		bool L_5 = ((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___isAddItemMode_13;
		if (L_5)
		{
			goto IL_006b;
		}
	}
	{
		// addItemButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___addItemButton_15;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// stopFlag = true;
		__this->___stopFlag_14 = (bool)1;
		// currentEmptyZone = null;
		((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___currentEmptyZone_16 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___currentEmptyZone_16), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// Debug.Log("!!!_ ADD ITEM MENU = FALSE");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7AAE1194921BEED460EFB07073BCDDAAF072FF19, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void ChangeMenu::ToggleMenu(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu_ToggleMenu_m748D4F71C055AD7D75E4AD79F5EBCE2729BB44E7 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3050FAF8EF37253224FFB673DEC5FFF945D01AA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABC9F72975584F25F6A6A1D9C969F09E40155ED4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA88DDFF59EBFE34FC6093323C5DF8FA8DA5F8C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// addItemControls.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___addItemControls_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (!stopFlag && isAddItemMode)
		bool L_1 = __this->___stopFlag_14;
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		bool L_2 = ((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___isAddItemMode_13;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// stopFlag = true;
		__this->___stopFlag_14 = (bool)1;
		// isAddItemMode = false;
		((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___isAddItemMode_13 = (bool)0;
		// addItemButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___addItemButton_15;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0034:
	{
		// if (currentlyDisplayed == catalogueControls || menu == addItemControls)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___currentlyDisplayed_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___catalogueControls_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___menu0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___addItemControls_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0076;
		}
	}

IL_0055:
	{
		// Destroy(ghost);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ghost_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		// placementIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___placementIndicator_11;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// Debug.Log("!!!_ 1 currentlyDisplayed == catalogueControls");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3050FAF8EF37253224FFB673DEC5FFF945D01AA8, NULL);
	}

IL_0076:
	{
		// if (currentlyDisplayed != menu)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___currentlyDisplayed_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___menu0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_00b0;
		}
	}
	{
		// currentlyDisplayed.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___currentlyDisplayed_7;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// menu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___menu0;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// currentlyDisplayed = menu;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___menu0;
		__this->___currentlyDisplayed_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentlyDisplayed_7), (void*)L_17);
		// isSectionDisplayedToggle = true;
		__this->___isSectionDisplayedToggle_12 = (bool)1;
		// Debug.Log("!!!_ 2 currentlyDisplayed != menu");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFA88DDFF59EBFE34FC6093323C5DF8FA8DA5F8C4, NULL);
		return;
	}

IL_00b0:
	{
		// currentlyDisplayed.SetActive(!isSectionDisplayedToggle);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___currentlyDisplayed_7;
		bool L_19 = __this->___isSectionDisplayedToggle_12;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0), NULL);
		// isSectionDisplayedToggle = !isSectionDisplayedToggle;
		bool L_20 = __this->___isSectionDisplayedToggle_12;
		__this->___isSectionDisplayedToggle_12 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		// Debug.Log("!!!_ 3 else");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralABC9F72975584F25F6A6A1D9C969F09E40155ED4, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject ChangeMenu::GetCurrentEmptyZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ChangeMenu_GetCurrentEmptyZone_m3B25DA1213C0B41B928747186007AAE81ECEE15F (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// addItemControls.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___addItemControls_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// return currentEmptyZone;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1_il2cpp_TypeInfo_var))->___currentEmptyZone_16;
		return L_1;
	}
}
// System.Void ChangeMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMenu__ctor_m656FB437E9540E033BEA7F05F86A3202A0858023 (ChangeMenu_tF753B937D4FFAEBA814A696CB4F5EA8D50728DF1* __this, const RuntimeMethod* method) 
{
	{
		// bool stopFlag = true;
		__this->___stopFlag_14 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CreateAddObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAddObject_Start_mBFB3EFF3FD5444AB1C178324091242B24BA1BACA (CreateAddObject_tE1FAB11693D8715FF5011FCD83E88AF95042BBD7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreateAddObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAddObject_Update_m74D9D60B18C8732392F526E3F5392CCBFF803F09 (CreateAddObject_tE1FAB11693D8715FF5011FCD83E88AF95042BBD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49B0A2F250C02C9CC4E2A84B1C2C615188B0DF65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF179A3366082A8B58643894CAEAC99181DF678E);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_0;
		L_0 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_0;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_1;
		L_1 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_1)
		{
			goto IL_007c;
		}
	}
	{
		// Ray ray = Camera.current.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		NullCheck(L_2);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_2, L_4, NULL);
		// if (Physics.Raycast(ray, out hitObject))
		bool L_6;
		L_6 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_5, (&V_1), NULL);
		if (!L_6)
		{
			goto IL_007c;
		}
	}
	{
		// if(hitObject.transform.gameObject.tag == "empty")
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralEF179A3366082A8B58643894CAEAC99181DF678E, NULL);
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		// currentMode = !currentMode;
		bool L_11 = __this->___currentMode_4;
		__this->___currentMode_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		// Debug.Log("!!!_empty Object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral49B0A2F250C02C9CC4E2A84B1C2C615188B0DF65, NULL);
		// ChangeMenu.AddItemMode(currentMode, hitObject.transform.gameObject);
		bool L_12 = __this->___currentMode_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		ChangeMenu_AddItemMode_mF35C6DB03EED1C963DE0E3D7149C186AA31085F8(L_12, L_14, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void CreateAddObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAddObject__ctor_m0159981430011BD1E1112E0DEFED201301A36CD5 (CreateAddObject_tE1FAB11693D8715FF5011FCD83E88AF95042BBD7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObject_Update_m1D071548445B3B9996D629E7F4F0385E34E47AB2 (MoveObject_tB76ABA839B800A36E31D69AA04BA7FA9A17C8F3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EE153BE947410284D187C1D7872A6F6B0008D86);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_0;
		L_0 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_0;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_1;
		L_1 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_1)
		{
			goto IL_00ba;
		}
	}
	{
		// Ray ray = Camera.current.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		NullCheck(L_2);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_2, L_4, NULL);
		// if (Physics.Raycast(ray, out hitObject))
		bool L_6;
		L_6 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_5, (&V_1), NULL);
		if (!L_6)
		{
			goto IL_00ba;
		}
	}
	{
		// objectToMove = hitObject.transform.parent.transform.parent.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		__this->___objectToMove_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectToMove_5), (void*)L_11);
		// oldPose = objectToMove.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___objectToMove_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		__this->___oldPose_6 = L_14;
		// Debug.Log("!!!_ old position" + oldPose);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___oldPose_6;
		V_2 = L_15;
		String_t* L_16;
		L_16 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_2), NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1EE153BE947410284D187C1D7872A6F6B0008D86, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// objectToMove.GetComponent<Recolour>().SetSelected();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___objectToMove_5;
		NullCheck(L_18);
		Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* L_19;
		L_19 = GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C(L_18, GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		NullCheck(L_19);
		Recolour_SetSelected_mBAAAEB531B044E7F5BE7A8F35244E0256BC7BBBE(L_19, NULL);
		// objectToMove.transform.parent = aRCamera.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___objectToMove_5;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___aRCamera_4;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_21);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_21, L_23, NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void MoveObject::Deselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObject_Deselect_mB5330EE0462EEBF1D1D727C825E1D197CF21F98A (MoveObject_tB76ABA839B800A36E31D69AA04BA7FA9A17C8F3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A3B80CBE325EEC7ED907B9A533982F84AA0F9C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D09DB8364D6F2E984E49321B05A1E9134AF27D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral657D239315C4B5B93D6DC37D593FBCF21C19BC31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Debug.Log("!!!_ DONE");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5D09DB8364D6F2E984E49321B05A1E9134AF27D6, NULL);
		// objectToMove.GetComponent<Recolour>().SetOriginalMaterial();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___objectToMove_5;
		NullCheck(L_0);
		Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* L_1;
		L_1 = GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C(L_0, GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = Recolour_SetOriginalMaterial_m8F31C8BC150F5381DFF9876F8E60A23F7888E30C(L_1, NULL);
		// Debug.Log("!!!_ new position" + objectToMove.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___objectToMove_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral657D239315C4B5B93D6DC37D593FBCF21C19BC31, L_6, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (objectToMove.tag == "Table")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___objectToMove_5;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		if (!L_10)
		{
			goto IL_00b9;
		}
	}
	{
		// Vector3 delta = objectToMove.transform.position - oldPose;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___objectToMove_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___oldPose_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		V_1 = L_15;
		// Debug.Log("!!!_ delta" + objectToMove.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___objectToMove_5;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		V_0 = L_18;
		String_t* L_19;
		L_19 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A3B80CBE325EEC7ED907B9A533982F84AA0F9C5, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		// objectToMove.GetComponent<AdditionalObject>().NewPosition(delta);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___objectToMove_5;
		NullCheck(L_21);
		AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* L_22;
		L_22 = GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC(L_21, GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		NullCheck(L_22);
		AdditionalObject_NewPosition_mA22B50873D5CB0CEA489E1F15A01C91EDF245C81(L_22, L_23, NULL);
	}

IL_00b9:
	{
		// objectToMove.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___objectToMove_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_25, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// objectToMove = null;
		__this->___objectToMove_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectToMove_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// oldPose = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___oldPose_6 = L_26;
		// newPose = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___newPose_7 = L_27;
		// }
		return;
	}
}
// System.Void MoveObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObject__ctor_mB1B72D8759E5CDF8057A64F497100A2ACC4C3A15 (MoveObject_tB76ABA839B800A36E31D69AA04BA7FA9A17C8F3C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Recolour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recolour_Start_m76612F339F76874F8EAC6EB20DE9B1E47733D51D (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// if (gameObject.GetComponent<MeshRenderer>() != null) // has no children
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_0, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// originalMaterials.Add(gameObject.GetComponent<MeshRenderer>().material);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_3 = __this->___originalMaterials_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_4, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		NullCheck(L_3);
		List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline(L_3, L_6, List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		return;
	}

IL_002f:
	{
		// foreach(Transform child in transform.GetChild(0).transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 0, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_9, NULL);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0095:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_12 = V_2;
					if (!L_12)
					{
						goto IL_00a5;
					}
				}
				{
					RuntimeObject* L_13 = V_2;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00a5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008b_1;
			}

IL_0048_1:
			{
				// foreach(Transform child in transform.GetChild(0).transform)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_15, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// Debug.Log(child.gameObject.name);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_17);
				String_t* L_18;
				L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
				// children.Add(child.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___children_8;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_1;
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
				NullCheck(L_19);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_19, L_21, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// originalMaterials.Add(child.GetComponent<MeshRenderer>().material);
				List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_22 = __this->___originalMaterials_7;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = V_1;
				NullCheck(L_23);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_24;
				L_24 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_23, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
				NullCheck(L_24);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25;
				L_25 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_24, NULL);
				NullCheck(L_22);
				List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline(L_22, L_25, List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
			}

IL_008b_1:
			{
				// foreach(Transform child in transform.GetChild(0).transform)
				RuntimeObject* L_26 = V_0;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void Recolour::SetValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recolour_SetValid_m8B42B6C418B7113F51D7E861AD90ED40A0C02C29 (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(valid);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___valid_4;
		bool L_1;
		L_1 = Recolour_SetMaterial_mA070B11ACA26A8EF9E6A417D6BCF63D5C6255271(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Recolour::SetInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recolour_SetInvalid_m7844287988C5221204B2DDB461DC1666B61D9685 (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(invalid);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___invalid_5;
		bool L_1;
		L_1 = Recolour_SetMaterial_mA070B11ACA26A8EF9E6A417D6BCF63D5C6255271(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Recolour::SetSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recolour_SetSelected_mBAAAEB531B044E7F5BE7A8F35244E0256BC7BBBE (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(selected);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___selected_6;
		bool L_1;
		L_1 = Recolour_SetMaterial_mA070B11ACA26A8EF9E6A417D6BCF63D5C6255271(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Recolour::SetMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recolour_SetMaterial_mA070B11ACA26A8EF9E6A417D6BCF63D5C6255271 (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (gameObject.GetComponent<MeshRenderer>() != null) // has no children
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_0, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// gameObject.GetComponent<MeshRenderer>().material = m;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___m0;
		NullCheck(L_4);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_4, L_5, NULL);
		goto IL_005f;
	}

IL_0026:
	{
		// foreach(GameObject child in children)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___children_8;
		NullCheck(L_6);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_7;
		L_7 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_6, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_0034_1:
			{
				// foreach(GameObject child in children)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// child.GetComponent<MeshRenderer>().material = m;
				NullCheck(L_8);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9;
				L_9 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_8, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ___m0;
				NullCheck(L_9);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_9, L_10, NULL);
			}

IL_0046_1:
			{
				// foreach(GameObject child in children)
				bool L_11;
				L_11 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Recolour::SetOriginalMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recolour_SetOriginalMaterial_m8F31C8BC150F5381DFF9876F8E60A23F7888E30C (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (gameObject.GetComponent<MeshRenderer>() != null) // has no children
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_0, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// gameObject.GetComponent<MeshRenderer>().material = originalMaterials[0];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_5 = __this->___originalMaterials_7;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_5, 0, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		NullCheck(L_4);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_4, L_6, NULL);
		goto IL_007b;
	}

IL_0031:
	{
		// int i = 0;
		V_0 = 0;
		// foreach(GameObject child in children)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___children_8;
		NullCheck(L_7);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_8;
		L_8 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_7, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0062_1;
			}

IL_0041_1:
			{
				// foreach(GameObject child in children)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// child.GetComponent<MeshRenderer>().material = originalMaterials[i];
				NullCheck(L_9);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10;
				L_10 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_9, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
				List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_11 = __this->___originalMaterials_7;
				int32_t L_12 = V_0;
				NullCheck(L_11);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
				L_13 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_11, L_12, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
				NullCheck(L_10);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_10, L_13, NULL);
				// i++;
				int32_t L_14 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_0062_1:
			{
				// foreach(GameObject child in children)
				bool L_15;
				L_15 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_007b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Recolour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recolour__ctor_mD7C2B4F448DBCD5DE85937004566E0F7358D8D1C (Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Material> originalMaterials = new List<Material>();
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C(L_0, List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		__this->___originalMaterials_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalMaterials_7), (void*)L_0);
		// private List<GameObject> children = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___children_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_8), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RemoveObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveObject_Update_m4C0A0516891901DB1BA6C3263CF15DE40946015B (RemoveObject_tF3575F2358E01A187755C0E651757BA1F33F93E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08CD88EF355C86F92CC55F50E5256369102191FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral397ED4A2D97E36BCF6B46AA97845DF659D00AA34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D73ACB935A71FEFB7FB44DC44538D7156E4D9F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4D898A045489E6813543ECB151533C5DF1BBA76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECD10141B6D88C65AEBFE173D831574C6E8D08EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* V_2 = NULL;
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_0;
		L_0 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_0;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_1;
		L_1 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_1)
		{
			goto IL_0107;
		}
	}
	{
		// Ray ray = Camera.current.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		NullCheck(L_2);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_2, L_4, NULL);
		// if (Physics.Raycast(ray, out hitObject))
		bool L_6;
		L_6 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_5, (&V_1), NULL);
		if (!L_6)
		{
			goto IL_0107;
		}
	}
	{
		// Debug.Log("!!!_ StartDestroy!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5D73ACB935A71FEFB7FB44DC44538D7156E4D9F5, NULL);
		// if(hitObject.transform.parent.transform.parent.gameObject.tag == "Table")
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteralF59B8D72542CE7CA46EF3732C2A3A46BB5B8EF20, NULL);
		if (!L_13)
		{
			goto IL_00d8;
		}
	}
	{
		// Debug.Log("!!!_GET COMPONENT");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralECD10141B6D88C65AEBFE173D831574C6E8D08EC, NULL);
		// AdditionalObject AO = hitObject.transform.parent.transform.parent.gameObject.GetComponent<AdditionalObject>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_16, NULL);
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* L_19;
		L_19 = GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC(L_18, GameObject_GetComponent_TisAdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28_m3FD1D1EC780A9B775D22E06F1B2CDEF96FDCF6BC_RuntimeMethod_var);
		V_2 = L_19;
		// if (!AO)
		AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_20, NULL);
		if (L_21)
		{
			goto IL_00be;
		}
	}
	{
		// throw new MissingComponentException("!!!_ "+ AO.GetType().Name + " component not found!");
		AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* L_22 = V_2;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_22, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBE05CBD3B780C41FCA701C7F846A9FC92191C9E)), L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF910946CA51856717C6B72F0EA0520CBEAE530A)), NULL);
		MissingComponentException_tFBBE11BC7F2A81EE2B3E19B2B7F6AA4131F84A0E* L_26 = (MissingComponentException_tFBBE11BC7F2A81EE2B3E19B2B7F6AA4131F84A0E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingComponentException_tFBBE11BC7F2A81EE2B3E19B2B7F6AA4131F84A0E_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		MissingComponentException__ctor_m51EF49C768D48FBCDFE9F639815A42F50C0259C8(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RemoveObject_Update_m4C0A0516891901DB1BA6C3263CF15DE40946015B_RuntimeMethod_var)));
	}

IL_00be:
	{
		// Debug.Log("!!!START REMOVE COMPONENT");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC4D898A045489E6813543ECB151533C5DF1BBA76, NULL);
		// AO.RemoveAdditional();
		AdditionalObject_tE4AB9D7D9CDD1634AB123379B602B65CEE347A28* L_27 = V_2;
		NullCheck(L_27);
		AdditionalObject_RemoveAdditional_m2B121783862D9F666B0123BC6A69235E6FFF85E4(L_27, NULL);
		// Debug.Log("!!!_REMOVE EMPTY OBJECT");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral08CD88EF355C86F92CC55F50E5256369102191FD, NULL);
	}

IL_00d8:
	{
		// Destroy(hitObject.collider.transform.parent.transform.parent.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28;
		L_28 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_29, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_31, NULL);
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_33, NULL);
		// Debug.Log("!!!_REMOVE USUAL OBJECT");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral397ED4A2D97E36BCF6B46AA97845DF659D00AA34, NULL);
	}

IL_0107:
	{
		// }
		return;
	}
}
// System.Void RemoveObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveObject__ctor_m839BD6B910804DA9A55C493C208FB3CDF792A554 (RemoveObject_tF3575F2358E01A187755C0E651757BA1F33F93E6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RotateObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_Awake_m7B764A53E50707EACEBB2BE7670FE17FEBC86D86 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotateObject_OnSliderChanged_mC2391B4DA321550AF9D64DDD63753BA9B539110F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider.onValueChanged.AddListener (OnSliderChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_5;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)RotateObject_OnSliderChanged_mC2391B4DA321550AF9D64DDD63753BA9B539110F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_1, L_2, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// previousValue = slider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___slider_5;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		__this->___previousValue_6 = L_4;
		// }
		return;
	}
}
// System.Void RotateObject::OnSliderChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_OnSliderChanged_mC2391B4DA321550AF9D64DDD63753BA9B539110F (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, float ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float delta = value - previousValue;
		float L_0 = ___value0;
		float L_1 = __this->___previousValue_6;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// objectToRotate.transform.Rotate (Vector3.up * delta * 360);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___objectToRotate_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (360.0f), NULL);
		NullCheck(L_3);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_3, L_7, NULL);
		// previousValue = value;
		float L_8 = ___value0;
		__this->___previousValue_6 = L_8;
		// }
		return;
	}
}
// System.Void RotateObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_Update_mECF506F1D0575C45638D5E97A9352E88D2DB4530 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_0;
		L_0 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_0;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_1;
		L_1 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_1)
		{
			goto IL_0060;
		}
	}
	{
		// Ray ray = Camera.current.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		NullCheck(L_2);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_2, L_4, NULL);
		// if (Physics.Raycast(ray, out hitObject))
		bool L_6;
		L_6 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_5, (&V_1), NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// objectToRotate = hitObject.transform.parent.transform.parent.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		__this->___objectToRotate_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectToRotate_4), (void*)L_11);
		// objectToRotate.GetComponent<Recolour>().SetSelected();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___objectToRotate_4;
		NullCheck(L_12);
		Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* L_13;
		L_13 = GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C(L_12, GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		NullCheck(L_13);
		Recolour_SetSelected_mBAAAEB531B044E7F5BE7A8F35244E0256BC7BBBE(L_13, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void RotateObject::Deselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject_Deselect_mEF3BE27E54928BD981E5A4AF6B2EE215073E137E (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectToRotate.GetComponent<Recolour>().SetOriginalMaterial();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___objectToRotate_4;
		NullCheck(L_0);
		Recolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F* L_1;
		L_1 = GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C(L_0, GameObject_GetComponent_TisRecolour_t75B075AFBF6D2C2FFE72512713DF3D8A0595C45F_m115186606F3E9181EE4C839D80BE94F8383B8A9C_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = Recolour_SetOriginalMaterial_m8F31C8BC150F5381DFF9876F8E60A23F7888E30C(L_1, NULL);
		// objectToRotate = null;
		__this->___objectToRotate_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectToRotate_4), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// slider.value = startValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___slider_5;
		float L_4 = __this->___startValue_7;
		NullCheck(L_3);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void RotateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObject__ctor_m47FED6A0A715C09D80A746CF61B770974AFB89A9 (RotateObject_t2A48E2837E95F8E2C46BE2DB39CEF9A7C3621935* __this, const RuntimeMethod* method) 
{
	{
		// private float startValue = 0.5f;
		__this->___startValue_7 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UseSystemFont::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UseSystemFont_Start_m939D183FC6386CACCC2559671C88F996F6F62B16 (UseSystemFont_t193304CBF31598C6D0A4395EB7FE0C97416FD5B9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* V_1 = NULL;
	{
		// string[] systemFontNames = Font.GetOSInstalledFontNames();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Font_GetOSInstalledFontNames_m0C3D5751862D10A13CA25B9DE98C0EAE8A686B75(NULL);
		// string fontName = systemFontNames[0];
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// int fontSize = 33;
		V_0 = ((int32_t)33);
		// Font systemFont = Font.CreateDynamicFontFromOSFont(fontName, fontSize);
		int32_t L_3 = V_0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_4;
		L_4 = Font_CreateDynamicFontFromOSFont_m3DF4B7A70F4AD6918FC44195252D9A645B3C5D62(L_2, L_3, NULL);
		V_1 = L_4;
		// label.font = systemFont;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___label_4;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_6 = V_1;
		NullCheck(L_5);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UseSystemFont::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UseSystemFont__ctor_m47453C50738AAF4DA1F2EEDD33A9043DBD67F21D (UseSystemFont_t193304CBF31598C6D0A4395EB7FE0C97416FD5B9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
