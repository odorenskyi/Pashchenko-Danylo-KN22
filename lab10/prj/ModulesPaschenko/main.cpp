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
    ifstream f_read(inputFileName, ios::in);          //відкриваю файл "ВхФайл.txt" та перевіряю чи відкрився він
    if(!f_read)
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    string word;               //отримую слово з цього файлу
    getline(f_read, word);

    f_read.close();

    int countVowels = 0;
    for(char symbol : word)   //перебираю кожний символ в слові і перевіряю голосні літери, і рахую їх
    {
        if(symbol == 'а' || symbol == 'е' || symbol == 'є' || symbol == 'и' || symbol == 'і' || symbol == 'ї' || symbol == 'о' || symbol == 'у' || symbol == 'ю' || symbol == 'я' || symbol == 'А' || symbol == 'Е' || symbol == 'Є' || symbol == 'И' || symbol == 'І' || symbol == 'Ї' || symbol == 'О' || symbol == 'У' || symbol == 'Ю' || symbol == 'Я')
        {
            countVowels++;
        }
    }

    string droplet = "До щастя не пускає лінощів орава. У чім воно - ніхто не знає до пуття. Навчитись радісно робити кожну справу - Найперше правило щасливого життя.";
    string checkWord;

    if(droplet.find(word) != std::string::npos)   //шукаю слово з вхідного файлу в краплинці Віталія Іващенка, який зберігається в змінній droplet
    {
        checkWord = "є";
    }
    else
    {
        checkWord = "немає";
    }

    ofstream f_write("ВихФайл.txt", ios::out);         //відкриваю файл "ВихФайл.txt" та перевіряю чи відкрився він
    if(!f_write.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    f_write << "--- Пащенко Данило ---" << endl         //записую дані в вихідний файл
    << "Центральноукраїнський Національний Технічний Університет, місто Кропивницький, Україна, 2023" << endl
    << "Кількість голосних літер в слові \"" << word << "\" з файлу \"ВхФайл.txt\": " << countVowels << endl
    << "Слова \"" << word << "\" з файлу \"ВхФайл.txt\" " << checkWord << " в краплинці Віталія Іващенка" << endl;

    f_write.close();
}

void task_10_2(string inputFileName)
{
    srand(time(0));   //функції srand, допоміжна для отримання дати дозапису в файлу

    ifstream f_read(inputFileName, ios::in);   //відкриваю файл та перевіряю чи відкрився він
    if(!f_read)
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

    string word;         //отримую слово з файлу
    getline(f_read, word);

    f_read.close();
                                        //масив чарів який зберігае усі літери українсько алфавіту верхнього регістру
    char symbols[31] {'Й', 'Ц', 'У', 'К', 'Е', 'Н', 'Г', 'Ш', 'Щ', 'З', 'Х', 'Ї', 'Ф', 'І', 'В', 'А', 'П', 'Р', 'О', 'Л', 'Д', 'Ж', 'Є', 'Я', 'Ч', 'С', 'М', 'И', 'Т', 'Б', 'Ю'};
    for(int i = 0; i < word.length(); i++)         //двоє циклів: перший перебирає кожний символ в отриманну слові, другий перебирає кожний символ в масиві чарів symbols для кожної літери в слові word
    {
        for(int j = 0; j < 31; j++)
        {
            if(word[i] == symbols[j])         //порівнюється літера з кожним символом з масиву і якщо проходить перевірку, тобто літера верхнього регістру, заміняється на випадкову цифру, за допомогою функції rand
            {
                word[i] = rand() % 10 + '0';
            }
        }
    }
                                    //отримую поточний час, тобто час дозапису в файл
    time_t now = time(nullptr);
    char buffer[80];
    strftime(buffer, 80, "%H:%M:%S", localtime(&now));

    ofstream f_add(inputFileName, ios::app);         //відкриваю цей же файл на дозапис, перевіряю чи відкрився він, і дописую результат заміни літери верхнього регістру на цифру та час дозапису в файл
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
    float s_calc_result = s_calculation(x, y, z);   //отримую результат роботи функції s_calculation()
    auto binNumber = bitset<sizeof(int) * 8>(b);   //перетворюю ціле число b з десятичної системи числення в двійкову систему числення

    ofstream f_add("ВихФайл.txt", ios::app);      //відкриваю файл на дозапис та перевіряю чи відкрився він
    if(!f_add.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }
                                            //записую результат функції s_calculation() та, перетворенне в двійкову систему числення, число b
    f_add << endl << endl << "Результат роботи функції s_calculation(): " << s_calc_result << endl
    << "Число в двійкову коді: " << binNumber;

    f_add.close();
}
