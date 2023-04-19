#include <iostream>
#include "ModulesPaschenko.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");

    int testKeys[10] = {0, 'r', 2, 3, 4, 33, 6, 7, 8, 9 };
    string expectedResult[10] = {"\nВисота хвилі: 0 FT (0 METERS), опис хвилі: CALM-GLASSY",
    "\nТакого балу в шкалі не існує",
    "\nВисота хвилі: 1/3 - 1 2/3 FT (0.1-0.5 METERS), опис хвилі: SMOOTH-WAVELET",
    "\nВисота хвилі: 1 2/3 - 4 FT (0.5-1.25 METERS), опис хвилі: SLIGHT",
    "\nВисота хвилі: 4 - 8 FT (1.25-2.50 METERS), опис хвилі: MODERATE",
    "\nТакого балу в шкалі не існує",
    "\nВисота хвилі: 13 - 20 FT (4-6 METERS), опис хвилі: VERY ROUGH",
    "\nВисота хвилі: 20 - 30 FT (6-9 METERS), опис хвилі: HIGH",
    "\nВисота хвилі: 30 - 45 FT (9-14 METERS), опис хвилі: VERY HIGH",
    "\nВисота хвилі: >45 FT (>14 METERS), опис хвилі: PHENOMENAL"
    };

    for (int i = 0; i < 10; i++){
        cout << "\nТест-кейс №" << i + 1 << ":" << endl << "Очікований результат: " << expectedResult[i] << ",\nОтриманий результат: "
        << waves(testKeys[i]) << ",\n\nРезультат перевірки: ";

        if (waves(testKeys[i]) == expectedResult[i]){
            cout << "PASSED" << endl;
        }else{
            cout << "FAILED" << endl;
        }
    }
    return 0;
}
