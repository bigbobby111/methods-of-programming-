#include <iostream>
#include <math.h>
using namespace std;
int main() {

    int q, w, e, r, t;
    cout << "q|x e r t" << endl;
    for (w = 0; w <= 1; w += 1) {
        for (e = 0; e <= 1; e += 1) {
            for (r = 0; r <= 1; r += 1) {
                for (t = 0; t <= 1; t += 1) {
                    if ((w <= e) == (e <= r) * (e + t)) {
                        q = 1;
                    }
                    else {
                        q = 0;
                    }
                    cout << q << '|' << w << ' ' << e << ' ' << r << ' ' << t << endl;
                }
            }
        }
    }
    return 0;
}