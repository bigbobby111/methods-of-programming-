#include <iostream>
using namespace std;
int main() {
    int N, n = 1, s = 0;
    cout << "Enter the number N: ";
    cin >> N;
    for (; n <= N; n++) {
        for (int k = 1; k < n; k++) {
            if (n % k == 0) {
                s += k;
            }
        }
        if (n == s) {
            cout << n << endl;
        }
        s = 0;
    }
    return 0;
}