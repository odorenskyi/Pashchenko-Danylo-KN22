#include <iostream>
#include <vector>
#include <cctype>

#include <struct_type_project_6.h>

using namespace std;

vector<string> splitRoute(string str)
{
    vector<string> arr;
    string delim("-");
    size_t prev = 0;
    size_t next;
    size_t delta = delim.length();

    while( ( next = str.find( delim, prev ) ) != string::npos ){
        string tmp = str.substr( prev, next-prev );
        arr.push_back( str.substr( prev, next-prev ) );
        prev = next + delta;
    }
    string tmp = str.substr( prev );
    arr.push_back( str.substr( prev ) );

    return arr;
}

void outputRecord(int busRouteNumber, string busRoute, string busPeriodicity, string busDepartureTime, string busArrivalTime, string busDepartureTimeStartingStation, string busArrivalTimeFinalStation)
{
    cout << "| ����� �����: " << busRouteNumber << endl
        << "| �������: " << busRoute << endl
        << "| �����������: " << busPeriodicity << endl
        << "| ��� �����������: " << busDepartureTime << endl
        << "| ��� ��������: " << busArrivalTime << endl
        << "| ��� ����������� � ��������� �������: " << busDepartureTimeStartingStation << endl
        << "| ��� �������� �� ������ �������: " << busArrivalTimeFinalStation << endl << endl;
}

void getRecordUseBusStation(vector<BusSchedule>& schedule)
{
    cout << endl << ">>> ������ ����� ��������� ��� ������ �������: ";

    string sfStation;
    cin >> sfStation;
    string sfStationLower;

    for (char& c : sfStation)
    {
        sfStationLower += tolower(c);
    }

    bool stationFound = false;

    for(const auto& bus : schedule)
    {
        vector<string> splitText = splitRoute(bus.busRoute);

        string splitTextLower0;
        for (char& c : splitText[0])
        {
            splitTextLower0 += tolower(c);
        }
        string splitTextLower1;
        for (char& c : splitText[1])
        {
            splitTextLower1 += tolower(c);
        }

        if(sfStation == splitText[0] || sfStationLower == splitTextLower0 || sfStation == splitText[1] || sfStationLower == splitTextLower1)
        {
            outputRecord(bus.busRouteNumber, bus.busRoute, bus.busPeriodicity, bus.busDepartureTime, bus.busArrivalTime, bus.busDepartureTimeStartingStation, bus.busArrivalTimeFinalStation);
            stationFound = true;
        }
    }

    if(stationFound == false)
    {
        cout << endl << "--- �������: ������ ����� ������� ��� ������ ������� ---" << endl << endl;
        return;
    }
}

void getAllInfo(vector<BusSchedule>& schedule)
{
    for(const auto& bus : schedule)
    {
        cout << "| ����� �����: " << bus.busRouteNumber << endl
        << "| �������: " << bus.busRoute << endl
        << "| �����������: " << bus.busPeriodicity << endl
        << "| ��� �����������: " << bus.busDepartureTime << endl
        << "| ��� ��������: " << bus.busArrivalTime << endl
        << "| ��� ����������� � ��������� �������: " << bus.busDepartureTimeStartingStation << endl
        << "| ��� �������� �� ������ �������: " << bus.busArrivalTimeFinalStation << endl << endl;
    }
}
