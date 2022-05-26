// Laba2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    double x, y;
    while (true) {
        cout << "Введите значения x и y:" << endl;
        cin >> x >> y;
        if ((y >= 0 && y <= 1 && x <= 1 && x >= -1) || (y <= 0 && y >= -1 && x <= 1 && x >= 0)) {
            cout << "Точка (" << x << " ; " << y << ") входит в область" << endl;
            break;
        }
        else
            cout << "Косяк! Точка (" << x << ";" << y << ") не входит в область" << endl;
    }

    return 0;
}
