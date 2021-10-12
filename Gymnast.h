#include <string>
class Gymnast {
private:
	std::string _firstName;
	std::string _secondName;
	int _year;
	std::string _city;
public:
	std::string getFirstName() const {
		return _firstName;
	}
	void setFirstName(std::string firstName) {
		_firstName = firstName;
	}
	std::string getSecondName() const {
		return _secondName;
	}
	void setSecondName(std::string secondName) {
		_secondName = secondName;
	}
	int getYear() const {
		return _year;
	}
	void setYear(int year) {
		_year = year;
	}
	std::string getCity() const {
		return _city;
	}
	void setCity(std::string city) {
		_city = city;
	}
};
