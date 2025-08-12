#include "xbox.h"

namespace xbox
{
	// Get the address of a function from a module by its ordinal
	void *ResolveFunction(const std::string &moduleName, uint32_t ordinal)
	{
	    HMODULE moduleHandle = GetModuleHandle(moduleName.c_str());
	    if (moduleHandle == nullptr)
	        return nullptr;
	
	    return GetProcAddress(moduleHandle, reinterpret_cast<const char *>(ordinal));
	}

	XNOTIFYQUEUEUI XNotifyQueueUI = static_cast<XNOTIFYQUEUEUI>(ResolveFunction("xam.xex", 656));
}
