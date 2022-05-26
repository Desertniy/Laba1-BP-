// Laba5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int SizeOf = 0;
    cout << "Введите количество элементов массива:" << endl;
    cin >> SizeOf;

    double* ArMass = new double[SizeOf];
    double* CopyArMass = new double[SizeOf];
    double max_num = 0;
    double sum_num = 0;
    double a, b, coun_num_a = 0;
    cout << "Введите a,b" << endl;
    cin >> a >> b;


    for (int i = 0; i < SizeOf; i++) {
        double num = 0;
        cout << "Введите " << i << " число для заполнения массива:";
        cin >> num;
        ArMass[i] = num;
        if (num >= a && num <= b)
            coun_num_a += 1;
        if (num > max_num){
            max_num = num;
            sum_num = 0;
        }
        else
            sum_num += num;
    }

    for (int i = 0; i < SizeOf; i++) {
        CopyArMass[i] = ArMass[SizeOf - 1 - i];
        cout << i << " - второго массива:" << CopyArMass[i] << endl;
    }

    cout << "Кол-во, лежащее в [a,b]:" << coun_num_a << endl;
    cout << "Сумма элементов массива:" << sum_num << endl;

    delete[] ArMass;
    delete[] CopyArMass;
}

