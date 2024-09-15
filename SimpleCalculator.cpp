#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    cout << "\n";
    cout << "Simple Calculator: " << "\n";
    cout << "\n";
    cout << "Enter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;
    cout << "Operations: +, -, /, *, %" << endl;;
    char choice;
    cout << "Choose Operator: " << endl;
    cin >> choice;
    if (choice == '+')
    {
      sum = a + b;
      cout << a << " + " << b << " = "; 
      cout << sum << endl;
    }
    else if (choice == '-')
    {
      sum = a - b;
      cout << a << " - " << b << " = "; 
      cout << sum << endl;
    }
    else if (choice == '*')
    {
      sum = a * b;
      cout << a << " * " << b << " = "; 
      cout << sum << endl;
    }
    else if (choice == '/')
    {
      sum = a / b;
      cout << a << " / " << b << " = "; 
      cout << sum << endl;
    }
    else if (choice == '%')
    {
      sum = a % b;
      cout << a << " % " << b << " = "; 
      cout << sum << endl;
    }
cout << "Answer: " << sum << endl;
}