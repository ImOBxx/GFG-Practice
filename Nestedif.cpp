#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "Positive Even." << endl;
        }
        else {
            cout << "Positive Odd." << endl;
        }
    }
    else if (n < 0)
        {
            if (n % 2 == 0)
            {
                cout << "Negative Even." << endl;
            }
            else 
            {
                cout << "Negative Odd" << endl;
            }
    

    }    
        
    else {
            cout << "Zero." << endl;
        
         }
}