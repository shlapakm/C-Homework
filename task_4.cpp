#include <iostream>
constexpr bool is_prime(long long int p) // C++14
{
	for (long long int d = 2; d <= p / 2; ++d)
	{
		if (p % d == 0)
		{
			return false;
		}
	}

	return p > 1;
}

constexpr long long int next_prime(long long int n)
{
	return is_prime(n + 1) ? n + 1 : next_prime(n + 1);
}

constexpr long long int prime(long long int n)
{
	return (n == 1) ? 2 : next_prime(prime(n - 1));
}

int main()
{
	std::cout << "Our second prime number is " << prime(2) << std::endl; 
	std::cout << "Our third prime number is " << prime(3) << std::endl; 
	std::cout << "Our ninth prime number is " << prime(9) << std::endl; 
	std::cout << "Our two hundred and thirty-ninth prime number is " << prime(239) << std::endl;

}