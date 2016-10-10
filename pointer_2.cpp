
#include <iostream>

using namespace std;

void swap (int& x, int& y) {

	int tmp = x;
	x = y;
	y = tmp;

}


int main(void)
{
	int a, b;

	cout << "intA:"; cin >> a;
	cout << "intB:"; cin >> b;

	swap(a,b);

	cout << "intA:" << a << "\n";
	cout << "intB:" << b << "\n";

	return 0;

}

