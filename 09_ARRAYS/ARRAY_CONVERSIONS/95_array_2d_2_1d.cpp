#include <iostream>
using namespace std;

int main(){
    int R = 2, C = 3;
    int arr1[2][3] = {{4, 5, 6},
                      {1, 2, 3}};
    int arr2[6];
    int indexID;

    for(int i = 0; i <= (2-1); i++){
        for(int j = 0; j <= (3-1); j++){
            indexID = (i * C) + j; //THIS IS THE FORMULA USED FOR FINDING THE CORRECT INDEX NUMBER 
            //FOR THE VALUE!!
            arr2[indexID] = arr1[i][j];
        }
    }
    for(int i = 0; i <= (6-1); i++){
        cout << arr2[i] << " ";
    }
    return 0;
}