#include <iostream>
using namespace std;


void fun()
{
    cout << "fun() called \n";
}
int main()
{
    cout << "Before Calling fun() \n";
    fun();
    cout << "After Calling fun() \n";
    return 0;
    
}