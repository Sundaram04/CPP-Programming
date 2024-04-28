/*t continues the current flow of the program and skips the remaining code at specified condition.
 In case of inner loop, it continues only inner loop.
 */

#include <iostream>
using namespace std;

int main() {
    /*for(int i = 1; i <= 10; i++){
        if (i == 5)
        {
            continue;
        }
        cout << i << "\n";
    }
    */

    for (int i = 1; i <= 3; i++){
    for(int j = 1; j <= 3; j++){
        if(i == 2 && j == 2){
            continue;
        }
        cout << i << " " << j << "\n";
    }
    }
}