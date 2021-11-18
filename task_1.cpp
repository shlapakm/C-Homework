#include <iostream>
template< class T >
struct is_function;
template<typename> //main function
struct is_function : std::false_type {};
template<typename F, typename... Args>
struct is_function<F(Args...)> : std::true_type {};
template<typename F, typename... Args>
struct is_function<F(Args...) const> : std::true_type {};
template<typename F, typename... Args>
struct is_function<F(Args...) &> : std::true_type {};
template<typename F, typename... Args>
struct is_function<F(Args...) const &> : std::true_type {};
template<typename F, typename... Args>
struct is_function<F(Args...) &&> : std::true_type {};
template<typename F, typename... Args>
struct is_function<F(Args...) const &&> : std::true_type {};

int main()
{
	std::cout << std::boolalpha;
	std::cout << is_function<int>::value << std::endl;
	double func();
	std::cout << is_function<decltype(func)>::value << std::endl;
	std::cout << is_function<double(int)>::value << std::endl;
	std::cout << is_function<double(int) &>::value << std::endl;
	std::cout << is_function<double(int) const >::value << std::endl;
	std::cout << is_function<const char*>::value << std::endl;
	return 0;
}
