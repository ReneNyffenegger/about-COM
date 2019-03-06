#ifndef IDISPATCH_VTABLE_INCLUDED
#define IDISPATCH_VTABLE_INCLUDED

#include "IUnknown_vTable.h"

typedef  HRESULT (STDMETHODCALLTYPE *funcPtr_IDispatch_GetTypeInfoCount)(void *self, UINT *pctInfo);
typedef  HRESULT (STDMETHODCALLTYPE *funcPtr_IDispatch_GetTypeInfo     )(void *self, UINT iTInfo, LCID lcid, ITypeInfo **ppTI);
typedef  HRESULT (STDMETHODCALLTYPE *funcPtr_IDispatch_GetIDsOfNames   )(void *self, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
typedef  HRESULT (STDMETHODCALLTYPE *funcPtr_IDispatch_Invoke          )(void *self, DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pvarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);

 //
 // Include the three common function pointers (QueryInterface,
 // AddRef and Release) which are defined in the IUNKOWN_VTABLE
 // macro and add the four methods specific to IDispatch:
 // 
#define IDISPATCH_VTABLE                                  \
  IUNKOWN_VTABLE                                          \
  funcPtr_IDispatch_GetTypeInfoCount    GetTypeInfoCount; \
  funcPtr_IDispatch_GetTypeInfo         GetTypeInfo;      \
  funcPtr_IDispatch_GetIDsOfNames       GetIDsOfNames;    \
  funcPtr_IDispatch_Invoke              Invoke;

typedef struct {
   IDISPATCH_VTABLE
}
IDispatch_vTable;

#endif
