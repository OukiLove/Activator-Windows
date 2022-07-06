#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

int main()
{
	std::cout << "Press F..." << endl;
	while (true)
	{
		if (GetAsyncKeyState(70))
			break;
	}
	std::cout << "Wait..." << endl;
	//Windows 10\11 Pro
	system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
	std::cout << "GG!" << endl;
	system("pause");
}