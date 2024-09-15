#include <iostream>
using namespace std;

int main()
{
    int x;
    int i = 0;
    int sum = 0;
    cout << "\n";
    cout << "Enter Number: ";
    cin >> x;
    cout << "\n";
    cout << "The Table of " << x << ":" << endl;
    cout << "\n";
    while (i <= 10)
    {
        sum = x * i;
        cout << x << " x " << i << " = " << sum << endl;
        ++i;

    }
    cout << "\n";
    return 0;
}