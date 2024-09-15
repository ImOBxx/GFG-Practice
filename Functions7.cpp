#include <iostream>
using namespace std;

void printDetails (int id, string name = "NA", string address = "NA")
{
    cout << "Id is " << id << " in ";
    cout << "Name is" << id << " in ";
    cout << "Address is" << id << " in ";
}
int main()
{
    printDetails(101, "Sandeep", "Noida");
    cout << "\n";
    printDetails(201, "Shivam");
    cout << "\n";
    printDetails(301);
    return 0;
}