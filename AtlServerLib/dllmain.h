// dllmain.h : Declaration of module class.

class CAtlServerLibModule : public ATL::CAtlDllModuleT< CAtlServerLibModule >
{
public :
	DECLARE_LIBID(LIBID_AtlServerLibLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLSERVERLIB, "{594fc508-6bc3-497d-8327-d0626e899789}")
};

extern class CAtlServerLibModule _AtlModule;
