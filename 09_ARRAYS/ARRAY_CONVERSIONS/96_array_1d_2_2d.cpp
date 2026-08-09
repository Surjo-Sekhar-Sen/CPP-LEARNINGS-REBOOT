#include <iostream>
using namespace std;

int main(){
    int arr1[7] = {1, 2, 3, 4, 5, 6, 7};

    int R = 7, C = 1;
    int arr2[7][1];

    int row, col;

    for(int k = 0; k <= (7-1); k++){
        row = k / C;
        col = k % C;
        arr2[row][col] = arr1[k];
    }
    for(int i = 0; i <= (7-1); i++){
        for(int j = 0; j <= (1-1); j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}