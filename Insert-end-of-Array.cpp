#include <iostream>
using namespace::std;


int main()
{
    int a[8] = { 9, 15, 2, 7, 6, 4 };
    int n = 5;
    int ub = 7;

    int item, loc;
    cout << "enter number: ";
    cin >> item;
    cout << endl << "enter index :";
    cin >> loc;

    if (n == ub) {
        cout << endl << "Array is full!";
    }
    else {
        for (int i = n; i >= loc; i--) {
            a[i + 1] = a[i];
        }
        a[loc] = item;
        n += 1;
    }
}

