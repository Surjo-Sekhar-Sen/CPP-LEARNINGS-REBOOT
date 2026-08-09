#include <iostream>
using namespace std;

int main(){
    int arr[3][4] = {{10, 11, 12, 13},
                     {1, 2, 3, 4},
                     {21, 24, 54}};
    for(int i = 0; i <= (3-1); i++){
        for(int j  = 0; j <= (4-1); j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}