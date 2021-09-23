#include <iostream>
#include <string>
#include <vector>
int main()
{
    using namespace std;
    vector <double> OriginalArray;
    cout << "Enter the number of array elements." << endl;
    cin >> n;
    cout << "Enter the values of the array elements separated by a space.";
    for (int i = 0; i < n; i++)
    {
        cin << double value;
        OriginalArray.push_back(value)
    }
    for (int i = 1; i < n; i++) //массив из одного элемента отсортирован
        for (int j = i; j > 0 && OriginalArray[j - 1] > OriginalArray[j]; j--) // пока j>0 и элемент j-1 > j
            swap(OriginalArray[j - 1], OriginalArray[j]);
    cout << "Sorted array:"
        for (int i = 0; i < n; i++)
            cout << OriginalArray[i] << " ";
    return 0;
}
    




}