#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5}; //array initialization
    int *ptr;   // pointer declaration
    ptr = a;    //  assigning base address of array to the pointer ptr  
    ptr = ptr + 1;  // incrementing the value of pointer
    cout << "Value of second element of an array :" << *ptr << endl;
    ptr = ptr + 1;
    cout << "Value of third element of an array :" << *ptr << endl;
    return 0;
}