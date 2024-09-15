#include <iostream>
using namespace std;

int main()
{
    int y;
    cout << "Enter Year: ";
    cin >> y;
    if (y % 4 == 0 && y % 100 != 0)
    {
        cout << y << " Is a Leap Year." << endl;
    }
    else if (y % 400 == 0)
    {
        cout << y << " Is a Leap Year." << endl;
    }
    else 
    {
        cout << y << " Is not a Leap Year." << endl;
    }
}