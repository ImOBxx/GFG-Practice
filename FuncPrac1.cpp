#include <iostream>
using namespace std;

void fun (int , string name = "NA" );

/// @brief 
/// @return 
int main()
{
    fun (101);
    return 0;
}
void fun (int id, string name)
{
    cout << id << " " << name;
}

// Compiler Error: Linker Error