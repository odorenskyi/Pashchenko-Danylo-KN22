#include <iostream>
#include <ModulesPaschenko.h>
#include <windows.h>
#include <fstream>

using namespace std;

void testDriver1()
{
    system("chcp 1251");
    system("cls");

    string filesName[3] = {"������1.txt", "������2.txt", "������3.txt"};

    for(int i = 0; i < 3; i++)
    {
        task_10_1(filesName[i]);

        ifstream f_read("�������.txt", ios::in);
        if(!f_read)
        {
            cout << "������� �������� �����" << endl;
            return;
        }

        string result;
        string line;

        if(i == 2) break;

        while(getline(f_read, line))
        {
            result += line + '\n';
        }

        f_read.close();

        cout << "���������: " << endl << result << endl;
    }
    return;
}

void testDriver2()
{
    string filesName[3] = {"������4.txt", "������5.txt", "������6.txt"};

    for(int i = 0; i < 3; i++)
    {
        task_10_2(filesName[i]);

        if(i == 2) break;

        ifstream f_read(filesName[i], ios::in);
        if(!f_read)
        {
            cout << "������� �������� �����" << endl;
            return;
        }

        string result;
        string line;

        while(getline(f_read, line))
        {
            result += line + '\n';
        }

        f_read.close();
        cout << "���������: " << endl << result << endl;
    }
    return;
}

void testDriver3()
{
    string filesName[3] = {"�������.txt", "�������.txt", "�������1.txt"};
    float numbersForS_calc[6] = {3, 1.5, 3, 3.3, 3, 15.7};
    int numbersForBinary[2] = {33, 123};

    for(int i = 0; i < 3; i++)
    {

        ifstream f_read(filesName[i], ios::in);
        if(!f_read)
        {
            cout << "������� �������� �����" << endl;
            return;
        }

        if(i == 2) break;

        task_10_3(numbersForS_calc[i], numbersForS_calc[i+2], numbersForS_calc[i+4], numbersForBinary[i]);


        string result;
        string line;

        while(getline(f_read, line))
        {
            result += line + '\n';
        }

        f_read.close();

        cout << "���������: " << endl << result << endl;
    }
    return;
}



int main()
{
    testDriver1();
    testDriver2();
    testDriver3();
    system("pause");
}
