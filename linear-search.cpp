#include <iostream>]
using namespace::std;

int main()
{
    int a[6] = { 4, 2, 6, 7, 1, 12 };
    int n = 5;
    int item = 7;
    int i = 0;

    while (a[i] != item && i <= n) {
        i = i + 1;
    }
    if (i == n + 1) {
        cout << "404 not found";
    }
    else
        return i;
}

