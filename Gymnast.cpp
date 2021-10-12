#include <iostream>
#include "Gymnast.h"

int main() {
	Gymnast firstGymnast;
	Gymnast secondGymnast;
	std::string firstName;
	std::string secondName;
	std::string city;
	int year;
	std::cout << "Hello! Please fill in the information about the gymnast." << std::endl;
	std::cout << "Enter a name:" << std::endl;
	std::cin >> firstName;
	std::cout << "Enter a surname:" << std::endl;
	std::cin >> secondName;
	std::cout << "Enter your year:" << std::endl;
	std::cin >> year;
	std::cout << "Enter a city:" << std::endl;
	std::cin >> city;
	firstGymnast.setFirstName(firstName);
	firstGymnast.setSecondName(secondName);
	firstGymnast.setYear(year);
	firstGymnast.setCity(city);
	secondGymnast.setFirstName("Margarita");
	secondGymnast.setSecondName("Mamun");
	secondGymnast.setYear(1995);
	secondGymnast.setCity("Moscow");
		std::cout << " First gymnast is " << firstGymnast.getFirstName() << " " << firstGymnast.getSecondName() << " " << firstGymnast.getYear() << " " << firstGymnast.getCity() << " " << std::endl;
	std::cout << " Her rival is " << secondGymnast.getFirstName() << " " << secondGymnast.getSecondName() << " " << secondGymnast.getYear() << " " << secondGymnast.getCity() << " " << std::endl;
	return 0;
}
