#include <cmath>
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    float num1, num2;
    int operation;

    std::cout << "�������� ��������:" << std::endl;
    std::cout << "1. ��������" << std::endl;
    std::cout << "2. ���������" << std::endl;
    std::cout << "3. ���������" << std::endl;
    std::cout << "4. �������" << std::endl;
    std::cout << "5. ������� �� �������" << std::endl;
    std::cout << "6. ���������� �����" << std::endl;
    std::cout << "7. ���������� ������" << std::endl;
    std::cout << "8. ���������� � �������" << std::endl;
    std::cin >> operation;

    if (operation >= 1 && operation <= 5 || operation == 8) {
        std::cout << "������� ������ �����: ";
        std::cin >> num1;

        std::cout << "������� ������ �����: ";
        std::cin >> num2;
    }
    else if (operation >= 6 && operation <= 7) {
        std::cout << "������� �����: ";
        std::cin >> num1;
    }

    switch (operation) {
    case 1:
        std::cout << "��������� ��������: " << num1 + num2 << std::endl;
        break;
    case 2:
        std::cout << "��������� ���������: " << num1 - num2 << std::endl;
        break;
    case 3:
        std::cout << "��������� ���������: " << num1 * num2 << std::endl;
        break;
    case 4:
        if (num2 != 0) {
            std::cout << "��������� �������: " << num1 / num2 << std::endl;
        }
        else {
            std::cout << "������! ������� �� ����" << std::endl;
        }
        break;
    case 5:
        if (num2 != 0) {
            std::cout << "������� �� �������: " << fmod(num1, num2) << std::endl;
        }
        else {
            std::cout << "������! ������� �� ����" << std::endl;
        }
        break;
    case 6:
        std::cout << "����������� ������ �����: " << round(num1) << std::endl;
        break;
    case 7:
        std::cout << "���������� ������ ������� �����: " << sqrt(num1)
            << std::endl;
        break;
    case 8:
        std::cout << "������ ����� � ������� ������� �����: " << pow(num1, num2) << std::endl;
        break;
    default:
        std::cout << "������! ������������ ��������" << std::endl;
        break;
    }