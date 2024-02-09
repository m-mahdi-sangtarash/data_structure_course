#include <iostream>
using namespace::std;

int main()
{
    int a[4] = { 12, 9, 8, 1 };
    int n = 3;
    int m;

    for (int i = n; i <= n - 1; i++) {
        m = i;
        for (int j = i + 1; j <= n; j++) {
            if (a[j] < a[m]) {
                m = j;
            }
        }
        if (i != m) {
            a[m] = a[m] + a[i];
            a[i] = a[m] - a[i];
            a[m] = a[m] - a[i];
        }
        
    }
}