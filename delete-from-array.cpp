#include <iostream>
using namespace::std;

int main()
{
	int a[8] = { 8, 9, 10, 17, 6, 21, 23 };
	int n = 6;
	int index;

	cout << "enter index: ";
	cin >> index;

	for (int i = index; i <= n - 1; i++) {
		a[i] = a[i + 1];
	}
	n = n - 1;
}

