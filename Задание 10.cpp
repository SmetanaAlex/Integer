// Задание 10.cpp : Integer10. Дано трехзначное число. Вывести вначале его последнюю цифру
//(единицы), а затем — его среднюю цифру(десятки).

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите трехзначное число" << endl;
	int m = 0;
		cin >> m;
		int	o = m % 10;
		int d = m / 10;
		d = d % 10;
		cout << o << "-единицы " << endl;
				 cout<<d<<"-десятки";
			return 0;

}

