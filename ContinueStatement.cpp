#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    for (int i = 11; i <= n; i++)
    {
        if (i % x == 0)
        continue;
        cout << i << " " << endl;
    }
    return 0;
}