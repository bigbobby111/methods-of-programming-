#include <cmath>
#include <iostream>
using namespace std;

int main() {
    float number;
    cin >> number;
    if (number > 0) {
        cout << "Positive" << endl;
    }
    else if (number < 0) {
        cout << "Negative" << endl;
    }
    else {
        cout << "Zero" << endl;
    }

    if (floor(number) == number) {
        cout << "Integer" << endl;
        if ((int)number % 2 == 0) {
            cout << "Even" << endl;
        }
        else {
            cout << "Odd" << endl;
        }
    }
    else {
        cout << "Non-integer" << endl;
    }

    return 0;
}