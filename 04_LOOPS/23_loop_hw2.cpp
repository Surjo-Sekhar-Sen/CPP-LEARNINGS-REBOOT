//PRINT TABLE OF 7
#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 10; i++){
        cout << 7 * i << " ";
    }
    cout << endl;
    int j = 1;
    while(j <= 10){
        cout << 7 * j << " ";
        j++;
    }
    return 0;
}