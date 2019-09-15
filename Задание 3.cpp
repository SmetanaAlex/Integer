// Integer3°. Дан размер файла в байтах. Используя операцию деления нацело,
//найти количество полных килобайтов, которые занимает данный файл
//(1 килобайт = 1024 байта).

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
  cout << "Введите размер файла в байтах "<< endl;
  int b = 0;
	  cin >> b;
	  int k = b / 1024;
		  cout << k<<"  килобайтов"<< endl;
	  return 0;
}

