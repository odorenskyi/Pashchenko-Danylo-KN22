#define PI 3.14159265359
#define e 2.71828

#include <cmath>
#include <iostream>
#include <windows.h>

using namespace std;

float s_calculation(int x, int y, int z)
{
    float s;
    s = PI * x + pow(e, abs(y)) - sqrt(abs(pow(z, 2) - y));
    return s;
}

string waves(int userChoice)
{
    int grade;
    try
    {
        grade = userChoice;
    }
    catch(...)
    {
        return "Введений бал не є числом";
    }

    struct WAVES{
        string description;
        string waveHeight;

        string infoOutput()
        {
            string info = "\nВисота хвилі: " + waveHeight + ", опис хвилі: " + description;
            return info;
        }
    };

    WAVES Grade0 = {"CALM-GLASSY", "0 FT (0 METERS)"};
    WAVES Grade1 = {"CALM-RIPPLED", "0 - 1/3 FT (0-0.1 METERS)"};
    WAVES Grade2 = {"SMOOTH-WAVELET", "1/3 - 1 2/3 FT (0.1-0.5 METERS)"};
    WAVES Grade3 = {"SLIGHT", "1 2/3 - 4 FT (0.5-1.25 METERS)"};
    WAVES Grade4 = {"MODERATE", "4 - 8 FT (1.25-2.50 METERS)"};
    WAVES Grade5 = {"ROUGH", "8 - 13 FT (2.50-4.0 METERS)"};
    WAVES Grade6 = {"VERY ROUGH", "13 - 20 FT (4-6 METERS)"};
    WAVES Grade7 = {"HIGH", "20 - 30 FT (6-9 METERS)"};
    WAVES Grade8 = {"VERY HIGH", "30 - 45 FT (9-14 METERS)"};
    WAVES Grade9 = {"PHENOMENAL", ">45 FT (>14 METERS)"};

    if (grade >= 0 && grade <= 9)
    {
        switch (grade)
        {
            case 0:
                return Grade0.infoOutput();
            case 1:
                return Grade1.infoOutput();
            case 2:
                return Grade2.infoOutput();
            case 3:
                return Grade3.infoOutput();
            case 4:
                return Grade4.infoOutput();
            case 5:
                return Grade5.infoOutput();
            case 6:
                return Grade6.infoOutput();
            case 7:
                return Grade7.infoOutput();
            case 8:
                return Grade8.infoOutput();
            case 9:
                return Grade9.infoOutput();
        }
    }
    else
    {
        return "\nТакого балу в шкалі не існує";
    }
}

int numbers(int loopSize)
{

    int _size = loopSize;
    int countNegativeNum = 0;
    int countNumEqualsZero = 0;
    int countNumInRange5_1024 = 0;

    for(int i = 0; i < _size; i++)
    {
        int number;
        cin >> number;

        if(number < 0)
        {
            countNegativeNum++;
        }
        else if(number == 0)
        {
            countNumEqualsZero++;
        }
        else if(number >= 5 && number <= 1024)
        {
            countNumInRange5_1024++;
        }
    }

    cout << endl << "Результат: " << "кількість від'ємних чисел: " << countNegativeNum << ", кількість чисел, які рівні нулю: " << countNumEqualsZero << ", кількість чисел, що лежить у діапазон від 5 до 1024: " << countNumInRange5_1024 << endl;
}

int binary(int userNumber)
{
    if(userNumber < 0 || userNumber > 70700)
    {
        return NULL;
    }

    int number = userNumber;

    int count1 = 0;
    int count0 = 0;

    while(number != 0)
            {
               (number & 1) == 1 ? count1++ : count0++;
                number >>= 1;
            }

    number = userNumber;
    if((number & 1) == 1)
    {
        return count1;
    }
    else if ((number & 1) == 0)
    {
        return count0;
    }
}
