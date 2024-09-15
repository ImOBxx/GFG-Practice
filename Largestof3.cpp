#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;
    cout << "Enter 3rd Number: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "1st Number is the greatest." << endl;
    }
    else if (b > a && b > c)
    {
        cout << "2nd Number is the greatest." << endl;
    }
    else 
    {
        cout << "3rd Number is the greatest." << endl;
    }
    
}