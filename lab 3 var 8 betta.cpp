
//�������8 �������3.	���� ����������� ����� n. ���������� ���������� ���� � ���� �����.




#include "stdafx.h"

#include <iostream>

#include <cmath>



using namespace std;

int main()

{

	int n;
	int i;
	cout << "enter the n" << endl;

	cin >> n;
	for (i = 0; n!=0; i++)
	{
		n = n / 10;
	}
	

	cout << i << endl;

	system("pause");

	return 0;

}