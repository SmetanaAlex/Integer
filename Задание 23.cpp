// Задание 23.cpp : Integer23. С начала суток прошло N секунд (N — целое). Найти количество
//полных минут, прошедших с начала последнего часа.
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
 cout << "Введите N"<<endl;
 int n = 0;
 cin >> n;
 n = n / 60;
 int x = n % 60;
 cout << "количество полных минут, прошедших с начала последнего часа. -  " << x<< endl;
 return 0;

}

