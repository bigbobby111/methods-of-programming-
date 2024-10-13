#include <iostream>

int main() {
    int year;
    std::cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << 366 << std::endl;
    }
    else {
        std::cout << 365 << std::endl;
    }
    return 0;
}