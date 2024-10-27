#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    float x, y;
    cout << "Enter the target number: ";
    cin >> n;
    if ((n > 2) || (n < 1)) {
        cout << "There is no such drawing!";
    }
    else {
        cout << "Enter the X coordinate: ";
        cin >> x;
        cout << "Enter the Y coordinate: ";
        cin >> y;
    }
    switch (n) {
    case 1: {
        if ((y >= 0 && x >= -1 && x <= 1 && x * x + y * y <= 1) || (y <= 0 && x <= 0 && x >= -2 && y >= -x - 2)) {
            cout << "The dot hit the area";
        }
        else {
            cout << "The point did not fall into the area";
        }
        break;
    }
    case 2: {
        if (y <= 0 && ((x >= 0 && x <= 2) || (x <= 0 && x >= -2)) && ((x - 1) * (x - 1) + y * y <= 1 || (x + 1) * (x + 1) + y * y <= 1)) {
            cout << "The dot hit the area";
        }
        else {
            cout << "The point did not fall into the area";

        }
        break;
    }
    }
    return 0;
}