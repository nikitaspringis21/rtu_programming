#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

float sum(int n) {
	float sum = 1;
	float fraction = 1;
	float sign = -1;
	for (int i = 2; i <= n; ++i) {
		fraction = 1. / i;
		fraction *= sign;
		sum += fraction;
		sign *= -1;
	}

	return sum;
}

int dividerNum(int n) {
	int c = 0;
	for (int i = 1; i <= n; ++i) if (n % i == 0) c++;

	return c;
}

int maxSquare(int n) {
	for (int i = n; i >= 1; --i) {
		if (i * i % 100 == 24) {
			return i;
			break;
		}
	}
}

int fibonacci(int n) {

}

int main() {
	int n;
	cout << "Input n: "; cin >> n;
	cout << "\nFactorial: " << factorial(n);
	cout << "\nRow's sum: " << sum(n);
	cout << "\nDivider amount: " << dividerNum(n);
	cout << "\nMax square: " << maxSquare(n);

	return 0;
}


