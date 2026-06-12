#include <iostream>
using namespace std;

void swap_if(int* x, int* y) {
	if (*x > *y) {
		int t = *x;
		*x = *y;
		*y = t;
	}
}

void get_order(int* a, int* b, int* c) {
	swap_if(a, b);
	swap_if(b, c);
	swap_if(a, b);
}

int main() {
	int a, b, c;

	cout << "Input yuor numbers: ";
	cin >> a >> b >> c;

	get_order(&a, &b, &c);

	cout << a << " " << b << " " << c << endl;

	return 0;
}
