//С начала суток прошло N секунд (N — целое). Найти количество
//полных часов, прошедших с начала суток.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");   
	cout << "Введите N"<<endl;
	int x = 0;
	cin >> x;
	int t = x / 3600;
	cout << "количество полных часов, прошедших с начала суток =" << t << endl;
	return 0;


}

