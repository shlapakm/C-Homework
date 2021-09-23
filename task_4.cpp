#include <string>
#include <vector>
#include <functional>
#include <iostream>
double calculation(double a, double b, std::function<double(double, double)> f)
{
	return f(a, b);
}

int main()
{
	std::vector< std::function<double(double, double)>> calc;
	std::function<double(double,double)> Sum = [](double x, double y) { return x + y; };
	calc.push_back(Sum);
	std::function<double(double, double)> Diff = [](double x, double y) { return x - y; };
	calc.push_back(Diff);
	std::function<double(double, double)> Mult = [](double x, double y) { return x * y; };
	calc.push_back(Mult);
	std::cout << "Enter two double numbers with space: ";
	double a, b;
	std::cin >> a;
	std::cin >> b;
	for (int i = 0; i < calc.size(); i++)
	{
		std::cout << calculation(a, b, calc[i]) << std::endl;
	}
	return 0;
}