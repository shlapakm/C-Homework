#include <iostream>
#include <vector>

class DynArray {
private:
	int* _array;
	size_t _lenght;
	std::vector <int>* _v;
public:
	DynArray(size_t size) :
		_lenght(size) {
		_array = new int[_lenght];
		std::vector <int> _v(_lenght);
		for (int i = 0; i < _lenght; i++) {
			_array[i] = 0;
		}
	}
	DynArray(DynArray& dynarray) :
		_array(dynarray._array), _lenght(dynarray._lenght), _v(dynarray._v)
	{
		std::cout << "Move constructor worked here!" << std::endl;
	}
	//Attention!The following three lines are commented out to avoid memory leaks when copying!
	//If you want to uncomment the destructor, then do not use copying in your program!
	//~DynArray() {
		//delete[] _array;
	//}

	int& operator[] (size_t index) {
		return _array[index];
	}
	int operator[] (size_t index) const {
		return _array[index];
	}
	size_t getLenght() const {
		return _lenght;
	};
	DynArray& operator =(const DynArray& dynarray)
	{
		_array = dynarray._array;
		_lenght = dynarray._lenght;
		_v = std::move(dynarray._v);
		return *this;
	}

};

std::ostream& operator<< (std::ostream& out, const DynArray& right) {
	out << " [";
	for (size_t i = 0; i < right.getLenght(); i++) {
		out << right[i] << " ";
	}
	out << "] ";
	return out;
}


int main() {
	std::cout << "Here is a copy" << std::endl;
	DynArray array(5);
	DynArray copy = array;
	DynArray copy2(array);
	array[0] = 10;
	array[1] = 9;
	array[2] = 8;
	array[4] = 6;
	std::cout << "First array: " << array << std::endl;
	std::cout << "Our first copy: " << copy << std::endl;
	std::cout << "Our second copy: " << copy2 << std::endl;
	return 0;
}