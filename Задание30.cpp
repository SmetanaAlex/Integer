// Задание30.cpp : Integer30. Дан номер некоторого года (целое положительное число). Опреде-
//лить соответствующий ему номер столетия, учитывая, что, к примеру, на -
//чалом 20 столетия был 1901 год.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите год" << endl;
	int x = 0;
	cin >> x;
	int a = x / 100;
	int b = x % 10;
	if (b>=1) {
		a = a + 1 ;
		cout << "номер столетия - " << a << endl;
	}
	else {
		cout << "номер столетия -  " << a << endl;

	}
	return 0;




}