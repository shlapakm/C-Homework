#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "���� ���������� �������� ��������������� �������? �������� 1 � ������ �������������� ������, 0 - � ������ ��������������" << endl;
    int answer;
    cin >> answer;
    if (answer == 0)
    {
        cout << "���� ���������� �������� ���������, �������� ������������� ��� �� ������� ASCII? �������� 1 � ������ �������������� ������, 0 - � ������ ��������������" << endl;
        cin >> answer;
        if (answer == 0)
        {
            cout << "����������, ��������� ��������� ��� ��� � �������� ���������� ��������� ��� ������� :(";
        }
        else
        {
            cout << "������� �������� ������ ����������" << endl;
            char first_variable;
            cin >> first_variable;
            cout << "������� �������� ������ ����������" << endl;
            char second_variable;
            cin >> second_variable;
            first_variable = (char)((int)first_variable + (int)second_variable);
            second_variable = (char)((int)first_variable - (int)second_variable);
            first_variable = (char)((int)first_variable - (int)second_variable);
            cout << "�������� ������ ���������� " << first_variable << endl;
            cout << "�������� ������ ���������� " << second_variable << endl;
        }
    }
    else
    {
        cout << "������� �������� ������ ����������" << endl;
        float first_variable;
        cin >> first_variable;
        cout << "������� �������� ������ ����������" << endl;
        float second_variable;
        cin >> second_variable;
        first_variable = first_variable + second_variable;
        second_variable = first_variable - second_variable;
        first_variable = first_variable - second_variable;
        cout << "�������� ������ ���������� " << first_variable << endl;
        cout << "�������� ������ ���������� " << second_variable << endl;

    }
    

    return 0;
}