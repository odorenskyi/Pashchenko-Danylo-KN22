#include <iostream>
#include <vector>
#include <string>
#include "struct_type_project_6.h"

using namespace std;

void addNewBusRoute(vector<BusSchedule>& schedule)
{
    cout << endl << ">>> �����: ������ ��� ������ (����� ���� �����������)" << endl;
    cout << ">>> ������ ����� �����: ";
    string busRouteNumber;
    cin >> busRouteNumber;
    cout << ">>> ������ �������: ";
    string busRoute;
    cin >> busRoute;
    cout << ">>> ������ ����������� (���������: �������, ���� ��� ������� ���): ";
    string busPeriodicity;
    cin >> busPeriodicity;
    cout << ">>> ������ ��� ����������� (������ 0, ���� �� ������): ";
    string busDepartureTime;
    cin >> busDepartureTime;
    cout << ">>> ������ ��� �������� (������ 0, ���� �� ������): ";
    string busArrivalTime;
    cin >> busArrivalTime;
    cout << ">>> ������ ��� ����������� � ��������� ������� (������ 0, ���� �� ������): ";
    string busDepartureTimeStartingStation;
    cin >> busDepartureTimeStartingStation;
    cout << ">>> ������ ��� �������� �� ������ ������� (������ 0, ���� �� ������): ";
    string busArrivalTimeFinalStation;
    cin >> busArrivalTimeFinalStation;
    cout << endl;

    BusSchedule bus;

    bus.busRouteNumber = stoi(busRouteNumber);
    bus.busRoute = busRoute;
    bus.busPeriodicity = busPeriodicity;
    bus.busDepartureTime = busDepartureTime;
    bus.busArrivalTime = busArrivalTime;
    bus.busDepartureTimeStartingStation = busDepartureTimeStartingStation;
    bus.busArrivalTimeFinalStation = busArrivalTimeFinalStation;

    schedule.push_back(bus);
}

void deleteBusRoute(vector<BusSchedule>& schedule)
{
    cout << endl << ">>> ������ ����� �����: ";

    short int routeNumber;

    cin >> routeNumber;
    if(!routeNumber)
    {
        cout << endl << "--- �������: ������� ����� ����� ---" << endl;
        return;
    }

    for(int i = 0; i < schedule.size(); i++)
    {
        if(routeNumber == schedule[i].busRouteNumber)
        {
            schedule.erase(schedule.begin() + i);
            cout << endl << "--- ������ ---" << endl << endl;
            return;
        }
    }

    cout << endl << "--- �������: ����� � ����� ������� �� ���� ---" << endl << endl;
}
