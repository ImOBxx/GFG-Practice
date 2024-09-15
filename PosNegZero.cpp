#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Number: ";
    cin >> a;
    if (a > 0)
    {
        cout << "Positive Number." << endl;
    }
    else if (a < 0)
    {
        cout << "Negative Number." << endl;
    }
    else 
    {
        cout << "Input Value is Zero." << endl;
    }
}