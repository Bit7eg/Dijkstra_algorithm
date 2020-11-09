#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

char* readFile()
{
	ifstream fin("input.txt");
	if (fin.is_open())
	{
		int size{ 0 };
		for (char i{ 0 }; fin >> i && i != '\n'; ++size) {}
		char* str = new char[size + 1]{ 0 };
		fin.clear();
		fin.seekg(0, ios_base::beg);
		for (int i{ 0 }; i < size; ++i)
		{
			fin >> str[i];
		}
		str[size] = '\0';
		fin.close();
		return str;
	}
	else
	{
		return 0;
	}
}

void writeFile(const char* str)
{
	ofstream fout("output.txt");
	for (int i{0}; str[i]!='\0'; ++i)
	{
		fout << str[i];
	}
	fout.close();
}