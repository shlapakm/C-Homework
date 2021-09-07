#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, world!" << "This program will help you to translate some units of measurement of the amount of information into others." << endl;
    cout << "Select the original unit of measurement. Enter 1, if it is bit, 2 - if it is byte, 3 - if it is kbyte, 4 - if it is mbyte, 5 - if it is gbyte, 6 - if it is tbyte, 7 - if it is pbyte. " << endl;
    int now;
    cin >> now;
    cout << "Select the new unit of measurement. Enter 1, if it is bit, 2 - if it is byte, 3 - if it is kbyte, 4 - if it is mbyte, 5 - if it is gbyte, 6 - if it is tbyte, 7 - if it is pbyte. " << endl;
    int future;
    cin >> future;
    cout << "Enter the original value" << endl;
    float value;
    cin >> value;
    const float mult = 1024.0;
    //translate all of our information to bits
    if (now != 1)
    {
        value = value * 8.0;
        while (now > 2)
        {
            value *= mult;
            now -= 1;
        }
    }
    //translate our information to future value
    if (future != 1)
    {
        value /= 8.0;
        while (future > 2)
        {
            value /= mult;
            future -= 1;
        }
    }
    cout << "Our new value is " << value << endl;
    return 0;
}