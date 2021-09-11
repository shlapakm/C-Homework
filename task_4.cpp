#include <iostream>
using namespace std;

int main()
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
return 0;
}
