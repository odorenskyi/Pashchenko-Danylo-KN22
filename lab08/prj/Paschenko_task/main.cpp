#include <iostream>
#include <ModulesPaschenko.h>
#include <windows.h>

using namespace std;

char programInfo()
{
    system("chcp 1251");
    system("cls");
    cout << "--------- � ������� ������ ³�������� ---------" << endl << endl;
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
    cout << endl << "� ��������� ����: " << x << " �� � ��������������: " << hex << x;
    cout << endl << dec << "� ��������� ����: " << y << " �� � ��������������: " << hex << y;
    cout << endl << dec << "� ��������� ����: " << z << " �� � ��������������: " << hex << z << dec << '\n';
    cout << endl << "S �������: " << s_calculation(x, y, z) << '\n';
}

int main()
{
    programInfo();

    int x, y, z;
    cout << "������ x: ";
    cin >> x;
    cout << "������ y: ";
    cin >> y;
    cout << "������ z: ";
    cin >> z;

    char a, b;
    cout << endl << "������ ����-���� ������ a: ";
    cin >> a;
    cout << "������ ����-���� ������ b: ";
    cin >> b;

    cout << endl << "��������� ��������: " << task_8_2_2(a, b) << '\n';
    task_8_2_3(x, y, z);

    system("pause");
    return 0;
}
