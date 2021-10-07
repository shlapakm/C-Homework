#include <string>
#include <iostream>
class Gymnast {
private:
	std::string _firstName;
	std::string _secondName;
	int _year;
	std::string _city;
public:
	std::string getFirstName() {
		return _firstName;
	}
	void setFirstName(std::string firstName) {
		_firstName = firstName;
	}
	std::string getSecondName() {
		return _secondName;
	}
	void setSecondName(std::string secondName) {
		_secondName = secondName;
	}
	int getYear() {
		return _year;
	}
	void setYear(int year) {
		_year = year;
	}
	std::string getCity() {
		return _city;
	}
	void setCity(std::string city) {
		_city = city;
	}
	void setAll(std::string firstName, std::string secondName, int year, std::string city) {
		_firstName = firstName;
		_secondName = secondName;
		_year = year;
		_city = city;
	}
};
