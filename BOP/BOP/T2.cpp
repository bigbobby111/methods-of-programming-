#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float num1, num2;
    int operation;
   
    cout << "Выберите операцию:" << endl;
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl;
    cout << "4. Деление" << endl;
    cout << "5. Остаток от деления" << endl;
    cout << "6. Округление чисел" << endl;
    cout << "7. Квадратный корень" << endl;
    cout << "8. Возведение в степень" << endl;
    cin >> operation;

    if (operation >= 1 && operation <= 5 || operation == 8) {
        cout << "Введите первое число: ";
        cin >> num1;

        cout << "Введите второе число: ";
        cin >> num2;
    }
    else if (operation >= 6 && operation <= 7) {
        cout << "Введите число: ";
        cin >> num1;
    }

    switch (operation) {
    case 1:
        cout << "Результат сложения: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Результат вычитания: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Результат умножения: " << num1 * num2 << endl;
        break;
    case 4:
        if (num2 != 0) {
            cout << "Результат деления: " << num1 / num2 << endl;
        }
        else {
            cout << "Ошибка! Деление на ноль" << endl;
        }
        break;
    case 5:
        if (num2 != 0) {
            cout << "Остаток от деления: " << fmod(num1, num2) << endl;
        }
        else {
            cout << "Ошибка! Деление на ноль" << endl;
        }
        break;
    case 6:
        cout << "Округленное первое число: " << round(num1) << endl;
        break;
    case 7:
        cout << "Квадратный корень первого числа: " << sqrt(num1)
            << endl;
        break;
    case 8:
        cout << "Первое число в степени второго числа: " << pow(num1, num2) << endl;
        break;
    default:
        cout << "Ошибка! Некорректная операция" << endl;
        break;
    }

    return 0;
}