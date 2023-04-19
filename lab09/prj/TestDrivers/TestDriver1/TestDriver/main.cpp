#include <iostream>
#include "ModulesPaschenko.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");

    int testKeys[10] = {0, 'r', 2, 3, 4, 33, 6, 7, 8, 9 };
    string expectedResult[10] = {"\n������ ����: 0 FT (0 METERS), ���� ����: CALM-GLASSY",
    "\n������ ���� � ���� �� ����",
    "\n������ ����: 1/3 - 1 2/3 FT (0.1-0.5 METERS), ���� ����: SMOOTH-WAVELET",
    "\n������ ����: 1 2/3 - 4 FT (0.5-1.25 METERS), ���� ����: SLIGHT",
    "\n������ ����: 4 - 8 FT (1.25-2.50 METERS), ���� ����: MODERATE",
    "\n������ ���� � ���� �� ����",
    "\n������ ����: 13 - 20 FT (4-6 METERS), ���� ����: VERY ROUGH",
    "\n������ ����: 20 - 30 FT (6-9 METERS), ���� ����: HIGH",
    "\n������ ����: 30 - 45 FT (9-14 METERS), ���� ����: VERY HIGH",
    "\n������ ����: >45 FT (>14 METERS), ���� ����: PHENOMENAL"
    };

    for (int i = 0; i < 10; i++){
        cout << "\n����-���� �" << i + 1 << ":" << endl << "���������� ���������: " << expectedResult[i] << ",\n��������� ���������: "
        << waves(testKeys[i]) << ",\n\n��������� ��������: ";

        if (waves(testKeys[i]) == expectedResult[i]){
            cout << "PASSED" << endl;
        }else{
            cout << "FAILED" << endl;
        }
    }
    return 0;
}
