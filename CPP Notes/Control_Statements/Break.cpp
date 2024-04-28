/* C++ break statement which is used inside the loop. 
 In case of inner loop, it breaks only inner loop.*/
#include <iostream>
using namespace std;
int main(){
    /*
    for(int i = 1; i<= 10; i++) 
    {
        if(i == 5)
        {
            break;
        }
        cout << i << "\n";
    }
    */
   for (int i = 1; i <= 3; i++){
    for(int j = 1; j <= 3; j++){
        if(i == 2 && j == 2){
            break;
        }
        cout << i << " " << j << "\n";
    }
    }
}