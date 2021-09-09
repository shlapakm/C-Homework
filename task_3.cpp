#include <iostream>
using namespace std;

int main()
{

    cout << "Hello! This program will help you solve quadratic equation! " << endl;
    cout << "Please enter the coefficients a, b, c of your equation (ax^2 + bx + c = 0 ) separated by a space" << endl;
    float a;
    float b;
    float c;
    cin >> a >> b >> c;
    if (a == 0 && b != 0) cout << -c / b << endl;
    else
    {
        if (a == 0 and b == 0) cout << "No solution" << endl;
        else
        {
            float discriminant = b * b - 4 * a * c;
            if (discriminant < 0) cout << "No solution" << endl;
            else
            {
                if (discriminant == 0) cout << "Solution is " << (-b) / (2 * a) << endl;
                else
                {
                    discriminant = sqrt(discriminant);
                    cout << "First solution is " << (-b + discriminant) / (2.0 * a) << endl;
                    cout << "Second solution is " << (-b - discriminant) / (2.0 * a) << endl;
                }
            }
        }
    }




 return 0;
}