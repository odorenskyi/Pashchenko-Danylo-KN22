#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

#include "ModulesPaschenko.h"
#include "ModulesBezdolnyi.h"
#include "ModulesShchychenko.h"

int main()
{
    system("chcp 1251");
    system("cls");

    std::vector<BusSchedule> schedule = getDataFromFile();

    while(true)
    {

        cout << "=====================================================================================================" << endl
            << "| ������ ����� � ������� ����� �������� �� �������� ������ ��������� ��� ������ ����������� [1]" << endl
            << "| ������� �� �������� ����� �������� [2]" << endl
            << "| ��������� ������ ����� �� �������� [3]" << endl
            << "| ��������� ����� � �������� �� ���� ������� [4]" << endl
            << "| ���������� �������� ����� �������� � ���� � ���������� ������ �������� [5]" << endl
            << "=====================================================================================================" << endl << endl;

        char userChoice;
        cout << "������ ����� ������� �������: ";
        cin >> userChoice;

        switch(userChoice)
        {
            case '1':
                getRecordUseBusStation(schedule);
                continue;
            case '2':
                getAllInfo(schedule);
                continue;
            case '3':
                addNewBusRoute(schedule);
                continue;
            case '4':
                deleteBusRoute(schedule);
                continue;
            case '5':
                saveDataInFile(schedule);
                system("pause");
                return 0;
            default:
                cout << endl << "--- �������: ������� � ����� ������� �� ���� ---" << endl << endl;
        }
    }
}
