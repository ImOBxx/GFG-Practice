#include <iostream>
using namespace std;

int find_first_digit (int n) {
    while (n > 10) {
        n = n / 10;
}
return n;
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "The First Digit Of " << n << " is " << endl;
    cout << find_first_digit(n) << endl;

    return 0;
}