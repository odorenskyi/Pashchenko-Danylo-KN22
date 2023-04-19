#include <iostream>
#include "ModulesPaschenko.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");

    int testKeys[4] = {33, 53332, -5, 70733};
    int expectedResult[4] = {2, 10, 0, 0};

    for (int i = 0; i < 4; i++)
        {
        cout << "\nТест-кейс №" << i+1 << ":" << endl << "Очікований результат: " << expectedResult[i] << ",\nОтриманий результат: "
        << binary(testKeys[i]) << "\nРезультат перевірки: ";

        if (binary(testKeys[i]) == expectedResult[i])
        {
            cout << "PASSED" << endl;
        }else{
            cout << "FAILED" << endl;
        }
    }
    return 0;
}
