#include <iostream>
using namespace std;
//IN THIS TRANSPOSE METHOD WE CAN ONLY APPLY IT 
//WHEN THE MATRIX IS SQUARE MATRIX -> ROWS = COLUMNS!!
int main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    for(int i = 0; i <= (3-1); i++){
        for(int j = 1; j <= (3-1); j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i <= (3-1); i++){
        for(int j = 0; j <= (3-1); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}