#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, pd, c, dx;
    int n;
    cout << "Enter the number x: ";
    cin >> p;
    cout << "Enter the number n: ";
    cin >> n;
    cout << "Enter the number e: ";
    cin >> c;
    cout << "Enter the number dx: ";
    cin >> dx;
    cout << "Enter the number xf: ";
    cin >> pd ;

    cout << "  x  " << " | " << "  s  " << " | " << "n" << endl;
    cout << "------|-------|--" << endl;
    while (p <= pd) {
        double s = 0, a = 1;
        int k = 1;
        for (int i = 1; i <= n && c <= a; ) {
            if (k % 2 == 1) {
                s += a;
                k++;
            }
            else {
                s -= a;
                k--;
            }
            i++;
            a *= pow(p, 2) / ((2 * i - 3) * (2 * i - 2));
        }
        if (!(c <= a)) {
            cout.precision(3);
            cout << fixed << p << " | " << "Error" << " | " << n << endl;
        }
        else {
            cout.precision(3);
            cout << fixed << p << " | " << fixed << s << " | " << n << endl;
        }
        cout << "------|-------|--" << endl;
        p += dx;
    }

    return 0;
}