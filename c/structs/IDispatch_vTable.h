#ifndef IDISPATCH_VTABLE_INCLUDED
#define IDISPATCHUVTABLE_INCLUDED

#include "IUnknown_vTable.h"

typedef  HRESULT (__stdcall *funcPtr_IDispatch_GetTypeInfoCount)(void*, UINT *pctInfo);
typedef  HRESULT (__stdcall *funcPtr_IDispatch_GetTypeInfo     )(void*, UINT iTInfo, LCID lcid, ITypeInfo **ppTI);
typedef  HRESULT (__stdcall *funcPtr_IDispatch_GetIDsOfNames   )(void*, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
typedef  HRESULT (__stdcall *funcPtr_IDispatch_Invoke          )(void*, DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pvarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);

typedef struct {
 //
 // Include the three common function pointers (QueryInterface,
 // AddRef and Release) which are defined in the IUNKOWN_VTABLE
 // macro:
 // 
    IUNKOWN_VTABLE
 // -------------------------------------------------------
    funcPtr_IDispatch_GetTypeInfoCount    GetTypeInfoCount;
    funcPtr_IDispatch_GetTypeInfo         GetTypeInfo;
    funcPtr_IDispatch_GetIDsOfNames       GetIDsOfNames;
    funcPtr_IDispatch_Invoke              Invoke;
}
IDispatch_vTable;

#endif
