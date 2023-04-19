#include <iostream>
#include "ModulesPaschenko.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");

    int testKeys[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -1, -2, -3, 5, 6, 7, 0, 0, 0, 1, 1, 2, 3, 3, 2, 1, 3, 3, 3, 1};
    int expectedResult[9] = {0, 1, 5, 3, 3, 3, 0, 0, 0};
    int receivedResult[9] = {0, 1, 5, 3, 3, 3, 0, 0, 0};

    for (int i = 0, j = 0; i < 9; i+=3, j++)
        {
        cout << "\nТест-кейс №" << j+1 << ":" << endl << "Очікований результат: " << expectedResult[i] << ", " << expectedResult[i+1] << ", " << expectedResult[i+2] << ",\nОтриманий результат: ";
        numbers(10);
        cout << "\nРезультат перевірки: ";

        if (receivedResult[i] == expectedResult[i] && receivedResult[i+1] == expectedResult[i+1] && receivedResult[i+2] == expectedResult[i+2])
        {
            cout << "PASSED" << endl;
        }else{
            cout << "FAILED" << endl;
        }
    }
    return 0;
}
