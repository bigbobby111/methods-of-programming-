#include <iostream>
using namespace std;
int main()
{
    int N, n = 1;
    cout << "Enter the number N: ";
    cin >> N;
    for (; n <= N; n++) {
        if (N % n == 0) {
            cout << "The divisor of a number = " << n << endl;
        }
    }
    return 0;
}