#include <iostream>
#include <string>
#include <vector>
int main()
{
    using namespace std;
    vector <double> SortedArray;
    //We have a sorted array from task_2
    cout << "Enter the number of array elements." << endl;
    int n;
    cin >> n;
    cout << "Enter the values of the array elements separated by a space." << endl;
    for (int i = 0; i < n; i++)
    {
        double value;
        cin >> value;
        SortedArray.push_back(value);
    }
    cout << endl << "Enter the desired value" << endl;
    double DesiredValue;
    cin >> DesiredValue;
    bool flag = false;
    int l = 0; // left border
    int r = n - 1; // right border
    int mid; // middle element

    while ((l <= r) && (flag != true)) {
        mid = (l + r) / 2;
        if (SortedArray[mid] == DesiredValue) flag = true; //check the middle element
        if (SortedArray[mid] > DesiredValue) r = mid - 1;
        else l = mid + 1;
    }

    if (flag) cout << "Yes";
    else cout << "No";
    return 0;
}