#include <iostream>
#include <string>
void MergeSort(double* originalArr, int firstElem, int lastElem, int n);
void Merge(double* originalArr, int firstElem, int lastElem, int n);
int main()
{
    using namespace std;
    cout << "Enter the number of array elements." << endl;
    int n;
    cin >> n;
    double* originalArray = new double[n];
    cout << "Enter the values of the array elements separated by a space." << endl;
    for (int i = 0; i < n; i++)
    {
        double value;
        cin >> value;
        originalArray[i] = value;
    }
    MergeSort(originalArray, 0, n - 1, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) cout << originalArray[i] << " ";
    return 0;
}
void MergeSort(double* originalArr, int firstElem, int lastElem, int n)
{
    if (firstElem < lastElem)
    {
        MergeSort(originalArr, firstElem, (firstElem + lastElem) / 2, n);
        MergeSort(originalArr, (firstElem + lastElem) / 2 + 1, lastElem, n);
        Merge(originalArr, firstElem, lastElem, n);
    }
}
void Merge(double* originalArr, int firstElem, int lastElem, int n)
{
    using namespace std;
    double* sortedArray = new double[n];
    int middle = (firstElem + lastElem) / 2;
    int start = firstElem;
    int final = middle + 1;
    for (int i = firstElem; i <= lastElem; i++)
    {
        if ((start <= middle) && ((final > lastElem) || (originalArr[start] < originalArr[final])))
        {
            sortedArray[i] = originalArr[start];
            start++;
        }
        else
        {
            sortedArray[i] = originalArr[final];
            final++;
        }
    }
    for (int i = firstElem; i <= lastElem; i++) originalArr[i] = sortedArray[i];
    delete[] sortedArray;
}