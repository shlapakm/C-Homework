#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main()
{
    using namespace std;
    cout << "Enter the number of array elements." << endl;
    int n;
    cin >> n;
    vector <double> originalArray(n);
    cout << "Enter the values of the array elements separated by a space." << endl;
    for (auto& i : originalArray) cin >> i;
    sort(originalArray.begin(), originalArray.end(), [](double i, double j) {return (i < j); });
    cout << "Our sorted array in ascending order array: " << " ";
    for (auto i : originalArray)
        cout << i << " ";
    cout << endl;
    sort(originalArray.begin(), originalArray.end(), [](double i, double j) {return (i > j); });
    cout << "Our sorted array in descending order array: " << " ";
    for (auto i : originalArray)
        cout << i << " ";
    return 0;
}

