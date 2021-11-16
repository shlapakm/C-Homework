#include <iostream>
#include <cstring>
//without convolution (with recursion)
template <typename Arg>
auto sizeFunction(Arg arg)
{
    return sizeof(arg);
}
template <>
auto sizeFunction(const char* arg)
{
    return strlen(arg);
}
template <typename First, typename ... Args>
auto sizeFunction(First first, Args... arg)
{
    return sizeFunction(first) + sizeFunction(arg...);
}
//with convolution
template <typename ... Args>
auto sizeFunctionWithConvolution(Args... arg)
{
    return (... + sizeFunction(arg));
}
int main()
{
    std::cout << sizeFunction(2, 4, 5, true, "M", false, 23.9) << std::endl;
    std::cout << sizeFunctionWithConvolution(2, 4, 5, true, "M", false, 239.9, 'v') << std::endl;
    return 0;
}
