//var�8 lab#4 4.	���� ����������� ����� n, a1, �, an. ���������� ���������� ������ ������������������ a1, � , an, ������� 3 � �� ������� 5. 


#include "stdafx.h"

#include <iostream>

#include <cmath>



using namespace std;

int main()

{
	int n,i,k=0;
	
	cout << "enter the number of numbers" << endl;

	cin >> n;
	
	for (i = 0; i<n; i++)
	{
		int a;
		cout << "enter numbers" << endl;
		cin >> a;
		
		if (a%3==0&&a%5!=0)
		{
			k++;
		}

	}


	cout << k << endl;

	system("pause");

	return 0;

}