// Lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void test(char* s1, char* s2) {
    const int N = 1000;
    int k = -1;
    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            if (s2[j] == s1[i]) {
                k = i;
                cout << "The first letter is \t"<< s1[i] << endl;
                break;
            }


        }
        if (k != -1)
            break;
    }
    if (k == -1)
        cout << "Symbol not found" << endl;
}

int main()
{
    const int N = 1000;
    char s1[N], s2[N];
    cin.getline(s1, N, '\n');
    cin.getline(s2, N, '\n');

    test(s1, s2);
    
}
