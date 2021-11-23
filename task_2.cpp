#include <iostream>

template <int n>
struct Fibbonacci
{
    static constexpr int value = Fibbonacci<n - 1>::value + Fibbonacci<n - 2>::value;
};

template <>
struct Fibbonacci<1>
{
    static constexpr int value = 1;
};

template <>
struct Fibbonacci<2>
{
    static constexpr int value = 1;
};

int main()
{
    std::cout << "The first 10 Fibonacci numbers: " << Fibbonacci<1>::value << ", " << Fibbonacci<2>::value << ", " << Fibbonacci<3>::value << ", " << Fibbonacci<4>::value << ", " 
        << Fibbonacci<5>::value << ", "  << Fibbonacci<6>::value << ", " << Fibbonacci<7>::value << ", "  << Fibbonacci<8>::value << ", "  << Fibbonacci<9>::value << ", "  << Fibbonacci<10>::value << std::endl;
    return 0;
}