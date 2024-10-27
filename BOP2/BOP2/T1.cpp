#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a, i = 1, res;
	cout << "Enter a pos number: ";
	cin >> a;

	if (a <= 0) {
		cout << "The operation is impossible! Enter a pos number.";
	}
	res = 1;
	for (; i <= a; ++i) {
		res *= i;
	}
	cout << "The factorial of the number " << a << " = " << res;
	return 0;
}