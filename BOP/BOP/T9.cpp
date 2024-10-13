#include <cmath>
#include <iostream>
#define M 3.14159265358979323846

int main() {
    float P, S;
    std::cin >> P;// Площадь квадрата
    std::cin >> S;// Площадь круга
    if (sqrt(P) * sqrt(2) <= sqrt(S / M) * 2) {
        std::cout << "Square in a circle" << std::endl;
    } if (sqrt(P) * sqrt(2) >= sqrt(S / M) * 2) {
        std::cout << "Circle in a square" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
    return 0;
}