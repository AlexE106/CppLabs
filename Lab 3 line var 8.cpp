#include "stdafx.h" 
#include "iostream" 
#include <fstream> 
#include <stdio.h> 
using namespace std;
int main()
{
	ifstream TEXT("INPUT.txt");
	ofstream OTEXT("OUTPUT.txt");
	while (!TEXT.eof())
	{
		char *s = new char[255];
		TEXT.getline(s, 255);
		char *m = new char[255];
		int j = 0;

		for (int i = 0; i < 255; i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				m[j] = s[i];
				j = j++;
			}
			if (s[i] >= 'A' && s[i <= 'z'])
			{
				OTEXT << s[i];
			}
		}
		m[j] = '\0';
		delete[]s;
		OTEXT << m << endl;
		delete[]m;
	}
	return 0;
}