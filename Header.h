#pragma once
void scrollbar()
{
	try {
		HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_SCREEN_BUFFER_INFO csbi;

		GetConsoleScreenBufferInfo(console, &csbi);
		COORD scrollbar = {
			csbi.srWindow.Right - csbi.srWindow.Left + 1,
			csbi.srWindow.Bottom - csbi.srWindow.Top + 1
		};

		if (console == 0) {
			throw 0;
		}
		else {
			SetConsoleScreenBufferSize(console, scrollbar);
		}
	}
	catch (...) {
		std::cerr << "Error removing scrollbar" << std::endl;
	}

}

bool FileExists(const std::string& filename) {
	std::ifstream ifile(filename.c_str());
	return (bool)ifile;

}

inline bool FileExistss(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

size_t write_data(void* ptr, size_t size, size_t nmemb, FILE* stream) {
	size_t written = fwrite(ptr, size, nmemb, stream);
	return written;
}

auto RandomTitle = [](int iterations) {
	std::string Title;
	for (int i = 0; i < iterations; i++)
		Title += rand() % 255 + 1;
	return Title;
};

void Title()
{
	while (true)
	{
		SetConsoleTitleA(RandomTitle(rand() % 99999 + 11111).c_str());
		Sleep(250);
	}
}

void error(std::string msg)
{
	system(("START CMD /C \"COLOR C && TITLE Protection && ECHO INFO: ERROR: " + msg + " Detected. Please close and try again. && TIMEOUT 10 >nul").c_str());
	exit(0);
}

void C_Clear()
{
	system(_xor_("cls").c_str());
}

void C_Color()
{
	system(_xor_("color 0A").c_str());
}

void Close_Shit()
{
	system(_xor_("taskkill /f /im EpicGamesLauncher.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im FortniteClient-Win64-Shipping.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im vgtray.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im r5apex.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im RustClient.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im OneDrive.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im RiotClientCrashHandler.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im RiotClientUxRender.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im RiotClientUx.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im RiotClientServices.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im OriginWebHelperService.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im Origin.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im SteamService.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im steamwebhelper.exe >nul 2>&1").c_str());
	system(_xor_("taskkill /f /im steam.exe >nul 2>&1").c_str());
}