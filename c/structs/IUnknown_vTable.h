#ifndef IUNKNOWN_VTABLE_INCLUDED
#define IUNKNOWN_VTABLE_INCLUDED

typedef  HRESULT (STDMETHODCALLTYPE  *funcPtr_IUnknown_QueryInterface)(void* self, REFIID riid, void **ppvObj);
typedef  ULONG   (STDMETHODCALLTYPE  *funcPtr_IUnknown_AddRef        )(void* self);
typedef  ULONG   (STDMETHODCALLTYPE  *funcPtr_IUnknown_Release       )(void* self);

//
// Create a macro for the IUnknown vTable because these
// function pointers are also needed in other COM vTables.
//
#define IUNKOWN_VTABLE                               \
  funcPtr_IUnknown_QueryInterface  QueryInterface;   \
  funcPtr_IUnknown_AddRef          AddRef;           \
  funcPtr_IUnknown_Release         Release;

typedef struct {
    IUNKOWN_VTABLE
}
IUnknown_vTable;

#endif
