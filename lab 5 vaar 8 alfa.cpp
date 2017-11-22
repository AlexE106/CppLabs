// 5.var №8, №5	Даны действительное число a и натуральное число n. Вычислить  .

#include "stdafx.h"

#include <iostream>

#include <cmath>



using namespace std;

int main()

{
	int n;
	float a,x=1,k=0;

	cout << "enter the number n" << endl;

	cin >> n;
	
	cout << "enter the number a" << endl;
	
	cin >> a;
	
	int i;
	
	for (i = 0; i <= n; i++)
	{
		
		x = x*(1 / (a + i));
		k = k + x;

	}


	cout << k << endl;
	
	system("pause");

	return 0;
}