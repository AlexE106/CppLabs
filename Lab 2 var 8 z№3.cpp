#include "stdafx.h"

#include <iostream>



using namespace std;


int main()
{
	int a;
	cout << "enter number of numbers" << endl;
	cin >> a;
	if (a > 0)
	{
		int *m = new int[a];
		for (int i = 0; i < a; i++)
		{
			cout << "enter numbers";
			cin >> m[i];
		}
		for (int i = 0; i < a-1; i++)
		{
			for (int j = 0; j < a-1; j++)
			{
				if (m[j+1]<m[j])
				{
					swap(m[j], m[j + 1]);
				}
			}
		}
		for (int i = 0; i < a; i++)
		{
			cout << m[i]<<" ";
		}
		delete[] m;
	}
	else
	{
		cout << "error" << endl;
	}
	system("pause");
	return 0;
}

