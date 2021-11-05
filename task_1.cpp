#include <iostream>
template < typename T, std::size_t N, typename order>
void quickSortHoar(T(&array)[N], int first, int last, order ascending)
{
    int i = first, j = last;
    double tmp, middle = array[(first + last) / 2];

    do {
        if (ascending == true)
        {
            while (array[i] < middle)
                i++;
            while (array[j] > middle)
                j--;
        }
        else
        {
            while (array[i] > middle)
                i++;
            while (array[j] < middle)
                j--;
        }
        if (i <= j)
        {
            if (i < j)
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
            i++;
            j--;
        }
    } while (i <= j);

    if (i < last)
        quickSortHoar(array, i, last, ascending);
    if (first < j)
        quickSortHoar(array, first, j, ascending);
}
template < typename T, std::size_t N, typename order>
void print(T(&array)[N], order ascending)
{
    for (auto i = 0; i < N; i++)
        std::cout << array[i] << " ";
}
template < typename T, std::size_t N, typename order>
size_t dim(T(&array)[N], order ascending)
{
    return N;
}

int main()
{
    std::cout << "Hello! This is an array with length 10" << std::endl;
    double myArray[10];
    std::cout << "Enter the value of your array's members separated by a space:" << std::endl;
    for (auto i = 0; i < 10; i++)
    {
        std::cin >> myArray[i];
    }
    bool ascending;
    std::cout << "Do you want to sort the array in ascending order? If yes, then write true, if you want to sort in descending order, write false." << std::endl;
    std::cin >> ascending;
    quickSortHoar(myArray, 0, dim(myArray, ascending)-1, ascending);
    print(myArray, ascending);
    //std::cout << "Ok! Now we are ready to make a dynamic array!" << std::endl;
    //std::cout << "Enter a size of your new array" << std::endl;
    //size_t size;
    //std::cin >> size;
    //double* secondArray = new double[size];
    //std::cout << "Enter the value of your second array separated by a space" << std::endl;
    //for (auto i = 0; i < size; i++)
    //{
        //std::cin >> secondArray[i];
    //}
    return 0;
}