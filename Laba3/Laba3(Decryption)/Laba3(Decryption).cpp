// Laba3(Decryption).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int x = 0;
	cout << "Введите упакованную структуру:";
	cin >> hex >> x;
	int D = 0;
	int M = 0;
	int Y = 0;
	D = (x >> 11) & 0x1F;
	cout << dec << "D =" << D << endl;
	M = (x >> 6) & 0x1F;
	cout << dec << "M =" << M << endl;
	Y = x & 0x3F;
	cout << dec << "Y =" << Y << endl;
	return 0;
}

