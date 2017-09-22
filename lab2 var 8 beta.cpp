
//2. 8 вариант. задание №2	Дано действительное число а.Для функции f(x), график которой представлен на рисунке, вычислить f(a).

#include "stdafx.h"

#include <iostream>

#include <cmath>



using namespace std;

int main()

{

	float x, y, a;

	cout << "enter the a" << endl;

	cin >> a;

	if (a < 0) {  
		y = -a;
	}
	else {  
		y = -(pow(a, 2));
	}


	cout << y;

	system("pause");

	return 0;

}
