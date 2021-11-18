#include <iostream>
#include <iostream>
template< class T >
struct add_const;
template<class T> 
struct add_const 
{ 
	typedef const T type; 
};
template< class T >
struct remove_const;
template< class T > 
struct remove_const 
{ 
	typedef T type; 
};
template< class T > 
struct remove_const<const T> 
{ 
	typedef T type; 
};
struct example
{
	void ex() const { std::cout << "Const\n"; }
};
int main()
{
	example{}.ex();
	std::add_const<example>::type{}.ex();
	typedef remove_const<const int>::type type1;
	std::cout << (std::is_same<int, type1>::value
		? "yes" : "no") << '\n';
	std::add_const<example>::type{}.ex();
	typedef remove_const<int>::type type2;
	std::cout << (std::is_same<int, type2>::value
		? "yes" : "no") << '\n';
	return 0;
}