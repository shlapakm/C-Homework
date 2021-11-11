#include <iostream>
//I didn't quite understand how to do with any dynamic objects, so only an array
template <typename T, typename ... Args >
T newArray(T type, Args ...args)
{
	T* a = new T[]{type,args...};
	return *a;
}
int main()
{
	std::cout << newArray(0, 5, 2, 3, 4) << std::endl;
	std::cout << newArray(239.0, 23.9, 2.39, 0.239) << std::endl;
	std::cout << newArray("Mariia", "Shlapak") << std::endl;
}