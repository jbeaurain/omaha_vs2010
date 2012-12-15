

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Dec 12 21:37:02 2012
 */
/* Compiler settings for scons-out\dbg-win\obj\goopdate\omaha3_idl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __omaha3_idl_h__
#define __omaha3_idl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGoogleUpdate3_FWD_DEFINED__
#define __IGoogleUpdate3_FWD_DEFINED__
typedef interface IGoogleUpdate3 IGoogleUpdate3;
#endif 	/* __IGoogleUpdate3_FWD_DEFINED__ */


#ifndef __IAppBundle_FWD_DEFINED__
#define __IAppBundle_FWD_DEFINED__
typedef interface IAppBundle IAppBundle;
#endif 	/* __IAppBundle_FWD_DEFINED__ */


#ifndef __IApp_FWD_DEFINED__
#define __IApp_FWD_DEFINED__
typedef interface IApp IApp;
#endif 	/* __IApp_FWD_DEFINED__ */


#ifndef __IAppVersion_FWD_DEFINED__
#define __IAppVersion_FWD_DEFINED__
typedef interface IAppVersion IAppVersion;
#endif 	/* __IAppVersion_FWD_DEFINED__ */


#ifndef __IPackage_FWD_DEFINED__
#define __IPackage_FWD_DEFINED__
typedef interface IPackage IPackage;
#endif 	/* __IPackage_FWD_DEFINED__ */


#ifndef __ICurrentState_FWD_DEFINED__
#define __ICurrentState_FWD_DEFINED__
typedef interface ICurrentState ICurrentState;
#endif 	/* __ICurrentState_FWD_DEFINED__ */


#ifndef __IRegistrationUpdateHook_FWD_DEFINED__
#define __IRegistrationUpdateHook_FWD_DEFINED__
typedef interface IRegistrationUpdateHook IRegistrationUpdateHook;
#endif 	/* __IRegistrationUpdateHook_FWD_DEFINED__ */


#ifndef __ICredentialDialog_FWD_DEFINED__
#define __ICredentialDialog_FWD_DEFINED__
typedef interface ICredentialDialog ICredentialDialog;
#endif 	/* __ICredentialDialog_FWD_DEFINED__ */


#ifndef __IGoogleUpdate3Web_FWD_DEFINED__
#define __IGoogleUpdate3Web_FWD_DEFINED__
typedef interface IGoogleUpdate3Web IGoogleUpdate3Web;
#endif 	/* __IGoogleUpdate3Web_FWD_DEFINED__ */


#ifndef __IGoogleUpdate3WebSecurity_FWD_DEFINED__
#define __IGoogleUpdate3WebSecurity_FWD_DEFINED__
typedef interface IGoogleUpdate3WebSecurity IGoogleUpdate3WebSecurity;
#endif 	/* __IGoogleUpdate3WebSecurity_FWD_DEFINED__ */


#ifndef __IAppBundleWeb_FWD_DEFINED__
#define __IAppBundleWeb_FWD_DEFINED__
typedef interface IAppBundleWeb IAppBundleWeb;
#endif 	/* __IAppBundleWeb_FWD_DEFINED__ */


#ifndef __IAppWeb_FWD_DEFINED__
#define __IAppWeb_FWD_DEFINED__
typedef interface IAppWeb IAppWeb;
#endif 	/* __IAppWeb_FWD_DEFINED__ */


#ifndef __IAppVersionWeb_FWD_DEFINED__
#define __IAppVersionWeb_FWD_DEFINED__
typedef interface IAppVersionWeb IAppVersionWeb;
#endif 	/* __IAppVersionWeb_FWD_DEFINED__ */


#ifndef __ICoCreateAsyncStatus_FWD_DEFINED__
#define __ICoCreateAsyncStatus_FWD_DEFINED__
typedef interface ICoCreateAsyncStatus ICoCreateAsyncStatus;
#endif 	/* __ICoCreateAsyncStatus_FWD_DEFINED__ */


#ifndef __ICoCreateAsync_FWD_DEFINED__
#define __ICoCreateAsync_FWD_DEFINED__
typedef interface ICoCreateAsync ICoCreateAsync;
#endif 	/* __ICoCreateAsync_FWD_DEFINED__ */


#ifndef __IBrowserHttpRequest2_FWD_DEFINED__
#define __IBrowserHttpRequest2_FWD_DEFINED__
typedef interface IBrowserHttpRequest2 IBrowserHttpRequest2;
#endif 	/* __IBrowserHttpRequest2_FWD_DEFINED__ */


#ifndef __IProcessLauncher_FWD_DEFINED__
#define __IProcessLauncher_FWD_DEFINED__
typedef interface IProcessLauncher IProcessLauncher;
#endif 	/* __IProcessLauncher_FWD_DEFINED__ */


#ifndef __IOneClickProcessLauncher_FWD_DEFINED__
#define __IOneClickProcessLauncher_FWD_DEFINED__
typedef interface IOneClickProcessLauncher IOneClickProcessLauncher;
#endif 	/* __IOneClickProcessLauncher_FWD_DEFINED__ */


#ifndef __IProgressWndEvents_FWD_DEFINED__
#define __IProgressWndEvents_FWD_DEFINED__
typedef interface IProgressWndEvents IProgressWndEvents;
#endif 	/* __IProgressWndEvents_FWD_DEFINED__ */


#ifndef __IJobObserver_FWD_DEFINED__
#define __IJobObserver_FWD_DEFINED__
typedef interface IJobObserver IJobObserver;
#endif 	/* __IJobObserver_FWD_DEFINED__ */


#ifndef __IGoogleUpdate_FWD_DEFINED__
#define __IGoogleUpdate_FWD_DEFINED__
typedef interface IGoogleUpdate IGoogleUpdate;
#endif 	/* __IGoogleUpdate_FWD_DEFINED__ */


#ifndef __IGoogleUpdateCore_FWD_DEFINED__
#define __IGoogleUpdateCore_FWD_DEFINED__
typedef interface IGoogleUpdateCore IGoogleUpdateCore;
#endif 	/* __IGoogleUpdateCore_FWD_DEFINED__ */


#ifndef __IGoogleUpdate3_FWD_DEFINED__
#define __IGoogleUpdate3_FWD_DEFINED__
typedef interface IGoogleUpdate3 IGoogleUpdate3;
#endif 	/* __IGoogleUpdate3_FWD_DEFINED__ */


#ifndef __IAppBundle_FWD_DEFINED__
#define __IAppBundle_FWD_DEFINED__
typedef interface IAppBundle IAppBundle;
#endif 	/* __IAppBundle_FWD_DEFINED__ */


#ifndef __IApp_FWD_DEFINED__
#define __IApp_FWD_DEFINED__
typedef interface IApp IApp;
#endif 	/* __IApp_FWD_DEFINED__ */


#ifndef __IAppVersion_FWD_DEFINED__
#define __IAppVersion_FWD_DEFINED__
typedef interface IAppVersion IAppVersion;
#endif 	/* __IAppVersion_FWD_DEFINED__ */


#ifndef __IPackage_FWD_DEFINED__
#define __IPackage_FWD_DEFINED__
typedef interface IPackage IPackage;
#endif 	/* __IPackage_FWD_DEFINED__ */


#ifndef __ICurrentState_FWD_DEFINED__
#define __ICurrentState_FWD_DEFINED__
typedef interface ICurrentState ICurrentState;
#endif 	/* __ICurrentState_FWD_DEFINED__ */


#ifndef __IGoogleUpdate3Web_FWD_DEFINED__
#define __IGoogleUpdate3Web_FWD_DEFINED__
typedef interface IGoogleUpdate3Web IGoogleUpdate3Web;
#endif 	/* __IGoogleUpdate3Web_FWD_DEFINED__ */


#ifndef __IAppBundleWeb_FWD_DEFINED__
#define __IAppBundleWeb_FWD_DEFINED__
typedef interface IAppBundleWeb IAppBundleWeb;
#endif 	/* __IAppBundleWeb_FWD_DEFINED__ */


#ifndef __IAppWeb_FWD_DEFINED__
#define __IAppWeb_FWD_DEFINED__
typedef interface IAppWeb IAppWeb;
#endif 	/* __IAppWeb_FWD_DEFINED__ */


#ifndef __IAppVersionWeb_FWD_DEFINED__
#define __IAppVersionWeb_FWD_DEFINED__
typedef interface IAppVersionWeb IAppVersionWeb;
#endif 	/* __IAppVersionWeb_FWD_DEFINED__ */


#ifndef __ICoCreateAsyncStatus_FWD_DEFINED__
#define __ICoCreateAsyncStatus_FWD_DEFINED__
typedef interface ICoCreateAsyncStatus ICoCreateAsyncStatus;
#endif 	/* __ICoCreateAsyncStatus_FWD_DEFINED__ */


#ifndef __GoogleUpdate3UserClass_FWD_DEFINED__
#define __GoogleUpdate3UserClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleUpdate3UserClass GoogleUpdate3UserClass;
#else
typedef struct GoogleUpdate3UserClass GoogleUpdate3UserClass;
#endif /* __cplusplus */

#endif 	/* __GoogleUpdate3UserClass_FWD_DEFINED__ */


#ifndef __GoogleUpdate3ServiceClass_FWD_DEFINED__
#define __GoogleUpdate3ServiceClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleUpdate3ServiceClass GoogleUpdate3ServiceClass;
#else
typedef struct GoogleUpdate3ServiceClass GoogleUpdate3ServiceClass;
#endif /* __cplusplus */

#endif 	/* __GoogleUpdate3ServiceClass_FWD_DEFINED__ */


#ifndef __GoogleUpdate3WebUserClass_FWD_DEFINED__
#define __GoogleUpdate3WebUserClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleUpdate3WebUserClass GoogleUpdate3WebUserClass;
#else
typedef struct GoogleUpdate3WebUserClass GoogleUpdate3WebUserClass;
#endif /* __cplusplus */

#endif 	/* __GoogleUpdate3WebUserClass_FWD_DEFINED__ */


#ifndef __GoogleUpdate3WebMachineClass_FWD_DEFINED__
#define __GoogleUpdate3WebMachineClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleUpdate3WebMachineClass GoogleUpdate3WebMachineClass;
#else
typedef struct GoogleUpdate3WebMachineClass GoogleUpdate3WebMachineClass;
#endif /* __cplusplus */

#endif 	/* __GoogleUpdate3WebMachineClass_FWD_DEFINED__ */


#ifndef __GoogleUpdate3WebServiceClass_FWD_DEFINED__
#define __GoogleUpdate3WebServiceClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleUpdate3WebServiceClass GoogleUpdate3WebServiceClass;
#else
typedef struct GoogleUpdate3WebServiceClass GoogleUpdate3WebServiceClass;
#endif /* __cplusplus */

#endif 	/* __GoogleUpdate3WebServiceClass_FWD_DEFINED__ */


#ifndef __GoogleUpdate3WebMachineFallbackClass_FWD_DEFINED__
#define __GoogleUpdate3WebMachineFallbackClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleUpdate3WebMachineFallbackClass GoogleUpdate3WebMachineFallbackClass;
#else
typedef struct GoogleUpdate3WebMachineFallbackClass GoogleUpdate3WebMachineFallbackClass;
#endif /* __cplusplus */

#endif 	/* __GoogleUpdate3WebMachineFallbackClass_FWD_DEFINED__ */


#ifndef __CurrentStateUserClass_FWD_DEFINED__
#define __CurrentStateUserClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class CurrentStateUserClass CurrentStateUserClass;
#else
typedef struct CurrentStateUserClass CurrentStateUserClass;
#endif /* __cplusplus */

#endif 	/* __CurrentStateUserClass_FWD_DEFINED__ */


