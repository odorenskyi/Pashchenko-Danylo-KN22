#include <iostream>
#include <fstream>
#include <windows.h>
#include "ModulesPaschenko.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");

    ClassLab12_Paschenko Cube;

    ifstream f_read("..\\TestSuite\\TestCase.txt", ios::in);
    if(!f_read.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
        return 0;
    }

    ofstream f_write("..\\TestSuite\\TestResult.txt", ios::out);
    if(!f_write.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
        return 0;
    }

    string testSuiteLine;
    int number = 1;
    while (getline(f_read, testSuiteLine))
        {
            double volume = Cube.getCubeVolume(stod(testSuiteLine));
            f_write << TestResult(Cube, number, volume);
            number++;
        }

    f_write.close();
    f_read.close();
    system("pause");
    return 0;
}
