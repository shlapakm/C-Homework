#include <iostream>
template <typename T>
class Functor
{
public:
	T operator()(T a, T b)
	{
		return a + b;
	}
};

template <typename FunctionType, typename ... Args>
FunctionType sum(Args ...args)
{
	return (... + args );
}
template < typename OutType, typename FunctionType, typename ... InType >
void newFunction(OutType& res, FunctionType func, const InType &...arg)
{
	res = func(arg...);
}
template < typename FunctionType, typename ... Args>
FunctionType mult(Args ...args)
{
	return (args* ...);
}
int main()
{
	int res = 0;
	newFunction(res, sum(int), 1, 2);
	std::cout << res << std::endl;
	return 0;
}