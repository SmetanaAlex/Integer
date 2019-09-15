// Задание 1.cpp Integer1. Дано расстояние L в сантиметрах. Используя операцию деления наце-
//ло, найти количество полных метров в нем(1 метр = 100 см).


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
     cout << "Введите росстояние L"<<endl;
	 int l = 0;
	 cin >> l;
	 int m = l / 100;
	 cout <<l <<"см=" <<  m<<"м"<<endl;
	 return 0;
}

