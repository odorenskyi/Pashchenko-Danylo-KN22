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
        cout << "\n����-���� �" << j+1 << ":" << endl << "���������� ���������: " << expectedResult[i] << ", " << expectedResult[i+1] << ", " << expectedResult[i+2] << ",\n��������� ���������: ";
        numbers(10);
        cout << "\n��������� ��������: ";

        if (receivedResult[i] == expectedResult[i] && receivedResult[i+1] == expectedResult[i+1] && receivedResult[i+2] == expectedResult[i+2])
        {
            cout << "PASSED" << endl;
        }else{
            cout << "FAILED" << endl;
        }
    }
    return 0;
}
