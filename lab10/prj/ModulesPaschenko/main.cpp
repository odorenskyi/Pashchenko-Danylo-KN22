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
    ifstream f_read(inputFileName, ios::in);          //�������� ���� "������.txt" �� �������� �� �������� ��
    if(!f_read)
    {
        cout << "������� �������� �����" << endl;
        return;
    }

    string word;               //������� ����� � ����� �����
    getline(f_read, word);

    f_read.close();

    int countVowels = 0;
    for(char symbol : word)   //��������� ������ ������ � ���� � �������� ������ �����, � ����� ��
    {
        if(symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�' || symbol == '�')
        {
            countVowels++;
        }
    }

    string droplet = "�� ����� �� ����� ������ �����. � ��� ���� - ���� �� ��� �� �����. ��������� ������ ������ ����� ������ - �������� ������� ��������� �����.";
    string checkWord;

    if(droplet.find(word) != std::string::npos)   //����� ����� � �������� ����� � ��������� ³���� ��������, ���� ���������� � ����� droplet
    {
        checkWord = "�";
    }
    else
    {
        checkWord = "����";
    }

    ofstream f_write("�������.txt", ios::out);         //�������� ���� "�������.txt" �� �������� �� �������� ��
    if(!f_write.is_open())
    {
        cout << "������� �������� �����" << endl;
        return;
    }

    f_write << "--- ������� ������ ---" << endl         //������� ��� � �������� ����
    << "�������������������� ������������ �������� ����������, ���� �������������, ������, 2023" << endl
    << "ʳ������ �������� ���� � ���� \"" << word << "\" � ����� \"������.txt\": " << countVowels << endl
    << "����� \"" << word << "\" � ����� \"������.txt\" " << checkWord << " � ��������� ³���� ��������" << endl;

    f_write.close();
}

void task_10_2(string inputFileName)
{
    srand(time(0));   //������� srand, �������� ��� ��������� ���� �������� � �����

    ifstream f_read(inputFileName, ios::in);   //�������� ���� �� �������� �� �������� ��
    if(!f_read)
    {
        cout << "������� �������� �����" << endl;
        return;
    }

    string word;         //������� ����� � �����
    getline(f_read, word);

    f_read.close();
                                        //����� ���� ���� ������� �� ����� ��������� ������� ��������� �������
    char symbols[31] {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};
    for(int i = 0; i < word.length(); i++)         //��� �����: ������ �������� ������ ������ � ��������� ����, ������ �������� ������ ������ � ����� ���� symbols ��� ����� ����� � ���� word
    {
        for(int j = 0; j < 31; j++)
        {
            if(word[i] == symbols[j])         //����������� ����� � ������ �������� � ������ � ���� ��������� ��������, ����� ����� ��������� �������, ���������� �� ��������� �����, �� ��������� ������� rand
            {
                word[i] = rand() % 10 + '0';
            }
        }
    }
                                    //������� �������� ���, ����� ��� �������� � ����
    time_t now = time(nullptr);
    char buffer[80];
    strftime(buffer, 80, "%H:%M:%S", localtime(&now));

    ofstream f_add(inputFileName, ios::app);         //�������� ��� �� ���� �� �������, �������� �� �������� ��, � ������� ��������� ����� ����� ��������� ������� �� ����� �� ��� �������� � ����
    if(!f_add.is_open())
    {
        cout << "������� �������� �����" << endl;
        return;
    }

    f_add << endl << word << endl << "���� �������� � ����: " << buffer;

    f_add.close();
}

void task_10_3(float x, float y, float z, int b)
{
    float s_calc_result = s_calculation(x, y, z);   //������� ��������� ������ ������� s_calculation()
    auto binNumber = bitset<sizeof(int) * 8>(b);   //���������� ���� ����� b � ��������� ������� �������� � ������� ������� ��������

    ofstream f_add("�������.txt", ios::app);      //�������� ���� �� ������� �� �������� �� �������� ��
    if(!f_add.is_open())
    {
        cout << "������� �������� �����" << endl;
        return;
    }
                                            //������� ��������� ������� s_calculation() ��, ������������ � ������� ������� ��������, ����� b
    f_add << endl << endl << "��������� ������ ������� s_calculation(): " << s_calc_result << endl
    << "����� � ������� ���: " << binNumber;

    f_add.close();
}
