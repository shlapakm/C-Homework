#include <iostream>
using namespace std;

int main()
{

    cout << "Are your variables real numbers? Write 1 in case of a positive answer, 0 - in case of a negative one" << endl;
    int answer;
    cin >> answer;
    if (answer == 0)
    {
        cout << "Are your variables characters that have a universal code according to the ASCII table? Write 1 in case of a positive answer, 0 - in case of a negative one" << endl;
        cin >> answer;
        if (answer == 0)
        {
            cout << "Please run the program again and make the variables symbols or numbers :(";
        }
        else
        {
            cout << "Enter the value of the first variable" << endl;
            char first_variable;
            cin >> first_variable;
            cout << "Enter the value of the second variable" << endl;
            char second_variable;
            cin >> second_variable;
            first_variable = (char)((int)first_variable + (int)second_variable);
            second_variable = (char)((int)first_variable - (int)second_variable);
            first_variable = (char)((int)first_variable - (int)second_variable);
            cout << "The value of the first variable " << first_variable << endl;
            cout << "The value of the second variable " << second_variable << endl;
        }
    }
    else
    {
        cout << "Enter the value of the first variable" << endl;
        float first_variable;
        cin >> first_variable;
        cout << "Enter the value of the second variable" << endl;
        float second_variable;
        cin >> second_variable;
        first_variable = first_variable + second_variable;
        second_variable = first_variable - second_variable;
        first_variable = first_variable - second_variable;
        cout << "The value of the first variable " << first_variable << endl;
        cout << "The value of the second variable " << second_variable << endl;

    }


    return 0;
}