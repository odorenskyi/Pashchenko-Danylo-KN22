#include <iostream>
#include <ModulesPaschenko.h>
#include <windows.h>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");

    float testKeys[15] = {1, 1, 1, -1, -1, -1, 3, 1, 4, 3, 1, 4.5, 0, 0, 0};
    float expectedResult[5] = {5.85987, -1.83753, 8.27007, 8.27007, 1};

    for (int i = 0, j = 0; i < 15; i+=3, j++){
        cout << "Тест-кейс №" << j + 1 << ":" << endl << "Очікований результат: " << expectedResult[j] << ", отриманий результат: "
        << s_calculation(testKeys[i], testKeys[i+1], testKeys[i+2]) << ", результат перевірки: ";

        if (abs(s_calculation(testKeys[i], testKeys[i+1], testKeys[i+2]) - expectedResult[j]) < 1.0){
            cout << "PASSED" << endl;
        }else{
            cout << "FAILED" << endl;
        }
    }
    return 0;
}
