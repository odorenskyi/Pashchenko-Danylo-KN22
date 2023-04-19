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

        cout << endl << "¬вед≥ть букву-≥дентиф≥катор дл€ функц≥њ:" << endl << "q - s_calculation();" << endl << "e - функц≥€ задач≥ 9.1;" << endl << "r - функц≥€ задач≥ 9.2;" << endl << "t - функц≥€ задач≥ 9.3." << endl;
        cin >> userChoice;

        if(userChoice == 'q')
        {
            int x, y, z;
            cout << "\n¬вед≥ть x: ";
            cin >> x;
            cout << "\n¬вед≥ть y: ";
            cin >> y;
            cout << "\n¬вед≥ть z: ";
            cin >> z;

            cout << endl << "–езультат: " << s_calculation(x, y, z) << endl;
        }
        else if(userChoice == 'e')
        {
            int userGrade;
            cout << "\n¬вед≥ть бал хвилюванн€ за оф≥ц≥йною шкалою: ";
            cin >> userGrade;

            cout << endl << "–езультат: " << waves(userGrade) << endl;
        }
        else if(userChoice == 'r')
        {
            int loopSize;
            cout << "\n¬вед≥ть загальну к≥льк≥сть чисел, €к≥ ви хочете ввести, пот≥м введ≥ть сам≥ числа: ";
            cin >> loopSize;
            numbers(loopSize);
        }
        else if(userChoice == 't')
        {
            int userNumber;
            cout << "\n¬вед≥ть число дл€ п≥драхунку дв≥йкових нул≥в або дв≥йкових одиниць: ";
            cin >> userNumber;

            if(userNumber < 0 || userNumber > 70700)
            {
                cout << endl << "„исло повинно бути не менше 0 та не б≥льше 70700" << endl;
            }
            else
            {
                cout << endl << "–езультат: " << binary(userNumber) << endl;
            }
        }
        else
        {
            cout << "\a";
        }

        cout << endl << "«ак≥нчити (введ≥ть \'y\' або \'Y\' або \'н\')?" << "\n" << "якщо хочете продовжити введ≥ть будь-€ку ≥ншу букву" << "\n";
        cin >> userChoice;

        switch (userChoice)
        {
            case 'y':
                system("pause");
                return 0;
            case 'Y':
                system("pause");
                return 0;
            case 'н':
                system("pause");
                return 0;
        }
    }
}
