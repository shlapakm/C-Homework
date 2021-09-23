#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main()
{
    using namespace std;
    vector <double> originalArray;
    cout << "Enter the number of array elements." << endl;
    int n;
    cin >> n;
    cout << "Enter the values of the array elements separated by a space." << endl;
    for (int i = 0; i < n; i++)
    {
        double value;
        cin >> value;
        originalArray.push_back(value);
    }
    sort(originalArray.begin(), originalArray.end(), [](double i, double j) {return (i < j); });
    cout << "Our sorted array in ascending order array: " << " ";
    for (int i = 0; i < n; i++)
        cout << originalArray[i] << " ";
    cout << endl;
    sort(originalArray.begin(), originalArray.end(), [](double i, double j) {return (i > j); });
    cout << "Our sorted array in descending order array: " << " ";
    for (int i = 0; i < n; i++)
        cout << originalArray[i] << " ";
    return 0;
}