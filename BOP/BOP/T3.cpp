#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int element;
    float value;
    float a, r1, r2, s;

    cout << "������� ����� ��������:" << endl;
    cout << "1 - �������" << endl;
    cout << "2 - ������ R1" << endl;
    cout << "3 - ������ R2" << endl;
    cout << "4 - �������" << endl;
    cin >> element;

    cout << "������� �������� ��������: ";

    switch (element) {
    case 1:
        cin >> a;
        break;
    case 2:
        cin >> r1;
        break;
    case 3:
        cin >> r2;
        break;
    case 4:
        cin >> s;
        break;
    default:
        cout << "�������� ����� ��������" << endl;
        return 0;
    }

    if (element == 2) {
        a = r1 * 6 / sqrt(3);
    }
    else if (element == 3) {
        a = r2 * 3 / sqrt(3);
    }
    else if (element == 4) {
        a = sqrt(s * 4 / sqrt(3));
    }
    r1 = sqrt(3) / 6 * a;
    r2 = sqrt(3) / 3 * a;
    s = sqrt(3) / 4 * pow(a, 2);

    cout << "������� a: " << a << endl;
    cout << "������ R1 (��������� ����������): " << r1 << endl;
    cout << "������ R2 (��������� ����������): " << r2 << endl;
    cout << "�������: " << s << endl;

    return 0;
}