#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int arr[3][3];
    memset(arr, -1, sizeof(arr));

    for(int i = 0; i <= (3-1); i++){
        for(int j = 0; j <= (3-1); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}