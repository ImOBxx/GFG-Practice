#include <iostream>
using namespace std;

inline int getMax (int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << getMax (10, 20) << endl;
    return 0;
}
