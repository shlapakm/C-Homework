#include <iostream>
#include <iomanip>

int main()
{
    std::string name;
    int price, temperature;
    bool hasCashback;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true(1)/false(0)) ";
    std::cin >>   hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::cout << name << '\n';
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::hex | std::ios::uppercase);
    int value;
    std::cout << "Price:";
    std::cout << std::setw(20) << std::setfill('.') <<std::right << price << std::endl;
    std::cout.setf(std::ios::boolalpha);
    std::cout << "Has cash-back:";
    std::cout << std::setw(12) << std::setfill('.') << std::right << hasCashback << std::endl;
    std::cout.setf(std::ios::dec);
    std::cout << "Max temperature:";
    std::cout.setf(std::ios::showpos);
    std::cout << std::setw(10) << std::setfill('.') << std::right << temperature << std::endl;

    return 0;
}
