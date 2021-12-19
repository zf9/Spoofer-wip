#pragma once


void nignog() {
	if (FindWindowA(NULL, (_xor_("The Wireshark Network Analyzer").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Progress Telerik Fiddler Web Debugger").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Fiddler").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("HTTP Debugger").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("HTTP Debugger Pro").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("x64dbg").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("dnSpy").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("FolderChangesView").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("BinaryNinja").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("HxD").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Cheat Engine 7.2").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Cheat Engine 7.1").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Cheat Engine 7.9").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Cheat Engine 6.9").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Cheat Engine 6.8").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Ida").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Ida Pro").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Ida Freeware").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Process Hacker").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("Process Hacker 2").c_str()))) { bsod(); }
	if (FindWindowA(NULL, (_xor_("OllyDbg").c_str()))) { bsod(); }
}

void debuggerfound() {
	if (IsDebuggerPresent())
	{
		bsod();
	}
}

void killdbg()
{
	system(_xor_("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1").c_str());
	system(_xor_("sc stop HTTPDebuggerPro >nul 2>&1").c_str());
	system(_xor_("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1").c_str());
	system(_xor_("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1").c_str());
	system(_xor_("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1").c_str());
}

void titledetect()
{
	HWND window;
	window = FindWindow(0, _xor_((L"IDA: Quick start")).c_str());
	if (window)
	{
		error(_xor_("IDA"));
	}

	window = FindWindow(0, _xor_((L"Memory Viewer")).c_str());
	if (window)
	{
		error(_xor_("Cheat Engine"));
	}

	window = FindWindow(0, _xor_((L"Process List")).c_str());
	if (window)
	{
		error(_xor_("Cheat Engine"));
	}

	window = FindWindow(0, _xor_((L"KsDumper")).c_str());
	if (window)
	{
		error(_xor_("KsDumper"));
	}
}

void driverdetect()
{
	const TCHAR* devices[] = {_T("\\\\.\\NiGgEr"),_T("\\\\.\\KsDumper") };

	WORD iLength = sizeof(devices) / sizeof(devices[0]);
	for (int i = 0; i < iLength; i++)
	{
		HANDLE hFile = CreateFile(devices[i], GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		TCHAR msg[256] = _T("");
		if (hFile != INVALID_HANDLE_VALUE) {
			system(_xor_("start cmd /c START CMD /C \"COLOR C && TITLE Protection && ECHO KsDumper Detected. && TIMEOUT 10 >nul").c_str());
			exit(0);
		}
		else
		{

		}
	}
}