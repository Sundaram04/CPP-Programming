#include <iostream>

using  namespace std;
int main() 
{
    int a;
    int b;
    a = 10 + (b = 90); // Vembedded assignment expression 
    cout << "Values of 'a' is : " << a << endl;
    return 0;
}