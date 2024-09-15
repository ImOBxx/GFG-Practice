#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    int i = 2;
    int x = i;
    while (n % x == 0) {
        cout << i << " ";
        x = x * i;
    }
}