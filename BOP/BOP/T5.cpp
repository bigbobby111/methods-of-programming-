#include <iostream>
using namespace std;

int main() {
    float A, B;
    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;
    if (A > B) {
        A += B;
        B = A - B;
        A -= B;  
    }
    cout << "A: " << A << " B: " << B << endl;
    return 0;
}