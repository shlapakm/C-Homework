#include <iostream>
//Firstly we need factorial-function
constexpr long long int fac(int n)
{
    return n == 1 ? 1 : n * fac(n - 1);
}
constexpr long float pow(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? pow(x * x, n / 2) :
        pow(x * x, (n - 1) / 2) * x;
}
constexpr long float exp(float x, int n)
{
    return  x == 0 ? 1 :
        n == 0 ? 1 :
        (pow(x, n) / fac(n)) + exp(x, n - 1);
}

int main()
{
    //Second argument of out function exp is the accuracy of the decomposition in a row
    std::cout << "e^(-1) " << exp(-1, 25) << std::endl;
    std::cout << "e^1 " << exp(1, 20) << std::endl;
    return 0;

}