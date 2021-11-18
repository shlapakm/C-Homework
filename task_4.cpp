#include <iostream>
#include <vector>
template< bool B, class T = void >
struct enable_if;
template<bool B, class T = void>
struct enable_if {};
template<class T>
struct enable_if<true, T> 
{ 
	typedef T type; 
};
template <typename T>
typename enable_if<!std::is_integral<T>::value, void>::type
printSTL(T stl)
{
    std::cout << "Values: ";
    for (auto i : stl)
        std::cout << i << " ";
    std::cout << "\n";
}

template <typename T>
typename enable_if<std::is_integral<T>::value, void>::type
printSTL(T value)
{
    std::cout << "Value: ";
    std::cout << value << std::endl;
}
int main()
{
    std::vector<double> stl1;
    stl1 = { 1.01, 2.02, 3.03, 4.04, 5.05};
    printSTL(stl1);
    int notstl = 5;
    printSTL(notstl);
    std::string notstl2 = "Masha";
    printSTL(notstl2);
    return 0;
}