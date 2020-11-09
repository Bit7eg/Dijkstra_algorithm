#include <iostream>
#include <iomanip>
#include "FileWork.h"
#include "Next_Str.h"
using namespace std;

int main()
{
	char* str = readFile();
	if (str == 0)
	{
		writeFile("File 'input.txt' not found");
	}
	else
	{
		writeFile(algorithm(str));
	}
}