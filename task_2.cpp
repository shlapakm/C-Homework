#include <iostream>
#include <string>
#include <vector>
int main()
{
    using namespace std;
    vector <double> OriginalArray;
    cout << "Enter the number of array elements." << endl;
    int n;
    cin >> n;
    cout << "Enter the values of the array elements separated by a space." << endl;
    for (int i = 0; i < n; i++)
    {
        double value;
        cin >>  value;
        OriginalArray.push_back(value);
    }
    for (int i = 1; i < n; i++) 
        for (int j = i; j > 0 && OriginalArray[j - 1] > OriginalArray[j]; j--) 
            swap(OriginalArray[j - 1], OriginalArray[j]);
    cout << "Sorted array:" << endl;
        for (int i = 0; i < n; i++)
            cout << OriginalArray[i] << " ";
    return 0;
}
