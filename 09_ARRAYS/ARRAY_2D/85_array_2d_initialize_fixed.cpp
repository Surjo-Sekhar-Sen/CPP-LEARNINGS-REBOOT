#include <iostream>
using namespace std;

int main(){
     int arr[4][3];
     for(int i = 0; i <= (4-1); i++){
        for(int j = 0; j <= (3-1); j++){
            cout << "Enter the element ["<< i << "]" << "[" << j <<"] of the array: ";
            cin >> arr[i][j];
            cout << endl;
        }
     }

     for(int i = 0; i <= (4-1); i++){
        for(int j  = 0; j <= (3-1); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
     }
     return 0;
}