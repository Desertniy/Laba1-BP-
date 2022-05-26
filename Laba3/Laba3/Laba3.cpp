// Laba3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int check() {
    int num;
    cout << "Введите число:";
    cin >> num;
    while (cin.fail() || (cin.get() != '\n')){
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
        // Вывод ошибки
        cerr << "Ошибка ввода!!!" << endl;
        // Повторный ввод
        cout << "Введите значение повторно" << endl;
        cin >> num;
    }
    return num;

}

void input_num(int &D, int &M, int &Y) {
    while ((D < 0) || (D > 31)) {
        cout << "Введите D (оно должно быть положительным и занимать 5 бит)" << endl;
        D = check();
    }
    while ((M < 0) || (M > 31)) {
        cout << "Введите M (оно должно быть положительным и занимать 5 бит)" << endl;
        M = check();
    }
    while ((Y < 0) || (Y > 63)) {
        cout << "Введите Y (оно должно быть положительным и занимать 6 бит)" << endl;
        Y = check();
    }

}

int main()
{
    setlocale(LC_ALL, "Rus");
    int D, M, Y, x;
    D = -1;
    M = -1;
    Y = -1;
    input_num(D, M, Y);
    x = Y;
    x = M << 6 | x;
    x = D << 11 | x;
    cout << hex << x;
    return 0;

}

