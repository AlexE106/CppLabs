// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.

//



#include "stdafx.h"

#include <iostream>

#include <cmath>



using namespace std;

int main()

{

	float x, y, z, a, b, c;

	cout << "enter the x  y and z" << endl;

	cin >> x >> y >> z;

	a = (1 + (sqrt(pow(x + y, 2))) / pow(x, 8) - (sqrt(z) / (z + 1))) / (sin(y) + 3, 14 / 2);



	b = (pow(x + y + z, 3)) / atan(pow(z, 2)) - log10(sqrt(pow(1 + x, 2)));





	cout << a << " " << b;

	system("pause");

	return 0;

}

