#include <iostream>
#include <ModulesPaschenko.h>
#include <windows.h>

using namespace std;

char programInfo()
{
    system("chcp 1251");
    system("cls");
    cout << "--------- © Пащенко Данило Віталійович ---------" << endl << endl;
}

char task_8_2_2(char a, char b)
{
    if (a + 5 >= b){
        cout << "True";
    }else{
        cout << "False";
    }
}

int task_8_2_3(int x, int y, int z)
{
    cout << endl << "В десятичній формі: " << x << " та в шістнадцятковій: " << hex << x;
    cout << endl << dec << "В десятичній формі: " << y << " та в шістнадцятковій: " << hex << y;
    cout << endl << dec << "В десятичній формі: " << z << " та в шістнадцятковій: " << hex << z << dec << '\n';
    cout << endl << "S дорівнює: " << s_calculation(x, y, z) << '\n';
}

int main()
{
    programInfo();

    int x, y, z;
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y;
    cout << "Введіть z: ";
    cin >> z;

    char a, b;
    cout << endl << "Введіть будь-який символ a: ";
    cin >> a;
    cout << "Введіть будь-який символ b: ";
    cin >> b;

    cout << endl << "Результат перевірки: " << task_8_2_2(a, b) << '\n';
    task_8_2_3(x, y, z);

    system("pause");
    return 0;
}
