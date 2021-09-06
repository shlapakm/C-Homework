#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Ваши переменные являются действительными числами? Напишите 1 в случае положительного ответа, 0 - в случае отрицательного" << endl;
    int answer;
    cin >> answer;
    if (answer == 0)
    {
        cout << "Ваши переменные являются символами, имеющими универсальный код по таблице ASCII? Напишите 1 в случае положительного ответа, 0 - в случае отрицательного" << endl;
        cin >> answer;
        if (answer == 0)
        {
            cout << "Пожалуйста, запустите программу ещё раз и сделайте переменные символами или числами :(";
        }
        else
        {
            cout << "Введите значение первой переменной" << endl;
            char first_variable;
            cin >> first_variable;
            cout << "Введите значение второй переменной" << endl;
            char second_variable;
            cin >> second_variable;
            first_variable = (char)((int)first_variable + (int)second_variable);
            second_variable = (char)((int)first_variable - (int)second_variable);
            first_variable = (char)((int)first_variable - (int)second_variable);
            cout << "Значение первой переменной " << first_variable << endl;
            cout << "Значение второй переменной " << second_variable << endl;
        }
    }
    else
    {
        cout << "Введите значение первой переменной" << endl;
        float first_variable;
        cin >> first_variable;
        cout << "Введите значение второй переменной" << endl;
        float second_variable;
        cin >> second_variable;
        first_variable = first_variable + second_variable;
        second_variable = first_variable - second_variable;
        first_variable = first_variable - second_variable;
        cout << "Значение первой переменной " << first_variable << endl;
        cout << "Значение второй переменной " << second_variable << endl;

    }
    

    return 0;
}