#ifndef __CurrentStateMachineClass_FWD_DEFINED__
#define __CurrentStateMachineClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class CurrentStateMachineClass CurrentStateMachineClass;
#else
typedef struct CurrentStateMachineClass CurrentStateMachineClass;
#endif /* __cplusplus */

#endif 	/* __CurrentStateMachineClass_FWD_DEFINED__ */


#ifndef __CoCreateAsyncClass_FWD_DEFINED__
#define __CoCreateAsyncClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoCreateAsyncClass CoCreateAsyncClass;
#else
typedef struct CoCreateAsyncClass CoCreateAsyncClass;
#endif /* __cplusplus */

#endif 	/* __CoCreateAsyncClass_FWD_DEFINED__ */


#ifndef __CredentialDialogUserClass_FWD_DEFINED__
#define __CredentialDialogUserClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class CredentialDialogUserClass CredentialDialogUserClass;
#else
typedef struct CredentialDialogUserClass CredentialDialogUserClass;
#endif /* __cplusplus */

#endif 	/* __CredentialDialogUserClass_FWD_DEFINED__ */


#ifndef __CredentialDialogMachineClass_FWD_DEFINED__
#define __CredentialDialogMachineClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class CredentialDialogMachineClass CredentialDialogMachineClass;
#else
typedef struct CredentialDialogMachineClass CredentialDialogMachineClass;
#endif /* __cplusplus */

#endif 	/* __CredentialDialogMachineClass_FWD_DEFINED__ */


#ifndef __GoogleComProxyMachineClass_FWD_DEFINED__
#define __GoogleComProxyMachineClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleComProxyMachineClass GoogleComProxyMachineClass;
#else
typedef struct GoogleComProxyMachineClass GoogleComProxyMachineClass;
#endif /* __cplusplus */

#endif 	/* __GoogleComProxyMachineClass_FWD_DEFINED__ */


#ifndef __GoogleComProxyUserClass_FWD_DEFINED__
#define __GoogleComProxyUserClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleComProxyUserClass GoogleComProxyUserClass;
#else
typedef struct GoogleComProxyUserClass GoogleComProxyUserClass;
#endif /* __cplusplus */

#endif 	/* __GoogleComProxyUserClass_FWD_DEFINED__ */


#ifndef __ProcessLauncherClass_FWD_DEFINED__
#define __ProcessLauncherClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class ProcessLauncherClass ProcessLauncherClass;
#else
typedef struct ProcessLauncherClass ProcessLauncherClass;
#endif /* __cplusplus */

#endif 	/* __ProcessLauncherClass_FWD_DEFINED__ */


#ifndef __OneClickUserProcessLauncherClass_FWD_DEFINED__
#define __OneClickUserProcessLauncherClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class OneClickUserProcessLauncherClass OneClickUserProcessLauncherClass;
#else
typedef struct OneClickUserProcessLauncherClass OneClickUserProcessLauncherClass;
#endif /* __cplusplus */

#endif 	/* __OneClickUserProcessLauncherClass_FWD_DEFINED__ */


#ifndef __OneClickMachineProcessLauncherClass_FWD_DEFINED__
#define __OneClickMachineProcessLauncherClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class OneClickMachineProcessLauncherClass OneClickMachineProcessLauncherClass;
#else
typedef struct OneClickMachineProcessLauncherClass OneClickMachineProcessLauncherClass;
#endif /* __cplusplus */

#endif 	/* __OneClickMachineProcessLauncherClass_FWD_DEFINED__ */


#ifndef __OnDemandUserAppsClass_FWD_DEFINED__
#define __OnDemandUserAppsClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class OnDemandUserAppsClass OnDemandUserAppsClass;
#else
typedef struct OnDemandUserAppsClass OnDemandUserAppsClass;
#endif /* __cplusplus */

#endif 	/* __OnDemandUserAppsClass_FWD_DEFINED__ */


#ifndef __OnDemandMachineAppsClass_FWD_DEFINED__
#define __OnDemandMachineAppsClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class OnDemandMachineAppsClass OnDemandMachineAppsClass;
#else
typedef struct OnDemandMachineAppsClass OnDemandMachineAppsClass;
#endif /* __cplusplus */

#endif 	/* __OnDemandMachineAppsClass_FWD_DEFINED__ */


#ifndef __OnDemandMachineAppsServiceClass_FWD_DEFINED__
#define __OnDemandMachineAppsServiceClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class OnDemandMachineAppsServiceClass OnDemandMachineAppsServiceClass;
#else
typedef struct OnDemandMachineAppsServiceClass OnDemandMachineAppsServiceClass;
#endif /* __cplusplus */

#endif 	/* __OnDemandMachineAppsServiceClass_FWD_DEFINED__ */


#ifndef __OnDemandMachineAppsFallbackClass_FWD_DEFINED__
#define __OnDemandMachineAppsFallbackClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class OnDemandMachineAppsFallbackClass OnDemandMachineAppsFallbackClass;
#else
typedef struct OnDemandMachineAppsFallbackClass OnDemandMachineAppsFallbackClass;
#endif /* __cplusplus */

#endif 	/* __OnDemandMachineAppsFallbackClass_FWD_DEFINED__ */


#ifndef __GoogleUpdateCoreClass_FWD_DEFINED__
#define __GoogleUpdateCoreClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleUpdateCoreClass GoogleUpdateCoreClass;
#else
typedef struct GoogleUpdateCoreClass GoogleUpdateCoreClass;
#endif /* __cplusplus */

#endif 	/* __GoogleUpdateCoreClass_FWD_DEFINED__ */


#ifndef __GoogleUpdateCoreMachineClass_FWD_DEFINED__
#define __GoogleUpdateCoreMachineClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleUpdateCoreMachineClass GoogleUpdateCoreMachineClass;
#else
typedef struct GoogleUpdateCoreMachineClass GoogleUpdateCoreMachineClass;
#endif /* __cplusplus */

#endif 	/* __GoogleUpdateCoreMachineClass_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_omaha3_idl_0000_0000 */
/* [local] */ 

typedef 
enum BrowserType
    {	BROWSER_UNKNOWN	= 0,
	BROWSER_DEFAULT	= 1,
	BROWSER_INTERNET_EXPLORER	= 2,
	BROWSER_FIREFOX	= 3,
	BROWSER_CHROME	= 4
    } 	BrowserType;

typedef 
enum CurrentState
    {	STATE_INIT	= 1,
	STATE_WAITING_TO_CHECK_FOR_UPDATE	= 2,
	STATE_CHECKING_FOR_UPDATE	= 3,
	STATE_UPDATE_AVAILABLE	= 4,
	STATE_WAITING_TO_DOWNLOAD	= 5,
	STATE_RETRYING_DOWNLOAD	= 6,
	STATE_DOWNLOADING	= 7,
	STATE_DOWNLOAD_COMPLETE	= 8,
	STATE_EXTRACTING	= 9,
	STATE_APPLYING_DIFFERENTIAL_PATCH	= 10,
	STATE_READY_TO_INSTALL	= 11,
	STATE_WAITING_TO_INSTALL	= 12,
	STATE_INSTALLING	= 13,
	STATE_INSTALL_COMPLETE	= 14,
	STATE_PAUSED	= 15,
	STATE_NO_UPDATE	= 16,
	STATE_ERROR	= 17
    } 	CurrentState;

typedef 
enum InstallPriority
    {	INSTALL_PRIORITY_LOW	= 0,
	INSTALL_PRIORITY_HIGH	= 10
    } 	InstallPriority;

typedef 
enum PostInstallAction
    {	POST_INSTALL_ACTION_DEFAULT	= 0,
	POST_INSTALL_ACTION_EXIT_SILENTLY	= 1,
	POST_INSTALL_ACTION_LAUNCH_COMMAND	= 2,
	POST_INSTALL_ACTION_EXIT_SILENTLY_ON_LAUNCH_COMMAND	= 3,
	POST_INSTALL_ACTION_RESTART_BROWSER	= 4,
	POST_INSTALL_ACTION_RESTART_ALL_BROWSERS	= 5,
	POST_INSTALL_ACTION_REBOOT	= 6
    } 	PostInstallAction;



extern RPC_IF_HANDLE __MIDL_itf_omaha3_idl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_omaha3_idl_0000_0000_v0_0_s_ifspec;

#ifndef __IGoogleUpdate3_INTERFACE_DEFINED__
#define __IGoogleUpdate3_INTERFACE_DEFINED__

