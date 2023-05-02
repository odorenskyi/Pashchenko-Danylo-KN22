#define PI 3.14159265359
#define e 2.71828

#include <cmath>
#include <fstream>
#include <iostream>
#include <ctime>
#include <cstring>
#include <bitset>

using namespace std;

float s_calculation(float x, float y, float z)
{
    float s;
    s = PI * x + pow(e, abs(y)) - sqrt(abs(pow(z, 2) - y));
    return s;
}

void task_10_1(string inputFileName)
{
    ifstream f_read(inputFileName, ios::in);
    if(!f_read)
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    string word;
    getline(f_read, word);

    f_read.close();

    int countVowels = 0;
    for(char symbol : word)
    {
        if(symbol == 'а' || symbol == 'е' || symbol == 'є' || symbol == 'и' || symbol == 'і' || symbol == 'ї' || symbol == 'о' || symbol == 'у' || symbol == 'ю' || symbol == 'я' || symbol == 'А' || symbol == 'Е' || symbol == 'Є' || symbol == 'И' || symbol == 'І' || symbol == 'Ї' || symbol == 'О' || symbol == 'У' || symbol == 'Ю' || symbol == 'Я')
        {
            countVowels++;
        }
    }

    string droplet = "До щастя не пускає лінощів орава. У чім воно - ніхто не знає до пуття. Навчитись радісно робити кожну справу - Найперше правило щасливого життя.";
    string checkWord;

    if(droplet.find(word) != std::string::npos)
    {
        checkWord = "є";
    }
    else
    {
        checkWord = "немає";
    }

    ofstream f_write("ВихФайл.txt", ios::out);
    if(!f_write.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    f_write << "--- Пащенко Данило ---" << endl
    << "Центральноукраїнський Національний Технічний Університет, місто Кропивницький, Україна, 2023" << endl
    << "Кількість голосних літер в слові \"" << word << "\" з файлу \"ВхФайл.txt\": " << countVowels << endl
    << "Слова \"" << word << "\" з файлу \"ВхФайл.txt\" " << checkWord << " в краплинці Віталія Іващенка" << endl;

    f_write.close();
}

void task_10_2(string inputFileName)
{
    srand(time(0));

    ifstream f_read(inputFileName, ios::in);
    if(!f_read)
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    string word;
    getline(f_read, word);

    f_read.close();

    char symbols[31] {'Й', 'Ц', 'У', 'К', 'Е', 'Н', 'Г', 'Ш', 'Щ', 'З', 'Х', 'Ї', 'Ф', 'І', 'В', 'А', 'П', 'Р', 'О', 'Л', 'Д', 'Ж', 'Є', 'Я', 'Ч', 'С', 'М', 'И', 'Т', 'Б', 'Ю'};
    for(int i = 0; i < word.length(); i++)
    {
        for(int j = 0; j < strlen(symbols); j++)
        {
            if(word[i] == symbols[j])
            {
                word[i] = rand() % 10 + '0';
            }
        }
    }

    time_t now = time(nullptr);
    char buffer[80];
    strftime(buffer, 80, "%H:%M:%S", localtime(&now));

    ofstream f_add(inputFileName, ios::app);
    if(!f_add.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    f_add << endl << word << endl << "Дата дозапису в файл: " << buffer;

    f_add.close();
}

void task_10_3(float x, float y, float z, int b)
{
    float s_calc_result = s_calculation(x, y, z);
    auto binNumber = bitset<sizeof(int) * 8>(b);

    ofstream f_add("ВихФайл.txt", ios::app);
    if(!f_add.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    f_add << endl << endl << "Результат роботи функції s_calculation(): " << s_calc_result << endl
    << "Число в двійкову коді: " << binNumber;

    f_add.close();
}
