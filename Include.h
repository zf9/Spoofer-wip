#pragma once
#include <iostream>
#include <fstream>
#include <filesystem>
#include <urlmon.h>
#include <random>
#include <Psapi.h>
#include <thread>
#include <winternl.h>
#include <WinInet.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <tchar.h>
#pragma comment(lib,"Wininet.lib")
#pragma comment(lib, "urlmon.lib")

#define MAX_PROCESSES 1024 
HANDLE DriverHandle;
std::string tm_to_readable_time(tm ctx);
typedef NTSTATUS(NTAPI* pdef_NtRaiseHardError)(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask OPTIONAL, PULONG_PTR Parameters, ULONG ResponseOption, PULONG Response);
typedef NTSTATUS(NTAPI* pdef_RtlAdjustPrivilege)(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN Enabled);
void error(std::string msg);

#include "bytetofile.hpp"
#include "skCrypt.h"
#include "xor.hpp"
#include "Header.h"
#include "PullOut-Header.h"
#include "Condom-Header.h"
#include "BirthControl-Header.h"

#include "DiskDriver1.h"
#include "DiskMapper1.h"

#ifdef max
#undef max
#endif

using std::cin;
using std::endl;
using std::cerr;