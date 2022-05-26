#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const char upper[] = "AEIOUY"; // массив с заглаными гласными буквами
    const char lower[] = "aeiouy"; // массив с прописными гласными буквами
    char text[250]; 
    ifstream inp("F:\\C++ project\\Laba8\\Text\\Input.txt");

    // Проверяем на читаемость файла
    if (!inp) {
        cout << "Fail" << endl;
    }
    else {
        cout << "File is open. Process..." << endl;
        ofstream res("F:\\C++ project\\Laba8\\Text\\Output.txt"); // Открываем файл, в который будем записывать

        do {
            inp.getline(text, size(text)); // Заполняем массив текстом из 1 файла
            cout << text << endl;

            // Проверка каждого элемента из text
            for (char* pch = text; *pch; pch++) {
                const char* pup = strchr(upper, *pch); 
                if (pup != nullptr) {
                    *pch = lower[pup - upper];
                }
            }

            res << text; // выводим текст

            if (inp.good()) { // если good, то дошли до '\n'
                res << '\n';
            }
            else if (!inp.eof()) { // если не eof и не good, то буфер закончился раньше файла и нужно сбросить failbit
                inp.clear();
            }
        } while (!inp.eof()); // do выполняется, пока есть элементы в inp

        // Закрываем два файла
        res.close();
        inp.close();
    }
}
