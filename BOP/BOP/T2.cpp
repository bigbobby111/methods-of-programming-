#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float num1, num2;
    int operation;
   
    cout << "�������� ��������:" << endl;
    cout << "1. ��������" << endl;
    cout << "2. ���������" << endl;
    cout << "3. ���������" << endl;
    cout << "4. �������" << endl;
    cout << "5. ������� �� �������" << endl;
    cout << "6. ���������� �����" << endl;
    cout << "7. ���������� ������" << endl;
    cout << "8. ���������� � �������" << endl;
    cin >> operation;

    if (operation >= 1 && operation <= 5 || operation == 8) {
        cout << "������� ������ �����: ";
        cin >> num1;

        cout << "������� ������ �����: ";
        cin >> num2;
    }
    else if (operation >= 6 && operation <= 7) {
        cout << "������� �����: ";
        cin >> num1;
    }

    switch (operation) {
    case 1:
        cout << "��������� ��������: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "��������� ���������: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "��������� ���������: " << num1 * num2 << endl;
        break;
    case 4:
        if (num2 != 0) {
            cout << "��������� �������: " << num1 / num2 << endl;
        }
        else {
            cout << "������! ������� �� ����" << endl;
        }
        break;
    case 5:
        if (num2 != 0) {
            cout << "������� �� �������: " << fmod(num1, num2) << endl;
        }
        else {
            cout << "������! ������� �� ����" << endl;
        }
        break;
    case 6:
        cout << "����������� ������ �����: " << round(num1) << endl;
        break;
    case 7:
        cout << "���������� ������ ������� �����: " << sqrt(num1)
            << endl;
        break;
    case 8:
        cout << "������ ����� � ������� ������� �����: " << pow(num1, num2) << endl;
        break;
    default:
        cout << "������! ������������ ��������" << endl;
        break;
    }

    return 0;
}