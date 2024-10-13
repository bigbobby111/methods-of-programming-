#include <cmath>
#include <iostream>

int main() {
    int a_x, a_y;
    int b_x, b_y;
    int c_x, c_y;
    int p_x, p_y;
    std::cout << "A(x) A(y): ";
    std::cin >> a_x >> a_y;
    std::cout << "B(x) A(y): ";
    std::cin >> b_x >> b_y;
    std::cout << "C(x) C(y): ";
    std::cin >> c_x >> c_y;
    std::cout << "P(x) P(y): ";
    std::cin >> p_x >> p_y;

    float AB = sqrt(pow(abs(a_x - b_x), 2) + pow(abs(a_y - b_y), 2));
    float BC = sqrt(pow(abs(b_x - c_x), 2) + pow(abs(b_y - c_y), 2));
    float AC = sqrt(pow(abs(a_x - c_x), 2) + pow(abs(a_y - c_y), 2));

    float AP = sqrt(pow(abs(a_x - p_x), 2) + pow(abs(a_y - p_y), 2));
    float BP = sqrt(pow(abs(b_x - p_x), 2) + pow(abs(b_y - p_y), 2));
    float CP = sqrt(pow(abs(c_x - p_x), 2) + pow(abs(c_y - p_y), 2));

    float ABC_p = (AB + BC + AC) / 2;
    float ABP_p = (AB + BP + AP) / 2;
    float APC_p = (AP + CP + AC) / 2;
    float PBC_p = (BP + BC + CP) / 2;

    float ABC = sqrt(ABC_p * (ABC_p - AB) * (ABC_p - BC) * (ABC_p - AC));
    float ABP = sqrt(ABP_p * (ABP_p - AB) * (ABP_p - BP) * (ABP_p - AP));
    float APC = sqrt(APC_p * (APC_p - AP) * (APC_p - CP) * (APC_p - AC));
    float PBC = sqrt(PBC_p * (PBC_p - BP) * (PBC_p - BC) * (PBC_p - CP));

    if (ABC == ABP + APC + PBC) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}