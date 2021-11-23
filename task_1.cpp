#include <iostream>
//As we know, binomial coefficients are calculated using the formula of the number of combinations, 
//for this we first need to calculate some factorials.
// So the metafunction for the factorial.
template <int n>
struct Factorial
{
    static constexpr int value = n * Factorial<n - 1>::value;
};

template <>
struct Factorial<0>
{
    static constexpr int value = 1;
};

template <>
struct Factorial<1>
{
    static constexpr int value = 1;
};
// Then the binomial coefficient.
template<int n, int k>
struct C {
    static constexpr int value = Factorial<n>::value / Factorial<k>::value / Factorial<n-k>::value;
};
int main()
{
    std::cout << "binomial coefficient at n = 6, numbered 0 is " << C<6, 0>::value << std::endl;
    std::cout << "binomial coefficient at n = 6, numbered 1 is " << C<6, 1>::value << std::endl;
    std::cout << "binomial coefficient at n = 6, numbered 2 is " << C<6, 2>::value << std::endl;
    std::cout << "binomial coefficient at n = 6, numbered 3 is " << C<6, 3>::value << std::endl;
    std::cout << "binomial coefficient at n = 6, numbered 4 is " << C<6, 4>::value << std::endl;
    std::cout << "binomial coefficient at n = 6, numbered 5 is " << C<6, 5>::value << std::endl;
    std::cout << "binomial coefficient at n = 6, numbered 6 is " << C<6, 6>::value << std::endl;
    return 0;
}