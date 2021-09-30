
#include <string>
#include <iostream>
enum  Month
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER,
};
void numberOfDaysInAMonth(Month enterMonth)
{
	switch (enterMonth)
	{
	case JANUARY: std::cout << 31;
		break;
	case FEBRUARY: std::cout << 28;
		break;
	case MARCH: std::cout << 31;
		break;
	case APRIL: std::cout << 30;
		break;
	case MAY: std::cout << 31;
		break;
	case JUNE: std::cout << 30;
		break;
	case JULY: std::cout << 31;
		break;
	case AUGUST: std::cout << 31;
		break;
	case SEPTEMBER: std::cout << 30;
		break;
	case OCTOBER: std::cout << 31;
		break;
	case NOVEMBER: std::cout << 30;
		break;
	default: std::cout << 31;
	}
}
int main()
{
	std::cout << "Enter a number of your month " << std::endl;
	int numberOfMonth;
	std::cin >> numberOfMonth;
	Month enterMonth = static_cast<Month>(numberOfMonth);
	std::cout << "Number of days in your month: ";
	numberOfDaysInAMonth(enterMonth);
	return 0;
}