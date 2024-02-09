#include <iostream>
using namespace::std;
int main()
{
    int a[5] = { 20, 1, 4, 3 };
    int n = 3;

    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                a[j + 1] = a[j] + a[j + 1];
                a[j] = a[j + 1] - a[j];
                a[j + 1] = a[j + 1] - a[j];
            }
        }
    }
}

