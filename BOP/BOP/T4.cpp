#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int D, M;
    cout << "Введите день: ";
    cin >> D;
    cout << "Введите месяц: ";
    cin >> M;

    if ((M == 1 && D >= 20) || (M == 2 && D <= 18)) {
        cout << "Водолей" << endl;
    }
    else if ((M == 2 && D >= 19) || (M == 3 && D <= 20)) {
        cout << "Рыбы" << endl;
    }
    else if ((M == 3 && D >= 21) || (M == 4 && D <= 19)) {
        cout << "Овен" << endl;
    }
    else if ((M == 4 && D >= 20) || (M == 5 && D <= 20)) {
        cout << "Телец" << endl;
    }
    else if ((M == 5 && D >= 21) || (M == 6 && D <= 21)) {
        cout << "Близнецы" << endl;
    }
    else if ((M == 6 && D >= 22) || (M == 7 && D <= 22)) {
        cout << "Рак" << endl;
    }
    else if ((M == 7 && D >= 23) || (M == 8 && D <= 22)) {
        cout << "Лев" << endl;
    }
    else if ((M == 8 && D >= 23) || (M == 9 && D <= 22)) {
        cout << "Дева" << endl;
    }
    else if ((M == 9 && D >= 23) || (M == 10 && D <= 22)) {
        cout << "Весы" << endl;
    }
    else if ((M == 10 && D >= 23) || (M == 11 && D <= 22)) {
        cout << "Скорпион" << endl;
    }
    else if ((M == 11 && D >= 23) || (M == 12 && D <= 21)) {
        cout << "Стрелец" << endl;
    }
    else if ((M == 12 && D >= 22) || (M == 1 && D <= 19)) {
        cout << "Козерог" << endl;
    }
    else {
        cout << "Некорректная дата" << endl;
    }

    return 0;
}