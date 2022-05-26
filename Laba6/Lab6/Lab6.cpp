// Lab6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <ctime>



int main()
{
    setlocale(LC_ALL, "Rus");

    int matr[15][15]; // создаем матрицу 
    int M, N;
    cout << "Введите кол-во столбцов и строк" << endl;
    cin >> M >> N;

    // Заполняем матрицу
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matr[i][j] = rand() % 13;
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
   

    int shift; // Служит для выбора функции
    int sdvig; // Определяет сдвиг

    
    cout << "Какой сдвиг выgолнить?" << endl;
    cout << "1 - вправо / 2 - вниз" << endl;
    cin >> shift;

    
    cout << "Введите кол-во сдвигов:" << endl;
    cin >> sdvig;
   
    // В зависимости от выбора совершается сдвиг
    switch (shift) {
    case 1:
        // Case 1 (При выборе "1" будет совершено смещение вправо)
        cout << "Провожу сдвиг на" << "" << sdvig << endl;
        for (int k = 0; k < sdvig; k++) {
            for (int i = 0; i < N; i++) {
                for (int j = M-1; j >= 0; j--) {
                    matr[i][j+1] = matr[i][j];
                    if (j == 0)
                        matr[i][j] = 0;
                }

            }
        }
        break;
    case 2:
        // Case 2 (При выборе "2" будет совершено смещение вниз)
        cout << "Провожу сдвиг вниз на" << "" << sdvig << endl;
        if (N > M) {
            for (int k = 0; k < sdvig; k++) {
                for (int i = M - 1; i >= 0; i--) {
                    for (int j = 0; j < N; j++) {
                        matr[i + 1][j] = matr[i][j];
                        if (i == 0)
                            matr[i][j] = 0;
                    }

                }
            }
        }
        else {
            for (int k = 0; k < sdvig; k++) {
                for (int i = N - 1; i >= 0; i--) {
                    for (int j = 0; j < M; j++) {
                        matr[i + 1][j] = matr[i][j];
                        if (i == 0)
                            matr[i][j] = 0;
                    }

                }
            }
        }
        break;
    default:
        break;
    }

    // Выводим готовую матрицу
    cout << "matrix matr \n";
    for (int i = 0; i < N; i++)
    {
        //цикл по переменной i, в котором перебираем строки матрицы
        for (int j = 0; j < M; j++)
            cout << matr[i][j] << "\t"; //вывод очередного элемента матрицы
        cout << endl; //переход на новую строку после вывода всех элементов строки
    }

    return 0;
}
