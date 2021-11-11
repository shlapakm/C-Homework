#include <iostream>
//without convolution (with recursion)
template <typename Arg>
auto sizeFunction(Arg arg)
{
	return sizeof(arg);
}
template <typename First, typename ... Args>
auto sizeFunction(First first, Args... arg)
{
	return sizeof(first) + sizeFunction(arg...);
}
//with convolution
template <typename ... Args>
auto sizeFunctionWithConvolution(Args... arg)
{
	return (... + sizeof(arg));
}
int main()
{
	std::cout << sizeFunction(2, 4, 5, true, "Masha") << std::endl;
	std::cout << sizeFunctionWithConvolution(2, 4, 5, true, "Masha");
	return 0;
}