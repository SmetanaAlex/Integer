// Задание13.cpp :Integer13. Дано трехзначное число. В нем зачеркнули первую слева цифру и
//приписали ее справа.Вывести полученное число.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
   cout << "Введите трехзначное число"<<endl;
   int s;
   cin >> s;
   int a = s / 100;
   int b = s / 10 % 10 * 100;
   int c = s % 10 * 10;
   int d = a + b + c;
   cout <<"Полученное число -  " << d << endl;
   return 0;

}