/* interface IGoogleUpdate3 */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IGoogleUpdate3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("76607e7e-c0ff-4dd3-b134-7fc3724ee66a")
    IGoogleUpdate3 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *count) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **bundle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createAppBundle( 
            /* [retval][out] */ IDispatch **app_bundle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGoogleUpdate3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGoogleUpdate3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGoogleUpdate3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGoogleUpdate3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGoogleUpdate3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGoogleUpdate3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGoogleUpdate3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGoogleUpdate3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IGoogleUpdate3 * This,
            /* [retval][out] */ long *count);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IGoogleUpdate3 * This,
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **bundle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createAppBundle )( 
            IGoogleUpdate3 * This,
            /* [retval][out] */ IDispatch **app_bundle);
        
        END_INTERFACE
    } IGoogleUpdate3Vtbl;

    interface IGoogleUpdate3
    {
        CONST_VTBL struct IGoogleUpdate3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGoogleUpdate3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGoogleUpdate3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGoogleUpdate3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGoogleUpdate3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGoogleUpdate3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGoogleUpdate3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGoogleUpdate3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGoogleUpdate3_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IGoogleUpdate3_get_Item(This,index,bundle)	\
    ( (This)->lpVtbl -> get_Item(This,index,bundle) ) 

#define IGoogleUpdate3_createAppBundle(This,app_bundle)	\
    ( (This)->lpVtbl -> createAppBundle(This,app_bundle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGoogleUpdate3_INTERFACE_DEFINED__ */


#ifndef __IAppBundle_INTERFACE_DEFINED__
#define __IAppBundle_INTERFACE_DEFINED__

/* interface IAppBundle */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IAppBundle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9a527c99-02cb-49eb-a14f-225c25cb76dc")
    IAppBundle : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_displayName( 
            /* [retval][out] */ BSTR *__MIDL__IAppBundle0000) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_displayName( 
            /* [in] */ BSTR __MIDL__IAppBundle0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_displayLanguage( 
            /* [retval][out] */ BSTR *__MIDL__IAppBundle0002) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_displayLanguage( 
            /* [in] */ BSTR __MIDL__IAppBundle0003) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_installSource( 
            /* [retval][out] */ BSTR *__MIDL__IAppBundle0004) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_installSource( 
            /* [in] */ BSTR __MIDL__IAppBundle0005) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_originURL( 
            /* [retval][out] */ BSTR *__MIDL__IAppBundle0006) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_originURL( 
            /* [in] */ BSTR __MIDL__IAppBundle0007) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_offlineDirectory( 
            /* [retval][out] */ BSTR *offline_dir) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_offlineDirectory( 
            /* [in] */ BSTR offline_dir) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_sessionId( 
            /* [retval][out] */ BSTR *session_id) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_sessionId( 
            /* [in] */ BSTR session_id) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_priority( 
            /* [retval][out] */ long *priority) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_priority( 
            /* [in] */ long priority) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *count) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **app) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_altTokens( 
            /* [in] */ ULONG_PTR impersonation_token,
            /* [in] */ ULONG_PTR primary_token,
            /* [in] */ DWORD caller_proc_id) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_parentHWND( 
            /* [in] */ ULONG_PTR hwnd) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE initialize( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createApp( 
            /* [in] */ BSTR app_id,
            /* [retval][out] */ IDispatch **app) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createInstalledApp( 
            /* [in] */ BSTR app_id,
            /* [retval][out] */ IDispatch **app) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createAllInstalledApps( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE checkForUpdate( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE download( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE install( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE updateAllApps( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE pause( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE resume( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isBusy( 
            /* [retval][out] */ VARIANT_BOOL *is_busy) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE downloadPackage( 
            /* [in] */ BSTR app_id,
            /* [in] */ BSTR package_name) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentState( 
            /* [retval][out] */ VARIANT *current_state) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppBundleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppBundle * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppBundle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppBundle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppBundle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppBundle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppBundle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppBundle * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_displayName )( 
            IAppBundle * This,
            /* [retval][out] */ BSTR *__MIDL__IAppBundle0000);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_displayName )( 
            IAppBundle * This,
            /* [in] */ BSTR __MIDL__IAppBundle0001);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_displayLanguage )( 
            IAppBundle * This,
            /* [retval][out] */ BSTR *__MIDL__IAppBundle0002);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_displayLanguage )( 
            IAppBundle * This,
            /* [in] */ BSTR __MIDL__IAppBundle0003);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_installSource )( 
            IAppBundle * This,
            /* [retval][out] */ BSTR *__MIDL__IAppBundle0004);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_installSource )( 
            IAppBundle * This,
            /* [in] */ BSTR __MIDL__IAppBundle0005);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_originURL )( 
            IAppBundle * This,
            /* [retval][out] */ BSTR *__MIDL__IAppBundle0006);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_originURL )( 
            IAppBundle * This,
            /* [in] */ BSTR __MIDL__IAppBundle0007);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_offlineDirectory )( 
            IAppBundle * This,
            /* [retval][out] */ BSTR *offline_dir);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_offlineDirectory )( 
            IAppBundle * This,
            /* [in] */ BSTR offline_dir);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_sessionId )( 
            IAppBundle * This,
            /* [retval][out] */ BSTR *session_id);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_sessionId )( 
            IAppBundle * This,
            /* [in] */ BSTR session_id);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_priority )( 
            IAppBundle * This,
            /* [retval][out] */ long *priority);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_priority )( 
            IAppBundle * This,
            /* [in] */ long priority);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAppBundle * This,
            /* [retval][out] */ long *count);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAppBundle * This,
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **app);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_altTokens )( 
            IAppBundle * This,
            /* [in] */ ULONG_PTR impersonation_token,
            /* [in] */ ULONG_PTR primary_token,
            /* [in] */ DWORD caller_proc_id);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_parentHWND )( 
            IAppBundle * This,
            /* [in] */ ULONG_PTR hwnd);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *initialize )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createApp )( 
            IAppBundle * This,
            /* [in] */ BSTR app_id,
            /* [retval][out] */ IDispatch **app);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createInstalledApp )( 
            IAppBundle * This,
            /* [in] */ BSTR app_id,
            /* [retval][out] */ IDispatch **app);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createAllInstalledApps )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *checkForUpdate )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *download )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *install )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *updateAllApps )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stop )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *pause )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *resume )( 
            IAppBundle * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isBusy )( 
            IAppBundle * This,
            /* [retval][out] */ VARIANT_BOOL *is_busy);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *downloadPackage )( 
            IAppBundle * This,
            /* [in] */ BSTR app_id,
            /* [in] */ BSTR package_name);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentState )( 
            IAppBundle * This,
            /* [retval][out] */ VARIANT *current_state);
        
        END_INTERFACE
    } IAppBundleVtbl;

    interface IAppBundle
    {
        CONST_VTBL struct IAppBundleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppBundle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppBundle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppBundle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppBundle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppBundle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppBundle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppBundle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppBundle_get_displayName(This,__MIDL__IAppBundle0000)	\
    ( (This)->lpVtbl -> get_displayName(This,__MIDL__IAppBundle0000) ) 

#define IAppBundle_put_displayName(This,__MIDL__IAppBundle0001)	\
    ( (This)->lpVtbl -> put_displayName(This,__MIDL__IAppBundle0001) ) 

#define IAppBundle_get_displayLanguage(This,__MIDL__IAppBundle0002)	\
    ( (This)->lpVtbl -> get_displayLanguage(This,__MIDL__IAppBundle0002) ) 

#define IAppBundle_put_displayLanguage(This,__MIDL__IAppBundle0003)	\
    ( (This)->lpVtbl -> put_displayLanguage(This,__MIDL__IAppBundle0003) ) 

#define IAppBundle_get_installSource(This,__MIDL__IAppBundle0004)	\
    ( (This)->lpVtbl -> get_installSource(This,__MIDL__IAppBundle0004) ) 

#define IAppBundle_put_installSource(This,__MIDL__IAppBundle0005)	\
    ( (This)->lpVtbl -> put_installSource(This,__MIDL__IAppBundle0005) ) 

#define IAppBundle_get_originURL(This,__MIDL__IAppBundle0006)	\
    ( (This)->lpVtbl -> get_originURL(This,__MIDL__IAppBundle0006) ) 

#define IAppBundle_put_originURL(This,__MIDL__IAppBundle0007)	\
    ( (This)->lpVtbl -> put_originURL(This,__MIDL__IAppBundle0007) ) 

#define IAppBundle_get_offlineDirectory(This,offline_dir)	\
    ( (This)->lpVtbl -> get_offlineDirectory(This,offline_dir) ) 

#define IAppBundle_put_offlineDirectory(This,offline_dir)	\
    ( (This)->lpVtbl -> put_offlineDirectory(This,offline_dir) ) 

#define IAppBundle_get_sessionId(This,session_id)	\
    ( (This)->lpVtbl -> get_sessionId(This,session_id) ) 

#define IAppBundle_put_sessionId(This,session_id)	\
    ( (This)->lpVtbl -> put_sessionId(This,session_id) ) 

#define IAppBundle_get_priority(This,priority)	\
    ( (This)->lpVtbl -> get_priority(This,priority) ) 

#define IAppBundle_put_priority(This,priority)	\
    ( (This)->lpVtbl -> put_priority(This,priority) ) 

#define IAppBundle_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IAppBundle_get_Item(This,index,app)	\
    ( (This)->lpVtbl -> get_Item(This,index,app) ) 

#define IAppBundle_put_altTokens(This,impersonation_token,primary_token,caller_proc_id)	\
    ( (This)->lpVtbl -> put_altTokens(This,impersonation_token,primary_token,caller_proc_id) ) 

#define IAppBundle_put_parentHWND(This,hwnd)	\
    ( (This)->lpVtbl -> put_parentHWND(This,hwnd) ) 

#define IAppBundle_initialize(This)	\
    ( (This)->lpVtbl -> initialize(This) ) 

#define IAppBundle_createApp(This,app_id,app)	\
    ( (This)->lpVtbl -> createApp(This,app_id,app) ) 

#define IAppBundle_createInstalledApp(This,app_id,app)	\
    ( (This)->lpVtbl -> createInstalledApp(This,app_id,app) ) 

#define IAppBundle_createAllInstalledApps(This)	\
    ( (This)->lpVtbl -> createAllInstalledApps(This) ) 

#define IAppBundle_checkForUpdate(This)	\
    ( (This)->lpVtbl -> checkForUpdate(This) ) 

#define IAppBundle_download(This)	\
    ( (This)->lpVtbl -> download(This) ) 

#define IAppBundle_install(This)	\
    ( (This)->lpVtbl -> install(This) ) 

#define IAppBundle_updateAllApps(This)	\
    ( (This)->lpVtbl -> updateAllApps(This) ) 

#define IAppBundle_stop(This)	\
    ( (This)->lpVtbl -> stop(This) ) 

#define IAppBundle_pause(This)	\
    ( (This)->lpVtbl -> pause(This) ) 

#define IAppBundle_resume(This)	\
    ( (This)->lpVtbl -> resume(This) ) 

#define IAppBundle_isBusy(This,is_busy)	\
    ( (This)->lpVtbl -> isBusy(This,is_busy) ) 

#define IAppBundle_downloadPackage(This,app_id,package_name)	\
    ( (This)->lpVtbl -> downloadPackage(This,app_id,package_name) ) 

#define IAppBundle_get_currentState(This,current_state)	\
    ( (This)->lpVtbl -> get_currentState(This,current_state) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppBundle_INTERFACE_DEFINED__ */


#ifndef __IApp_INTERFACE_DEFINED__
#define __IApp_INTERFACE_DEFINED__

/* interface IApp */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2ea2902f-31b3-45fe-a27a-62bb796e74c0")
    IApp : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentVersion( 
            /* [retval][out] */ IDispatch **current) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_nextVersion( 
            /* [retval][out] */ IDispatch **next) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_appId( 
            /* [retval][out] */ BSTR *__MIDL__IApp0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_displayName( 
            /* [retval][out] */ BSTR *__MIDL__IApp0001) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_displayName( 
            /* [in] */ BSTR __MIDL__IApp0002) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_language( 
            /* [retval][out] */ BSTR *__MIDL__IApp0003) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_language( 
            /* [in] */ BSTR __MIDL__IApp0004) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ap( 
            /* [retval][out] */ BSTR *__MIDL__IApp0005) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ap( 
            /* [in] */ BSTR __MIDL__IApp0006) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ttToken( 
            /* [retval][out] */ BSTR *__MIDL__IApp0007) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ttToken( 
            /* [in] */ BSTR __MIDL__IApp0008) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_iid( 
            /* [retval][out] */ BSTR *__MIDL__IApp0009) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_iid( 
            /* [in] */ BSTR __MIDL__IApp0010) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_brandCode( 
            /* [retval][out] */ BSTR *__MIDL__IApp0011) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_brandCode( 
            /* [in] */ BSTR __MIDL__IApp0012) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_clientId( 
            /* [retval][out] */ BSTR *__MIDL__IApp0013) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_clientId( 
            /* [in] */ BSTR __MIDL__IApp0014) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_labels( 
            /* [retval][out] */ BSTR *__MIDL__IApp0015) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_labels( 
            /* [in] */ BSTR __MIDL__IApp0016) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_referralId( 
            /* [retval][out] */ BSTR *__MIDL__IApp0017) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_referralId( 
            /* [in] */ BSTR __MIDL__IApp0018) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_browserType( 
            /* [retval][out] */ UINT *__MIDL__IApp0019) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_browserType( 
            /* [in] */ UINT __MIDL__IApp0020) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_clientInstallData( 
            /* [retval][out] */ BSTR *__MIDL__IApp0021) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_clientInstallData( 
            /* [in] */ BSTR __MIDL__IApp0022) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_serverInstallDataIndex( 
            /* [retval][out] */ BSTR *__MIDL__IApp0023) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_serverInstallDataIndex( 
            /* [in] */ BSTR __MIDL__IApp0024) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_isEulaAccepted( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IApp0025) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_isEulaAccepted( 
            /* [in] */ VARIANT_BOOL __MIDL__IApp0026) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_usageStatsEnable( 
            /* [retval][out] */ UINT *__MIDL__IApp0027) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_usageStatsEnable( 
            /* [in] */ UINT __MIDL__IApp0028) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_installTimeDiffSec( 
            /* [retval][out] */ UINT *__MIDL__IApp0029) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_currentState( 
            /* [retval][out] */ IDispatch **__MIDL__IApp0030) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentVersion )( 
            IApp * This,
            /* [retval][out] */ IDispatch **current);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_nextVersion )( 
            IApp * This,
            /* [retval][out] */ IDispatch **next);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_appId )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_displayName )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0001);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_displayName )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0002);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0003);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_language )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0004);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ap )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0005);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ap )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0006);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ttToken )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0007);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ttToken )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0008);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_iid )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0009);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_iid )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0010);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_brandCode )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0011);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_brandCode )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0012);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_clientId )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0013);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_clientId )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0014);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_labels )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0015);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_labels )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0016);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_referralId )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0017);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_referralId )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0018);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_browserType )( 
            IApp * This,
            /* [retval][out] */ UINT *__MIDL__IApp0019);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_browserType )( 
            IApp * This,
            /* [in] */ UINT __MIDL__IApp0020);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_clientInstallData )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0021);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_clientInstallData )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0022);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_serverInstallDataIndex )( 
            IApp * This,
            /* [retval][out] */ BSTR *__MIDL__IApp0023);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_serverInstallDataIndex )( 
            IApp * This,
            /* [in] */ BSTR __MIDL__IApp0024);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_isEulaAccepted )( 
            IApp * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IApp0025);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_isEulaAccepted )( 
            IApp * This,
            /* [in] */ VARIANT_BOOL __MIDL__IApp0026);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_usageStatsEnable )( 
            IApp * This,
            /* [retval][out] */ UINT *__MIDL__IApp0027);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_usageStatsEnable )( 
            IApp * This,
            /* [in] */ UINT __MIDL__IApp0028);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_installTimeDiffSec )( 
            IApp * This,
            /* [retval][out] */ UINT *__MIDL__IApp0029);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_currentState )( 
            IApp * This,
            /* [retval][out] */ IDispatch **__MIDL__IApp0030);
        
        END_INTERFACE
    } IAppVtbl;

    interface IApp
    {
        CONST_VTBL struct IAppVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IApp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IApp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IApp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IApp_get_currentVersion(This,current)	\
    ( (This)->lpVtbl -> get_currentVersion(This,current) ) 

#define IApp_get_nextVersion(This,next)	\
    ( (This)->lpVtbl -> get_nextVersion(This,next) ) 

#define IApp_get_appId(This,__MIDL__IApp0000)	\
    ( (This)->lpVtbl -> get_appId(This,__MIDL__IApp0000) ) 

#define IApp_get_displayName(This,__MIDL__IApp0001)	\
    ( (This)->lpVtbl -> get_displayName(This,__MIDL__IApp0001) ) 

#define IApp_put_displayName(This,__MIDL__IApp0002)	\
    ( (This)->lpVtbl -> put_displayName(This,__MIDL__IApp0002) ) 

#define IApp_get_language(This,__MIDL__IApp0003)	\
    ( (This)->lpVtbl -> get_language(This,__MIDL__IApp0003) ) 

#define IApp_put_language(This,__MIDL__IApp0004)	\
    ( (This)->lpVtbl -> put_language(This,__MIDL__IApp0004) ) 

#define IApp_get_ap(This,__MIDL__IApp0005)	\
    ( (This)->lpVtbl -> get_ap(This,__MIDL__IApp0005) ) 

#define IApp_put_ap(This,__MIDL__IApp0006)	\
    ( (This)->lpVtbl -> put_ap(This,__MIDL__IApp0006) ) 

#define IApp_get_ttToken(This,__MIDL__IApp0007)	\
    ( (This)->lpVtbl -> get_ttToken(This,__MIDL__IApp0007) ) 

#define IApp_put_ttToken(This,__MIDL__IApp0008)	\
    ( (This)->lpVtbl -> put_ttToken(This,__MIDL__IApp0008) ) 

#define IApp_get_iid(This,__MIDL__IApp0009)	\
    ( (This)->lpVtbl -> get_iid(This,__MIDL__IApp0009) ) 

#define IApp_put_iid(This,__MIDL__IApp0010)	\
    ( (This)->lpVtbl -> put_iid(This,__MIDL__IApp0010) ) 

#define IApp_get_brandCode(This,__MIDL__IApp0011)	\
    ( (This)->lpVtbl -> get_brandCode(This,__MIDL__IApp0011) ) 

#define IApp_put_brandCode(This,__MIDL__IApp0012)	\
    ( (This)->lpVtbl -> put_brandCode(This,__MIDL__IApp0012) ) 

#define IApp_get_clientId(This,__MIDL__IApp0013)	\
    ( (This)->lpVtbl -> get_clientId(This,__MIDL__IApp0013) ) 

#define IApp_put_clientId(This,__MIDL__IApp0014)	\
    ( (This)->lpVtbl -> put_clientId(This,__MIDL__IApp0014) ) 

#define IApp_get_labels(This,__MIDL__IApp0015)	\
    ( (This)->lpVtbl -> get_labels(This,__MIDL__IApp0015) ) 

#define IApp_put_labels(This,__MIDL__IApp0016)	\
    ( (This)->lpVtbl -> put_labels(This,__MIDL__IApp0016) ) 

#define IApp_get_referralId(This,__MIDL__IApp0017)	\
    ( (This)->lpVtbl -> get_referralId(This,__MIDL__IApp0017) ) 

#define IApp_put_referralId(This,__MIDL__IApp0018)	\
    ( (This)->lpVtbl -> put_referralId(This,__MIDL__IApp0018) ) 

#define IApp_get_browserType(This,__MIDL__IApp0019)	\
    ( (This)->lpVtbl -> get_browserType(This,__MIDL__IApp0019) ) 

#define IApp_put_browserType(This,__MIDL__IApp0020)	\
    ( (This)->lpVtbl -> put_browserType(This,__MIDL__IApp0020) ) 

#define IApp_get_clientInstallData(This,__MIDL__IApp0021)	\
    ( (This)->lpVtbl -> get_clientInstallData(This,__MIDL__IApp0021) ) 

#define IApp_put_clientInstallData(This,__MIDL__IApp0022)	\
    ( (This)->lpVtbl -> put_clientInstallData(This,__MIDL__IApp0022) ) 

#define IApp_get_serverInstallDataIndex(This,__MIDL__IApp0023)	\
    ( (This)->lpVtbl -> get_serverInstallDataIndex(This,__MIDL__IApp0023) ) 

#define IApp_put_serverInstallDataIndex(This,__MIDL__IApp0024)	\
    ( (This)->lpVtbl -> put_serverInstallDataIndex(This,__MIDL__IApp0024) ) 

#define IApp_get_isEulaAccepted(This,__MIDL__IApp0025)	\
    ( (This)->lpVtbl -> get_isEulaAccepted(This,__MIDL__IApp0025) ) 

#define IApp_put_isEulaAccepted(This,__MIDL__IApp0026)	\
    ( (This)->lpVtbl -> put_isEulaAccepted(This,__MIDL__IApp0026) ) 

#define IApp_get_usageStatsEnable(This,__MIDL__IApp0027)	\
    ( (This)->lpVtbl -> get_usageStatsEnable(This,__MIDL__IApp0027) ) 

#define IApp_put_usageStatsEnable(This,__MIDL__IApp0028)	\
    ( (This)->lpVtbl -> put_usageStatsEnable(This,__MIDL__IApp0028) ) 

#define IApp_get_installTimeDiffSec(This,__MIDL__IApp0029)	\
    ( (This)->lpVtbl -> get_installTimeDiffSec(This,__MIDL__IApp0029) ) 

#define IApp_get_currentState(This,__MIDL__IApp0030)	\
    ( (This)->lpVtbl -> get_currentState(This,__MIDL__IApp0030) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApp_INTERFACE_DEFINED__ */


#ifndef __IAppVersion_INTERFACE_DEFINED__
#define __IAppVersion_INTERFACE_DEFINED__

/* interface IAppVersion */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IAppVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6f5a84a3-867a-47bb-848b-a4cd8ffa8fce")
    IAppVersion : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_version( 
            /* [retval][out] */ BSTR *__MIDL__IAppVersion0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_packageCount( 
            /* [retval][out] */ long *count) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_package( 
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **package) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppVersionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVersion * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVersion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVersion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVersion * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVersion * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVersion * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVersion * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_version )( 
            IAppVersion * This,
            /* [retval][out] */ BSTR *__MIDL__IAppVersion0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_packageCount )( 
            IAppVersion * This,
            /* [retval][out] */ long *count);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_package )( 
            IAppVersion * This,
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **package);
        
        END_INTERFACE
    } IAppVersionVtbl;

    interface IAppVersion
    {
        CONST_VTBL struct IAppVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVersion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVersion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVersion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVersion_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVersion_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVersion_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVersion_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVersion_get_version(This,__MIDL__IAppVersion0000)	\
    ( (This)->lpVtbl -> get_version(This,__MIDL__IAppVersion0000) ) 

#define IAppVersion_get_packageCount(This,count)	\
    ( (This)->lpVtbl -> get_packageCount(This,count) ) 

#define IAppVersion_get_package(This,index,package)	\
    ( (This)->lpVtbl -> get_package(This,index,package) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVersion_INTERFACE_DEFINED__ */


#ifndef __IPackage_INTERFACE_DEFINED__
#define __IPackage_INTERFACE_DEFINED__

/* interface IPackage */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IPackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("593e29d1-4adf-4f5d-ade8-a0836155c8a3")
    IPackage : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE get( 
            /* [in] */ BSTR dir) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_isAvailable( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IPackage0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_filename( 
            /* [retval][out] */ BSTR *__MIDL__IPackage0001) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPackageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPackage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPackage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPackage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPackage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPackage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPackage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPackage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *get )( 
            IPackage * This,
            /* [in] */ BSTR dir);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAvailable )( 
            IPackage * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IPackage0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_filename )( 
            IPackage * This,
            /* [retval][out] */ BSTR *__MIDL__IPackage0001);
        
        END_INTERFACE
    } IPackageVtbl;

    interface IPackage
    {
        CONST_VTBL struct IPackageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPackage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPackage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPackage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPackage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPackage_get(This,dir)	\
    ( (This)->lpVtbl -> get(This,dir) ) 

#define IPackage_get_isAvailable(This,__MIDL__IPackage0000)	\
    ( (This)->lpVtbl -> get_isAvailable(This,__MIDL__IPackage0000) ) 

#define IPackage_get_filename(This,__MIDL__IPackage0001)	\
    ( (This)->lpVtbl -> get_filename(This,__MIDL__IPackage0001) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPackage_INTERFACE_DEFINED__ */


#ifndef __ICurrentState_INTERFACE_DEFINED__
#define __ICurrentState_INTERFACE_DEFINED__

/* interface ICurrentState */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_ICurrentState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9df22aa7-720e-4216-9cb4-727781edac1a")
    ICurrentState : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_stateValue( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_availableVersion( 
            /* [retval][out] */ BSTR *__MIDL__ICurrentState0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_bytesDownloaded( 
            /* [retval][out] */ ULONG *__MIDL__ICurrentState0002) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_totalBytesToDownload( 
            /* [retval][out] */ ULONG *__MIDL__ICurrentState0003) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_downloadTimeRemainingMs( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0004) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_nextRetryTime( 
            /* [retval][out] */ ULONGLONG *__MIDL__ICurrentState0005) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_installProgress( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0006) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_installTimeRemainingMs( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0007) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_isCanceled( 
            /* [retval][out] */ VARIANT_BOOL *is_canceled) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_errorCode( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0008) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_extraCode1( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0009) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_completionMessage( 
            /* [retval][out] */ BSTR *__MIDL__ICurrentState0010) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_installerResultCode( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0011) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_installerResultExtraCode1( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0012) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_postInstallLaunchCommandLine( 
            /* [retval][out] */ BSTR *__MIDL__ICurrentState0013) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_postInstallUrl( 
            /* [retval][out] */ BSTR *__MIDL__ICurrentState0014) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_postInstallAction( 
            /* [retval][out] */ LONG *__MIDL__ICurrentState0015) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICurrentStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICurrentState * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICurrentState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICurrentState * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICurrentState * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICurrentState * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICurrentState * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICurrentState * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_stateValue )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_availableVersion )( 
            ICurrentState * This,
            /* [retval][out] */ BSTR *__MIDL__ICurrentState0001);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_bytesDownloaded )( 
            ICurrentState * This,
            /* [retval][out] */ ULONG *__MIDL__ICurrentState0002);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_totalBytesToDownload )( 
            ICurrentState * This,
            /* [retval][out] */ ULONG *__MIDL__ICurrentState0003);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_downloadTimeRemainingMs )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0004);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_nextRetryTime )( 
            ICurrentState * This,
            /* [retval][out] */ ULONGLONG *__MIDL__ICurrentState0005);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_installProgress )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0006);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_installTimeRemainingMs )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0007);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCanceled )( 
            ICurrentState * This,
            /* [retval][out] */ VARIANT_BOOL *is_canceled);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_errorCode )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0008);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_extraCode1 )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0009);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_completionMessage )( 
            ICurrentState * This,
            /* [retval][out] */ BSTR *__MIDL__ICurrentState0010);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_installerResultCode )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0011);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_installerResultExtraCode1 )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0012);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_postInstallLaunchCommandLine )( 
            ICurrentState * This,
            /* [retval][out] */ BSTR *__MIDL__ICurrentState0013);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_postInstallUrl )( 
            ICurrentState * This,
            /* [retval][out] */ BSTR *__MIDL__ICurrentState0014);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_postInstallAction )( 
            ICurrentState * This,
            /* [retval][out] */ LONG *__MIDL__ICurrentState0015);
        
        END_INTERFACE
    } ICurrentStateVtbl;

    interface ICurrentState
    {
        CONST_VTBL struct ICurrentStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICurrentState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICurrentState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICurrentState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICurrentState_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICurrentState_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICurrentState_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICurrentState_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICurrentState_get_stateValue(This,__MIDL__ICurrentState0000)	\
    ( (This)->lpVtbl -> get_stateValue(This,__MIDL__ICurrentState0000) ) 

#define ICurrentState_get_availableVersion(This,__MIDL__ICurrentState0001)	\
    ( (This)->lpVtbl -> get_availableVersion(This,__MIDL__ICurrentState0001) ) 

#define ICurrentState_get_bytesDownloaded(This,__MIDL__ICurrentState0002)	\
    ( (This)->lpVtbl -> get_bytesDownloaded(This,__MIDL__ICurrentState0002) ) 

#define ICurrentState_get_totalBytesToDownload(This,__MIDL__ICurrentState0003)	\
    ( (This)->lpVtbl -> get_totalBytesToDownload(This,__MIDL__ICurrentState0003) ) 

#define ICurrentState_get_downloadTimeRemainingMs(This,__MIDL__ICurrentState0004)	\
    ( (This)->lpVtbl -> get_downloadTimeRemainingMs(This,__MIDL__ICurrentState0004) ) 

#define ICurrentState_get_nextRetryTime(This,__MIDL__ICurrentState0005)	\
    ( (This)->lpVtbl -> get_nextRetryTime(This,__MIDL__ICurrentState0005) ) 

#define ICurrentState_get_installProgress(This,__MIDL__ICurrentState0006)	\
    ( (This)->lpVtbl -> get_installProgress(This,__MIDL__ICurrentState0006) ) 

#define ICurrentState_get_installTimeRemainingMs(This,__MIDL__ICurrentState0007)	\
    ( (This)->lpVtbl -> get_installTimeRemainingMs(This,__MIDL__ICurrentState0007) ) 

#define ICurrentState_get_isCanceled(This,is_canceled)	\
    ( (This)->lpVtbl -> get_isCanceled(This,is_canceled) ) 

#define ICurrentState_get_errorCode(This,__MIDL__ICurrentState0008)	\
    ( (This)->lpVtbl -> get_errorCode(This,__MIDL__ICurrentState0008) ) 

#define ICurrentState_get_extraCode1(This,__MIDL__ICurrentState0009)	\
    ( (This)->lpVtbl -> get_extraCode1(This,__MIDL__ICurrentState0009) ) 

#define ICurrentState_get_completionMessage(This,__MIDL__ICurrentState0010)	\
    ( (This)->lpVtbl -> get_completionMessage(This,__MIDL__ICurrentState0010) ) 

#define ICurrentState_get_installerResultCode(This,__MIDL__ICurrentState0011)	\
    ( (This)->lpVtbl -> get_installerResultCode(This,__MIDL__ICurrentState0011) ) 

#define ICurrentState_get_installerResultExtraCode1(This,__MIDL__ICurrentState0012)	\
    ( (This)->lpVtbl -> get_installerResultExtraCode1(This,__MIDL__ICurrentState0012) ) 

#define ICurrentState_get_postInstallLaunchCommandLine(This,__MIDL__ICurrentState0013)	\
    ( (This)->lpVtbl -> get_postInstallLaunchCommandLine(This,__MIDL__ICurrentState0013) ) 

#define ICurrentState_get_postInstallUrl(This,__MIDL__ICurrentState0014)	\
    ( (This)->lpVtbl -> get_postInstallUrl(This,__MIDL__ICurrentState0014) ) 

#define ICurrentState_get_postInstallAction(This,__MIDL__ICurrentState0015)	\
    ( (This)->lpVtbl -> get_postInstallAction(This,__MIDL__ICurrentState0015) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICurrentState_INTERFACE_DEFINED__ */


#ifndef __IRegistrationUpdateHook_INTERFACE_DEFINED__
#define __IRegistrationUpdateHook_INTERFACE_DEFINED__

/* interface IRegistrationUpdateHook */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IRegistrationUpdateHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9f2f5f08-a28f-414f-8fe5-31d77b2af211")
    IRegistrationUpdateHook : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateRegistry( 
            /* [in] */ BSTR app_id,
            /* [in] */ VARIANT_BOOL is_machine) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRegistrationUpdateHookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRegistrationUpdateHook * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRegistrationUpdateHook * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRegistrationUpdateHook * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRegistrationUpdateHook * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRegistrationUpdateHook * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRegistrationUpdateHook * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRegistrationUpdateHook * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateRegistry )( 
            IRegistrationUpdateHook * This,
            /* [in] */ BSTR app_id,
            /* [in] */ VARIANT_BOOL is_machine);
        
        END_INTERFACE
    } IRegistrationUpdateHookVtbl;

    interface IRegistrationUpdateHook
    {
        CONST_VTBL struct IRegistrationUpdateHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRegistrationUpdateHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRegistrationUpdateHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRegistrationUpdateHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRegistrationUpdateHook_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRegistrationUpdateHook_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRegistrationUpdateHook_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRegistrationUpdateHook_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRegistrationUpdateHook_UpdateRegistry(This,app_id,is_machine)	\
    ( (This)->lpVtbl -> UpdateRegistry(This,app_id,is_machine) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRegistrationUpdateHook_INTERFACE_DEFINED__ */


#ifndef __ICredentialDialog_INTERFACE_DEFINED__
#define __ICredentialDialog_INTERFACE_DEFINED__

/* interface ICredentialDialog */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ICredentialDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a3c270b9-98bd-4998-91a4-3f11adad0377")
    ICredentialDialog : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryUserForCredentials( 
            /* [in] */ ULONG_PTR owner_hwnd,
            /* [in] */ BSTR server,
            /* [in] */ BSTR message,
            /* [out] */ BSTR *username,
            /* [out] */ BSTR *password) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICredentialDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICredentialDialog * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICredentialDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICredentialDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryUserForCredentials )( 
            ICredentialDialog * This,
            /* [in] */ ULONG_PTR owner_hwnd,
            /* [in] */ BSTR server,
            /* [in] */ BSTR message,
            /* [out] */ BSTR *username,
            /* [out] */ BSTR *password);
        
        END_INTERFACE
    } ICredentialDialogVtbl;

    interface ICredentialDialog
    {
        CONST_VTBL struct ICredentialDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICredentialDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICredentialDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICredentialDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICredentialDialog_QueryUserForCredentials(This,owner_hwnd,server,message,username,password)	\
    ( (This)->lpVtbl -> QueryUserForCredentials(This,owner_hwnd,server,message,username,password) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICredentialDialog_INTERFACE_DEFINED__ */


#ifndef __IGoogleUpdate3Web_INTERFACE_DEFINED__
#define __IGoogleUpdate3Web_INTERFACE_DEFINED__

/* interface IGoogleUpdate3Web */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IGoogleUpdate3Web;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c90fc75b-9bdc-47aa-9f3c-59f416c91aef")
    IGoogleUpdate3Web : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE createAppBundleWeb( 
            /* [retval][out] */ IDispatch **app_bundle_web) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGoogleUpdate3WebVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGoogleUpdate3Web * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGoogleUpdate3Web * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGoogleUpdate3Web * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGoogleUpdate3Web * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGoogleUpdate3Web * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGoogleUpdate3Web * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGoogleUpdate3Web * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *createAppBundleWeb )( 
            IGoogleUpdate3Web * This,
            /* [retval][out] */ IDispatch **app_bundle_web);
        
        END_INTERFACE
    } IGoogleUpdate3WebVtbl;

    interface IGoogleUpdate3Web
    {
        CONST_VTBL struct IGoogleUpdate3WebVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGoogleUpdate3Web_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGoogleUpdate3Web_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGoogleUpdate3Web_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGoogleUpdate3Web_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGoogleUpdate3Web_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGoogleUpdate3Web_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGoogleUpdate3Web_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGoogleUpdate3Web_createAppBundleWeb(This,app_bundle_web)	\
    ( (This)->lpVtbl -> createAppBundleWeb(This,app_bundle_web) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGoogleUpdate3Web_INTERFACE_DEFINED__ */


#ifndef __IGoogleUpdate3WebSecurity_INTERFACE_DEFINED__
#define __IGoogleUpdate3WebSecurity_INTERFACE_DEFINED__

/* interface IGoogleUpdate3WebSecurity */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGoogleUpdate3WebSecurity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8f0740e-8970-44e4-ad03-46394ba7d3e7")
    IGoogleUpdate3WebSecurity : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE setOriginURL( 
            /* [in] */ BSTR origin_url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGoogleUpdate3WebSecurityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGoogleUpdate3WebSecurity * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGoogleUpdate3WebSecurity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGoogleUpdate3WebSecurity * This);
        
        HRESULT ( STDMETHODCALLTYPE *setOriginURL )( 
            IGoogleUpdate3WebSecurity * This,
            /* [in] */ BSTR origin_url);
        
        END_INTERFACE
    } IGoogleUpdate3WebSecurityVtbl;

    interface IGoogleUpdate3WebSecurity
    {
        CONST_VTBL struct IGoogleUpdate3WebSecurityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGoogleUpdate3WebSecurity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGoogleUpdate3WebSecurity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGoogleUpdate3WebSecurity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGoogleUpdate3WebSecurity_setOriginURL(This,origin_url)	\
    ( (This)->lpVtbl -> setOriginURL(This,origin_url) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGoogleUpdate3WebSecurity_INTERFACE_DEFINED__ */


#ifndef __IAppBundleWeb_INTERFACE_DEFINED__
#define __IAppBundleWeb_INTERFACE_DEFINED__

/* interface IAppBundleWeb */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IAppBundleWeb;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3aaa8bbc-dc93-49d9-9b87-c8ded3b2bb40")
    IAppBundleWeb : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createApp( 
            /* [in] */ BSTR app_guid,
            /* [in] */ BSTR brand_code,
            /* [in] */ BSTR language,
            /* [in] */ BSTR ap) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createInstalledApp( 
            /* [in] */ BSTR app_id) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createAllInstalledApps( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_displayLanguage( 
            /* [retval][out] */ BSTR *__MIDL__IAppBundleWeb0000) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_displayLanguage( 
            /* [in] */ BSTR __MIDL__IAppBundleWeb0001) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_parentHWND( 
            /* [in] */ ULONG_PTR hwnd) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ int *index) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_appWeb( 
            /* [in] */ int index,
            /* [retval][out] */ IDispatch **app_web) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE initialize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE checkForUpdate( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE download( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE install( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE pause( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE resume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE downloadPackage( 
            /* [in] */ BSTR app_id,
            /* [in] */ BSTR package_name) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_currentState( 
            /* [retval][out] */ VARIANT *current_state) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppBundleWebVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppBundleWeb * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppBundleWeb * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppBundleWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppBundleWeb * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppBundleWeb * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppBundleWeb * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppBundleWeb * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createApp )( 
            IAppBundleWeb * This,
            /* [in] */ BSTR app_guid,
            /* [in] */ BSTR brand_code,
            /* [in] */ BSTR language,
            /* [in] */ BSTR ap);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createInstalledApp )( 
            IAppBundleWeb * This,
            /* [in] */ BSTR app_id);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createAllInstalledApps )( 
            IAppBundleWeb * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_displayLanguage )( 
            IAppBundleWeb * This,
            /* [retval][out] */ BSTR *__MIDL__IAppBundleWeb0000);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_displayLanguage )( 
            IAppBundleWeb * This,
            /* [in] */ BSTR __MIDL__IAppBundleWeb0001);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_parentHWND )( 
            IAppBundleWeb * This,
            /* [in] */ ULONG_PTR hwnd);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IAppBundleWeb * This,
            /* [retval][out] */ int *index);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_appWeb )( 
            IAppBundleWeb * This,
            /* [in] */ int index,
            /* [retval][out] */ IDispatch **app_web);
        
        HRESULT ( STDMETHODCALLTYPE *initialize )( 
            IAppBundleWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *checkForUpdate )( 
            IAppBundleWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *download )( 
            IAppBundleWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *install )( 
            IAppBundleWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *pause )( 
            IAppBundleWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *resume )( 
            IAppBundleWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *cancel )( 
            IAppBundleWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *downloadPackage )( 
            IAppBundleWeb * This,
            /* [in] */ BSTR app_id,
            /* [in] */ BSTR package_name);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_currentState )( 
            IAppBundleWeb * This,
            /* [retval][out] */ VARIANT *current_state);
        
        END_INTERFACE
    } IAppBundleWebVtbl;

    interface IAppBundleWeb
    {
        CONST_VTBL struct IAppBundleWebVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppBundleWeb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppBundleWeb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppBundleWeb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppBundleWeb_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppBundleWeb_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppBundleWeb_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppBundleWeb_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppBundleWeb_createApp(This,app_guid,brand_code,language,ap)	\
    ( (This)->lpVtbl -> createApp(This,app_guid,brand_code,language,ap) ) 

#define IAppBundleWeb_createInstalledApp(This,app_id)	\
    ( (This)->lpVtbl -> createInstalledApp(This,app_id) ) 

#define IAppBundleWeb_createAllInstalledApps(This)	\
    ( (This)->lpVtbl -> createAllInstalledApps(This) ) 

#define IAppBundleWeb_get_displayLanguage(This,__MIDL__IAppBundleWeb0000)	\
    ( (This)->lpVtbl -> get_displayLanguage(This,__MIDL__IAppBundleWeb0000) ) 

#define IAppBundleWeb_put_displayLanguage(This,__MIDL__IAppBundleWeb0001)	\
    ( (This)->lpVtbl -> put_displayLanguage(This,__MIDL__IAppBundleWeb0001) ) 

#define IAppBundleWeb_put_parentHWND(This,hwnd)	\
    ( (This)->lpVtbl -> put_parentHWND(This,hwnd) ) 

#define IAppBundleWeb_get_length(This,index)	\
    ( (This)->lpVtbl -> get_length(This,index) ) 

#define IAppBundleWeb_get_appWeb(This,index,app_web)	\
    ( (This)->lpVtbl -> get_appWeb(This,index,app_web) ) 

#define IAppBundleWeb_initialize(This)	\
    ( (This)->lpVtbl -> initialize(This) ) 

#define IAppBundleWeb_checkForUpdate(This)	\
    ( (This)->lpVtbl -> checkForUpdate(This) ) 

#define IAppBundleWeb_download(This)	\
    ( (This)->lpVtbl -> download(This) ) 

#define IAppBundleWeb_install(This)	\
    ( (This)->lpVtbl -> install(This) ) 

#define IAppBundleWeb_pause(This)	\
    ( (This)->lpVtbl -> pause(This) ) 

#define IAppBundleWeb_resume(This)	\
    ( (This)->lpVtbl -> resume(This) ) 

#define IAppBundleWeb_cancel(This)	\
    ( (This)->lpVtbl -> cancel(This) ) 

#define IAppBundleWeb_downloadPackage(This,app_id,package_name)	\
    ( (This)->lpVtbl -> downloadPackage(This,app_id,package_name) ) 

#define IAppBundleWeb_get_currentState(This,current_state)	\
    ( (This)->lpVtbl -> get_currentState(This,current_state) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppBundleWeb_INTERFACE_DEFINED__ */


#ifndef __IAppWeb_INTERFACE_DEFINED__
#define __IAppWeb_INTERFACE_DEFINED__

/* interface IAppWeb */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IAppWeb;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("973d746a-1df2-404a-b66b-ea632417866f")
    IAppWeb : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_appId( 
            /* [retval][out] */ BSTR *__MIDL__IAppWeb0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_currentVersionWeb( 
            /* [retval][out] */ IDispatch **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_nextVersionWeb( 
            /* [retval][out] */ IDispatch **next) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE cancel( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_currentState( 
            /* [retval][out] */ IDispatch **current_state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE launch( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE uninstall( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppWebVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppWeb * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppWeb * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppWeb * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppWeb * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppWeb * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppWeb * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_appId )( 
            IAppWeb * This,
            /* [retval][out] */ BSTR *__MIDL__IAppWeb0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_currentVersionWeb )( 
            IAppWeb * This,
            /* [retval][out] */ IDispatch **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_nextVersionWeb )( 
            IAppWeb * This,
            /* [retval][out] */ IDispatch **next);
        
        HRESULT ( STDMETHODCALLTYPE *cancel )( 
            IAppWeb * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_currentState )( 
            IAppWeb * This,
            /* [retval][out] */ IDispatch **current_state);
        
        HRESULT ( STDMETHODCALLTYPE *launch )( 
            IAppWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *uninstall )( 
            IAppWeb * This);
        
        END_INTERFACE
    } IAppWebVtbl;

    interface IAppWeb
    {
        CONST_VTBL struct IAppWebVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppWeb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppWeb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppWeb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppWeb_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppWeb_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppWeb_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppWeb_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppWeb_get_appId(This,__MIDL__IAppWeb0000)	\
    ( (This)->lpVtbl -> get_appId(This,__MIDL__IAppWeb0000) ) 

#define IAppWeb_get_currentVersionWeb(This,current)	\
    ( (This)->lpVtbl -> get_currentVersionWeb(This,current) ) 

#define IAppWeb_get_nextVersionWeb(This,next)	\
    ( (This)->lpVtbl -> get_nextVersionWeb(This,next) ) 

#define IAppWeb_cancel(This)	\
    ( (This)->lpVtbl -> cancel(This) ) 

#define IAppWeb_get_currentState(This,current_state)	\
    ( (This)->lpVtbl -> get_currentState(This,current_state) ) 

#define IAppWeb_launch(This)	\
    ( (This)->lpVtbl -> launch(This) ) 

#define IAppWeb_uninstall(This)	\
    ( (This)->lpVtbl -> uninstall(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppWeb_INTERFACE_DEFINED__ */


#ifndef __IAppVersionWeb_INTERFACE_DEFINED__
#define __IAppVersionWeb_INTERFACE_DEFINED__

/* interface IAppVersionWeb */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IAppVersionWeb;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("afc15738-2cc4-4aac-9b19-c1831428d04f")
    IAppVersionWeb : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_version( 
            /* [retval][out] */ BSTR *__MIDL__IAppVersionWeb0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_packageCount( 
            /* [retval][out] */ long *count) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_packageWeb( 
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **package) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppVersionWebVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppVersionWeb * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppVersionWeb * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppVersionWeb * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppVersionWeb * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppVersionWeb * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppVersionWeb * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppVersionWeb * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_version )( 
            IAppVersionWeb * This,
            /* [retval][out] */ BSTR *__MIDL__IAppVersionWeb0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_packageCount )( 
            IAppVersionWeb * This,
            /* [retval][out] */ long *count);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_packageWeb )( 
            IAppVersionWeb * This,
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **package);
        
        END_INTERFACE
    } IAppVersionWebVtbl;

    interface IAppVersionWeb
    {
        CONST_VTBL struct IAppVersionWebVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppVersionWeb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppVersionWeb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppVersionWeb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppVersionWeb_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppVersionWeb_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppVersionWeb_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppVersionWeb_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppVersionWeb_get_version(This,__MIDL__IAppVersionWeb0000)	\
    ( (This)->lpVtbl -> get_version(This,__MIDL__IAppVersionWeb0000) ) 

#define IAppVersionWeb_get_packageCount(This,count)	\
    ( (This)->lpVtbl -> get_packageCount(This,count) ) 

#define IAppVersionWeb_get_packageWeb(This,index,package)	\
    ( (This)->lpVtbl -> get_packageWeb(This,index,package) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppVersionWeb_INTERFACE_DEFINED__ */


#ifndef __ICoCreateAsyncStatus_INTERFACE_DEFINED__
#define __ICoCreateAsyncStatus_INTERFACE_DEFINED__

/* interface ICoCreateAsyncStatus */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_ICoCreateAsyncStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4dafb7ab-e8d8-4003-87b8-678e15b4c221")
    ICoCreateAsyncStatus : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_isDone( 
            /* [retval][out] */ VARIANT_BOOL *is_done) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_completionHResult( 
            /* [retval][out] */ LONG *hr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_createdInstance( 
            /* [retval][out] */ IDispatch **instance) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICoCreateAsyncStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoCreateAsyncStatus * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoCreateAsyncStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoCreateAsyncStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoCreateAsyncStatus * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoCreateAsyncStatus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoCreateAsyncStatus * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoCreateAsyncStatus * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDone )( 
            ICoCreateAsyncStatus * This,
            /* [retval][out] */ VARIANT_BOOL *is_done);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_completionHResult )( 
            ICoCreateAsyncStatus * This,
            /* [retval][out] */ LONG *hr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_createdInstance )( 
            ICoCreateAsyncStatus * This,
            /* [retval][out] */ IDispatch **instance);
        
        END_INTERFACE
    } ICoCreateAsyncStatusVtbl;

    interface ICoCreateAsyncStatus
    {
        CONST_VTBL struct ICoCreateAsyncStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoCreateAsyncStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoCreateAsyncStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoCreateAsyncStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoCreateAsyncStatus_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoCreateAsyncStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoCreateAsyncStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoCreateAsyncStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoCreateAsyncStatus_get_isDone(This,is_done)	\
    ( (This)->lpVtbl -> get_isDone(This,is_done) ) 

#define ICoCreateAsyncStatus_get_completionHResult(This,hr)	\
    ( (This)->lpVtbl -> get_completionHResult(This,hr) ) 

#define ICoCreateAsyncStatus_get_createdInstance(This,instance)	\
    ( (This)->lpVtbl -> get_createdInstance(This,instance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoCreateAsyncStatus_INTERFACE_DEFINED__ */


#ifndef __ICoCreateAsync_INTERFACE_DEFINED__
#define __ICoCreateAsync_INTERFACE_DEFINED__

/* interface ICoCreateAsync */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ICoCreateAsync;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7fbb29e7-6703-4624-ad84-c8500f57c5c4")
    ICoCreateAsync : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE createOmahaMachineServerAsync( 
            /* [in] */ BSTR origin_url,
            /* [in] */ BOOL create_elevated,
            /* [retval][out] */ ICoCreateAsyncStatus **status) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICoCreateAsyncVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoCreateAsync * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoCreateAsync * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoCreateAsync * This);
        
        HRESULT ( STDMETHODCALLTYPE *createOmahaMachineServerAsync )( 
            ICoCreateAsync * This,
            /* [in] */ BSTR origin_url,
            /* [in] */ BOOL create_elevated,
            /* [retval][out] */ ICoCreateAsyncStatus **status);
        
        END_INTERFACE
    } ICoCreateAsyncVtbl;

    interface ICoCreateAsync
    {
        CONST_VTBL struct ICoCreateAsyncVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoCreateAsync_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoCreateAsync_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoCreateAsync_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoCreateAsync_createOmahaMachineServerAsync(This,origin_url,create_elevated,status)	\
    ( (This)->lpVtbl -> createOmahaMachineServerAsync(This,origin_url,create_elevated,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoCreateAsync_INTERFACE_DEFINED__ */


#ifndef __IBrowserHttpRequest2_INTERFACE_DEFINED__
#define __IBrowserHttpRequest2_INTERFACE_DEFINED__

/* interface IBrowserHttpRequest2 */
/* [unique][nonextensible][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IBrowserHttpRequest2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("791df12c-01ff-43a1-a3d7-5b1b98a9248a")
    IBrowserHttpRequest2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ BSTR url,
            /* [in] */ BSTR post_data,
            /* [in] */ BSTR request_headers,
            /* [in] */ VARIANT response_headers_needed,
            /* [out] */ VARIANT *response_headers,
            /* [out] */ DWORD *response_code,
            /* [out] */ BSTR *cache_filename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBrowserHttpRequest2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBrowserHttpRequest2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBrowserHttpRequest2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBrowserHttpRequest2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Send )( 
            IBrowserHttpRequest2 * This,
            /* [in] */ BSTR url,
            /* [in] */ BSTR post_data,
            /* [in] */ BSTR request_headers,
            /* [in] */ VARIANT response_headers_needed,
            /* [out] */ VARIANT *response_headers,
            /* [out] */ DWORD *response_code,
            /* [out] */ BSTR *cache_filename);
        
        END_INTERFACE
    } IBrowserHttpRequest2Vtbl;

    interface IBrowserHttpRequest2
    {
        CONST_VTBL struct IBrowserHttpRequest2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBrowserHttpRequest2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBrowserHttpRequest2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBrowserHttpRequest2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBrowserHttpRequest2_Send(This,url,post_data,request_headers,response_headers_needed,response_headers,response_code,cache_filename)	\
    ( (This)->lpVtbl -> Send(This,url,post_data,request_headers,response_headers_needed,response_headers,response_code,cache_filename) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBrowserHttpRequest2_INTERFACE_DEFINED__ */


#ifndef __IProcessLauncher_INTERFACE_DEFINED__
#define __IProcessLauncher_INTERFACE_DEFINED__

/* interface IProcessLauncher */
/* [unique][helpstring][uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IProcessLauncher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("28839a52-cddf-4c7c-ac21-b1c4fc1be7ef")
    IProcessLauncher : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LaunchCmdLine( 
            /* [string][in] */ const WCHAR *cmd_line) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LaunchBrowser( 
            /* [in] */ DWORD browser_type,
            /* [string][in] */ const WCHAR *url) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LaunchCmdElevated( 
            /* [string][in] */ const WCHAR *app_guid,
            /* [string][in] */ const WCHAR *cmd_id,
            /* [in] */ DWORD caller_proc_id,
            /* [out] */ ULONG_PTR *proc_handle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProcessLauncherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProcessLauncher * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IProcessLauncher * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IProcessLauncher * This);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchCmdLine )( 
            IProcessLauncher * This,
            /* [string][in] */ const WCHAR *cmd_line);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchBrowser )( 
            IProcessLauncher * This,
            /* [in] */ DWORD browser_type,
            /* [string][in] */ const WCHAR *url);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchCmdElevated )( 
            IProcessLauncher * This,
            /* [string][in] */ const WCHAR *app_guid,
            /* [string][in] */ const WCHAR *cmd_id,
            /* [in] */ DWORD caller_proc_id,
            /* [out] */ ULONG_PTR *proc_handle);
        
        END_INTERFACE
    } IProcessLauncherVtbl;

    interface IProcessLauncher
    {
        CONST_VTBL struct IProcessLauncherVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProcessLauncher_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProcessLauncher_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProcessLauncher_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProcessLauncher_LaunchCmdLine(This,cmd_line)	\
    ( (This)->lpVtbl -> LaunchCmdLine(This,cmd_line) ) 

#define IProcessLauncher_LaunchBrowser(This,browser_type,url)	\
    ( (This)->lpVtbl -> LaunchBrowser(This,browser_type,url) ) 

#define IProcessLauncher_LaunchCmdElevated(This,app_guid,cmd_id,caller_proc_id,proc_handle)	\
    ( (This)->lpVtbl -> LaunchCmdElevated(This,app_guid,cmd_id,caller_proc_id,proc_handle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProcessLauncher_INTERFACE_DEFINED__ */


#ifndef __IOneClickProcessLauncher_INTERFACE_DEFINED__
#define __IOneClickProcessLauncher_INTERFACE_DEFINED__

/* interface IOneClickProcessLauncher */
/* [unique][helpstring][uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IOneClickProcessLauncher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4d3a05b9-5ef2-46f9-a4fe-81b01637ed47")
    IOneClickProcessLauncher : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LaunchAppCommand( 
            /* [string][in] */ const WCHAR *app_guid,
            /* [string][in] */ const WCHAR *cmd_id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOneClickProcessLauncherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOneClickProcessLauncher * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOneClickProcessLauncher * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOneClickProcessLauncher * This);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchAppCommand )( 
            IOneClickProcessLauncher * This,
            /* [string][in] */ const WCHAR *app_guid,
            /* [string][in] */ const WCHAR *cmd_id);
        
        END_INTERFACE
    } IOneClickProcessLauncherVtbl;

    interface IOneClickProcessLauncher
    {
        CONST_VTBL struct IOneClickProcessLauncherVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOneClickProcessLauncher_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOneClickProcessLauncher_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOneClickProcessLauncher_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOneClickProcessLauncher_LaunchAppCommand(This,app_guid,cmd_id)	\
    ( (This)->lpVtbl -> LaunchAppCommand(This,app_guid,cmd_id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOneClickProcessLauncher_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_omaha3_idl_0000_0018 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_omaha3_idl_0000_0018_0001
    {	COMPLETION_CODE_SUCCESS	= 1,
	COMPLETION_CODE_SUCCESS_CLOSE_UI	= ( COMPLETION_CODE_SUCCESS + 1 ) ,
	COMPLETION_CODE_ERROR	= ( COMPLETION_CODE_SUCCESS_CLOSE_UI + 1 ) ,
	COMPLETION_CODE_RESTART_ALL_BROWSERS	= ( COMPLETION_CODE_ERROR + 1 ) ,
	COMPLETION_CODE_REBOOT	= ( COMPLETION_CODE_RESTART_ALL_BROWSERS + 1 ) ,
	COMPLETION_CODE_RESTART_BROWSER	= ( COMPLETION_CODE_REBOOT + 1 ) ,
	COMPLETION_CODE_RESTART_ALL_BROWSERS_NOTICE_ONLY	= ( COMPLETION_CODE_RESTART_BROWSER + 1 ) ,
	COMPLETION_CODE_REBOOT_NOTICE_ONLY	= ( COMPLETION_CODE_RESTART_ALL_BROWSERS_NOTICE_ONLY + 1 ) ,
	COMPLETION_CODE_RESTART_BROWSER_NOTICE_ONLY	= ( COMPLETION_CODE_REBOOT_NOTICE_ONLY + 1 ) ,
	COMPLETION_CODE_RUN_COMMAND	= ( COMPLETION_CODE_RESTART_BROWSER_NOTICE_ONLY + 1 ) 
    } 	LegacyCompletionCodes;



extern RPC_IF_HANDLE __MIDL_itf_omaha3_idl_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_omaha3_idl_0000_0018_v0_0_s_ifspec;

#ifndef __IProgressWndEvents_INTERFACE_DEFINED__
#define __IProgressWndEvents_INTERFACE_DEFINED__

/* interface IProgressWndEvents */
/* [unique][helpstring][uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IProgressWndEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cd858925-6866-4f02-b9e9-b5b08e353be7")
    IProgressWndEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DoClose( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoPause( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoResume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoRestartBrowsers( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoReboot( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoLaunchBrowser( 
            /* [string][in] */ const WCHAR *url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProgressWndEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProgressWndEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IProgressWndEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IProgressWndEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoClose )( 
            IProgressWndEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoPause )( 
            IProgressWndEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoResume )( 
            IProgressWndEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoRestartBrowsers )( 
            IProgressWndEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoReboot )( 
            IProgressWndEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoLaunchBrowser )( 
            IProgressWndEvents * This,
            /* [string][in] */ const WCHAR *url);
        
        END_INTERFACE
    } IProgressWndEventsVtbl;

    interface IProgressWndEvents
    {
        CONST_VTBL struct IProgressWndEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProgressWndEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProgressWndEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProgressWndEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProgressWndEvents_DoClose(This)	\
    ( (This)->lpVtbl -> DoClose(This) ) 

#define IProgressWndEvents_DoPause(This)	\
    ( (This)->lpVtbl -> DoPause(This) ) 

#define IProgressWndEvents_DoResume(This)	\
    ( (This)->lpVtbl -> DoResume(This) ) 

#define IProgressWndEvents_DoRestartBrowsers(This)	\
    ( (This)->lpVtbl -> DoRestartBrowsers(This) ) 

#define IProgressWndEvents_DoReboot(This)	\
    ( (This)->lpVtbl -> DoReboot(This) ) 

#define IProgressWndEvents_DoLaunchBrowser(This,url)	\
    ( (This)->lpVtbl -> DoLaunchBrowser(This,url) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProgressWndEvents_INTERFACE_DEFINED__ */


#ifndef __IJobObserver_INTERFACE_DEFINED__
#define __IJobObserver_INTERFACE_DEFINED__

/* interface IJobObserver */
/* [unique][helpstring][uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IJobObserver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff612905-d787-4f53-ab5e-5ab5971b10a7")
    IJobObserver : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnShow( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCheckingForUpdate( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnUpdateAvailable( 
            /* [string][in] */ const WCHAR *version_string) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnWaitingToDownload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDownloading( 
            /* [in] */ int time_remaining_ms,
            /* [in] */ int pos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnWaitingToInstall( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnInstalling( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnPause( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ LegacyCompletionCodes code,
            /* [string][in] */ const WCHAR *reserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEventSink( 
            /* [in] */ IProgressWndEvents *ui_sink) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IJobObserverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IJobObserver * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IJobObserver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IJobObserver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnShow )( 
            IJobObserver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCheckingForUpdate )( 
            IJobObserver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnUpdateAvailable )( 
            IJobObserver * This,
            /* [string][in] */ const WCHAR *version_string);
        
        HRESULT ( STDMETHODCALLTYPE *OnWaitingToDownload )( 
            IJobObserver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDownloading )( 
            IJobObserver * This,
            /* [in] */ int time_remaining_ms,
            /* [in] */ int pos);
        
        HRESULT ( STDMETHODCALLTYPE *OnWaitingToInstall )( 
            IJobObserver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnInstalling )( 
            IJobObserver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnPause )( 
            IJobObserver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            IJobObserver * This,
            /* [in] */ LegacyCompletionCodes code,
            /* [string][in] */ const WCHAR *reserved);
        
        HRESULT ( STDMETHODCALLTYPE *SetEventSink )( 
            IJobObserver * This,
            /* [in] */ IProgressWndEvents *ui_sink);
        
        END_INTERFACE
    } IJobObserverVtbl;

    interface IJobObserver
    {
        CONST_VTBL struct IJobObserverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJobObserver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJobObserver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJobObserver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJobObserver_OnShow(This)	\
    ( (This)->lpVtbl -> OnShow(This) ) 

#define IJobObserver_OnCheckingForUpdate(This)	\
    ( (This)->lpVtbl -> OnCheckingForUpdate(This) ) 

#define IJobObserver_OnUpdateAvailable(This,version_string)	\
    ( (This)->lpVtbl -> OnUpdateAvailable(This,version_string) ) 

#define IJobObserver_OnWaitingToDownload(This)	\
    ( (This)->lpVtbl -> OnWaitingToDownload(This) ) 

#define IJobObserver_OnDownloading(This,time_remaining_ms,pos)	\
    ( (This)->lpVtbl -> OnDownloading(This,time_remaining_ms,pos) ) 

#define IJobObserver_OnWaitingToInstall(This)	\
    ( (This)->lpVtbl -> OnWaitingToInstall(This) ) 

#define IJobObserver_OnInstalling(This)	\
    ( (This)->lpVtbl -> OnInstalling(This) ) 

#define IJobObserver_OnPause(This)	\
    ( (This)->lpVtbl -> OnPause(This) ) 

#define IJobObserver_OnComplete(This,code,reserved)	\
    ( (This)->lpVtbl -> OnComplete(This,code,reserved) ) 

#define IJobObserver_SetEventSink(This,ui_sink)	\
    ( (This)->lpVtbl -> SetEventSink(This,ui_sink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJobObserver_INTERFACE_DEFINED__ */


#ifndef __IGoogleUpdate_INTERFACE_DEFINED__
#define __IGoogleUpdate_INTERFACE_DEFINED__

/* interface IGoogleUpdate */
/* [unique][helpstring][uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IGoogleUpdate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a62c03e7-56ef-4109-a920-d3c06665223e")
    IGoogleUpdate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CheckForUpdate( 
            /* [string][in] */ const WCHAR *guid,
            /* [in] */ IJobObserver *observer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Update( 
            /* [string][in] */ const WCHAR *guid,
            /* [in] */ IJobObserver *observer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGoogleUpdateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGoogleUpdate * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGoogleUpdate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGoogleUpdate * This);
        
        HRESULT ( STDMETHODCALLTYPE *CheckForUpdate )( 
            IGoogleUpdate * This,
            /* [string][in] */ const WCHAR *guid,
            /* [in] */ IJobObserver *observer);
        
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            IGoogleUpdate * This,
            /* [string][in] */ const WCHAR *guid,
            /* [in] */ IJobObserver *observer);
        
        END_INTERFACE
    } IGoogleUpdateVtbl;

    interface IGoogleUpdate
    {
        CONST_VTBL struct IGoogleUpdateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGoogleUpdate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGoogleUpdate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGoogleUpdate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGoogleUpdate_CheckForUpdate(This,guid,observer)	\
    ( (This)->lpVtbl -> CheckForUpdate(This,guid,observer) ) 

#define IGoogleUpdate_Update(This,guid,observer)	\
    ( (This)->lpVtbl -> Update(This,guid,observer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGoogleUpdate_INTERFACE_DEFINED__ */


#ifndef __IGoogleUpdateCore_INTERFACE_DEFINED__
#define __IGoogleUpdateCore_INTERFACE_DEFINED__

/* interface IGoogleUpdateCore */
/* [unique][helpstring][uuid][oleautomation][object] */ 


EXTERN_C const IID IID_IGoogleUpdateCore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("857a3d7a-6b13-45f3-a19b-75870d0c2823")
    IGoogleUpdateCore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LaunchCmdElevated( 
            /* [string][in] */ const WCHAR *app_guid,
            /* [string][in] */ const WCHAR *cmd_id,
            /* [in] */ DWORD caller_proc_id,
            /* [out] */ ULONG_PTR *proc_handle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGoogleUpdateCoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGoogleUpdateCore * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGoogleUpdateCore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGoogleUpdateCore * This);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchCmdElevated )( 
            IGoogleUpdateCore * This,
            /* [string][in] */ const WCHAR *app_guid,
            /* [string][in] */ const WCHAR *cmd_id,
            /* [in] */ DWORD caller_proc_id,
            /* [out] */ ULONG_PTR *proc_handle);
        
        END_INTERFACE
    } IGoogleUpdateCoreVtbl;

    interface IGoogleUpdateCore
    {
        CONST_VTBL struct IGoogleUpdateCoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGoogleUpdateCore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGoogleUpdateCore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGoogleUpdateCore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGoogleUpdateCore_LaunchCmdElevated(This,app_guid,cmd_id,caller_proc_id,proc_handle)	\
    ( (This)->lpVtbl -> LaunchCmdElevated(This,app_guid,cmd_id,caller_proc_id,proc_handle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGoogleUpdateCore_INTERFACE_DEFINED__ */



#ifndef __GoogleUpdate3Lib_LIBRARY_DEFINED__
#define __GoogleUpdate3Lib_LIBRARY_DEFINED__

/* library GoogleUpdate3Lib */
/* [helpstring][version][uuid] */ 













EXTERN_C const IID LIBID_GoogleUpdate3Lib;

EXTERN_C const CLSID CLSID_GoogleUpdate3UserClass;

#ifdef __cplusplus

class DECLSPEC_UUID("cec92c56-68e4-4494-ba79-eb3a71ad8473")
GoogleUpdate3UserClass;
#endif

EXTERN_C const CLSID CLSID_GoogleUpdate3ServiceClass;

#ifdef __cplusplus

class DECLSPEC_UUID("edc2caa1-2001-4835-a04a-565a5cde5f7f")
GoogleUpdate3ServiceClass;
#endif

EXTERN_C const CLSID CLSID_GoogleUpdate3WebUserClass;

#ifdef __cplusplus

class DECLSPEC_UUID("b5bae3dd-809e-4be3-a421-f5d3f17a03db")
GoogleUpdate3WebUserClass;
#endif

EXTERN_C const CLSID CLSID_GoogleUpdate3WebMachineClass;

#ifdef __cplusplus

class DECLSPEC_UUID("31e52f9c-5dba-4a20-b7d4-4ade46fbf9e9")
GoogleUpdate3WebMachineClass;
#endif

EXTERN_C const CLSID CLSID_GoogleUpdate3WebServiceClass;

#ifdef __cplusplus

class DECLSPEC_UUID("2e119b1c-8a13-4e21-92c2-1b34cab1f028")
GoogleUpdate3WebServiceClass;
#endif

EXTERN_C const CLSID CLSID_GoogleUpdate3WebMachineFallbackClass;

#ifdef __cplusplus

class DECLSPEC_UUID("0e2ee4d0-7ef1-45d0-aae8-2506c0ba649c")
GoogleUpdate3WebMachineFallbackClass;
#endif

EXTERN_C const CLSID CLSID_CurrentStateUserClass;

#ifdef __cplusplus

class DECLSPEC_UUID("733eb758-7cf0-4927-a3b9-75eb28490613")
CurrentStateUserClass;
#endif

EXTERN_C const CLSID CLSID_CurrentStateMachineClass;

#ifdef __cplusplus

class DECLSPEC_UUID("dad290ab-07df-443d-9a5a-4434474353ed")
CurrentStateMachineClass;
#endif

EXTERN_C const CLSID CLSID_CoCreateAsyncClass;

#ifdef __cplusplus

class DECLSPEC_UUID("5e79da64-77df-4c1f-9184-c6b5f035e3d9")
CoCreateAsyncClass;
#endif

EXTERN_C const CLSID CLSID_CredentialDialogUserClass;

#ifdef __cplusplus

class DECLSPEC_UUID("a663a8e3-b533-4153-8ef6-3c5823de9280")
CredentialDialogUserClass;
#endif

EXTERN_C const CLSID CLSID_CredentialDialogMachineClass;

#ifdef __cplusplus

class DECLSPEC_UUID("341390f2-6214-4981-a2ae-738205e73590")
CredentialDialogMachineClass;
#endif

EXTERN_C const CLSID CLSID_GoogleComProxyMachineClass;

#ifdef __cplusplus

class DECLSPEC_UUID("196A4471-2796-4D91-A2AA-51A7EAD96888")
GoogleComProxyMachineClass;
#endif

EXTERN_C const CLSID CLSID_GoogleComProxyUserClass;

#ifdef __cplusplus

class DECLSPEC_UUID("692F2A18-BBF9-4CF4-A8B1-873F21AA3675")
GoogleComProxyUserClass;
#endif

EXTERN_C const CLSID CLSID_ProcessLauncherClass;

#ifdef __cplusplus

class DECLSPEC_UUID("f235f88c-3de7-4195-a0e9-105ba38344cc")
ProcessLauncherClass;
#endif

EXTERN_C const CLSID CLSID_OneClickUserProcessLauncherClass;

#ifdef __cplusplus

class DECLSPEC_UUID("bb42bfd1-b0eb-449c-8882-fb810c2738d0")
OneClickUserProcessLauncherClass;
#endif

EXTERN_C const CLSID CLSID_OneClickMachineProcessLauncherClass;

#ifdef __cplusplus

class DECLSPEC_UUID("5457eff7-c0b3-4672-a6b4-58f93951f1e0")
OneClickMachineProcessLauncherClass;
#endif

EXTERN_C const CLSID CLSID_OnDemandUserAppsClass;

#ifdef __cplusplus

class DECLSPEC_UUID("660baf72-a9ef-4fb1-81ae-9395ca6c39cf")
OnDemandUserAppsClass;
#endif

EXTERN_C const CLSID CLSID_OnDemandMachineAppsClass;

#ifdef __cplusplus

class DECLSPEC_UUID("0dd31efc-0cf5-4ec5-9799-f1a8819acea4")
OnDemandMachineAppsClass;
#endif

EXTERN_C const CLSID CLSID_OnDemandMachineAppsServiceClass;

#ifdef __cplusplus

class DECLSPEC_UUID("19c06b1a-7202-40b4-9903-62927d08f943")
OnDemandMachineAppsServiceClass;
#endif

EXTERN_C const CLSID CLSID_OnDemandMachineAppsFallbackClass;

#ifdef __cplusplus

class DECLSPEC_UUID("107e2437-bfe7-4e17-91d9-2866e1373e00")
OnDemandMachineAppsFallbackClass;
#endif

EXTERN_C const CLSID CLSID_GoogleUpdateCoreClass;

#ifdef __cplusplus

class DECLSPEC_UUID("b0f72540-f2a8-4027-aac8-a39deb0470ad")
GoogleUpdateCoreClass;
#endif

EXTERN_C const CLSID CLSID_GoogleUpdateCoreMachineClass;

#ifdef __cplusplus

class DECLSPEC_UUID("b15e7b58-2a81-4f3e-8381-f5db7d3a1f84")
GoogleUpdateCoreMachineClass;
#endif
#endif /* __GoogleUpdate3Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


