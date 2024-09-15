#include <iostream>
using namespace std;

int main()
{
    int n;
    int j;
    int sum;
    cout << "\n";
    cout << "Enter Number: ";
    cin >> n;
    cout << "Tables Till N Number: \n" << endl;
    int i;
    for (int i = 1; i <= n; i++)
    {
       for (j = 1; j <= 10; j++)
       {
         sum = i * j;
         cout << i << " x " << j << " = " << sum << "\n" << endl;

       }
       
    }
    return 0;
}