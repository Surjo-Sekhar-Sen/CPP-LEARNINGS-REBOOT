#include <iostream>
using namespace std;

int main(){
    //WE CAN WRITE MULTIPLE VARIABLES IN THE INITIALISATION PART
    //AND ALSO USE THEM IN THE COMPARISON PART
    for(int i = 0, j = 5; i <= 5, j >= 0; i++, j--){
        cout << "i: " << i << ", j: " << j << endl;
    }
    return 0;
}