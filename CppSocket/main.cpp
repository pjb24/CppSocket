#include "pch.h"

#include <iostream>

int main()
{
	std::string multibyte = "multibyte �ѱ۵� �ǳ�";
	std::wstring widechar = L"widechar �ѱ۵� �ǳ�";

	std::string temp;
	std::wstring wtemp;

	wtemp = ConvertStringToWstring(multibyte);
	temp = ConvertWstringToString(widechar);
	
	std::wcout.imbue(std::locale(""));

	std::wcout << wtemp << std::endl;
	std::cout << temp << std::endl;


	int inum = 1;
	float fnum = 1.0f;

	temp = string_format("string inum: %d, fnum: %d", inum, fnum);
	wtemp = wstring_format(L"wstring inum: %d, fnum: %d, %s", inum, fnum, L"dddddddd");

	std::cout << temp << std::endl;
	std::wcout << wtemp << std::endl;
}
