#include <iostream>
#include "ModulesPaschenko.h"
#include <windows.h>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");

    while(true)
    {
        char userChoice;

        cout << endl << "������ �����-������������� ��� �������:" << endl << "q - s_calculation();" << endl << "e - ������� ������ 9.1;" << endl << "r - ������� ������ 9.2;" << endl << "t - ������� ������ 9.3." << endl;
        cin >> userChoice;

        if(userChoice == 'q')
        {
            int x, y, z;
            cout << "\n������ x: ";
            cin >> x;
            cout << "\n������ y: ";
            cin >> y;
            cout << "\n������ z: ";
            cin >> z;

            cout << endl << "���������: " << s_calculation(x, y, z) << endl;
        }
        else if(userChoice == 'e')
        {
            int userGrade;
            cout << "\n������ ��� ���������� �� ��������� ������: ";
            cin >> userGrade;

            cout << endl << "���������: " << waves(userGrade) << endl;
        }
        else if(userChoice == 'r')
        {
            int loopSize;
            cout << "\n������ �������� ������� �����, �� �� ������ ������, ���� ������ ��� �����: ";
            cin >> loopSize;
            numbers(loopSize);
        }
        else if(userChoice == 't')
        {
            int userNumber;
            cout << "\n������ ����� ��� ��������� �������� ���� ��� �������� �������: ";
            cin >> userNumber;

            if(userNumber < 0 || userNumber > 70700)
            {
                cout << endl << "����� ������� ���� �� ����� 0 �� �� ����� 70700" << endl;
            }
            else
            {
                cout << endl << "���������: " << binary(userNumber) << endl;
            }
        }
        else
        {
            cout << "\a";
        }

        cout << endl << "�������� (������ \'y\' ��� \'Y\' ��� \'�\')?" << "\n" << "���� ������ ���������� ������ ����-��� ���� �����" << "\n";
        cin >> userChoice;

        switch (userChoice)
        {
            case 'y':
                system("pause");
                return 0;
            case 'Y':
                system("pause");
                return 0;
            case '�':
                system("pause");
                return 0;
        }
    }
}
