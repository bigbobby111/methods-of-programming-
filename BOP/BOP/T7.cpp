#include <cmath>
#include <iostream>
using namespace std;


int main() {
    int x, y;
    cin >> x;
    if (x < -5) {
        y = x + 1;
    }
    else if (-5 <= x && x <= 5) {
        y = pow(x, 2) - 2;
    }
    else {
        y = pow(x, 3) + 3;
    }
    cout << y << endl;
    return 0;
}