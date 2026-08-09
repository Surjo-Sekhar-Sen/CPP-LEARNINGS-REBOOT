//PRINT 0 TO -10
#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i >= -10; i--){
        cout << i << " ";
    }
    cout << endl;
    int j = 0;
    while(j >= -10){
        cout << j << " ";
        j--;
    }
    return 0;
}