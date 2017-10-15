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
		int k = 1;
		int *mas = new int[a];
		int *m = new int[a];
		for (int i = 0; i < a; i++)
		{
			cout << "enter numbers";
			cin >> m[i];
		}
		mas[0] = m[0];
		for (int i = 1; i < a - 1; i++)
		{
			if (m[i] < m[i + 1] & m[i]>m[i - 1])
			{
				mas[k] = m[i];
				k++;
			}
		}
			if (mas[k-1]<m[a-1])
			{
				mas[k] = m[a - 1];
			}
		for (int i = 0; i < k; i++)
		{
			cout << mas[i] << " ";
		}
		delete[] mas;
	}
	else
	{
		cout << "error" << endl;
	}
	system("pause");
	return 0;
}

