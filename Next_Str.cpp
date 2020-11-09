#include <iostream>
#include <iomanip>
using namespace std;

const char* algorithm(char* str)
{
	int size{ 0 };
	char ch{ 0 };
	int i{ 0 };
	for (size = 0; str[size]!='\0'; ++size) {}
	for (i = size - 2; i >= 0; --i)
	{
		if (str[i] < str[i+1])
		{
			for (int j{ size - 1 }; j > i; --j)
			{
				if (str[j] > str[i])
				{
					ch = str[j];
					str[j] = str[i];
					str[i] = ch;
					break;
				}
			}
			for (int j{ 1 }; j <= (size - i - 1) / 2; ++j)
			{
				ch = str[size - j];
				str[size - j] = str[i + j];
				str[i + j] = ch;
			}
			break;
		}
	}
	if (i==-1)
	{
		return "No next permutation";
	}
	else
	{
		return str;
	}
}