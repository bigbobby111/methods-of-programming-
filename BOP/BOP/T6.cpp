#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;

    int distance_a_to_b = abs(a - b);
    int distance_a_to_c = abs(a - c);

    if (distance_a_to_b <= distance_a_to_c) {
        cout << "B(" << b << "): " << distance_a_to_b << endl;
    }
    else {
        cout << "C(" << c << "): " << distance_a_to_c << endl;
    }

    return 0;
}