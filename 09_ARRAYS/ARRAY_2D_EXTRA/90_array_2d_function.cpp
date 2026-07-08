#include <iostream>
using namespace std;

int arr2dfunc(int arr[][3], int row, int col){ //IT IS A MUST THAT YOU PUT THE 
    //COLUMN SIZE IN THE ARRAY PARAMETER OTHERWISE IT WON'T EXECUTE!!
    arr[0][1] = 20;
    arr[1][2] = 90;
    return 0;
}
int main(){
    int arr1[2][3] = {{1, 2, 3},
                      {4, 5, 6}};
    arr2dfunc(arr1, 2, 3);
    for(int i = 0; i <= (2-1); i++){
        for(int j = 0; j <= (3-1); j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}