#include <iostream>
using namespace std;
//FLIP 1 TO 0 AND 0 TO 1 IN AN ARRAY!!

int arrflip(int arr[], int size){
    for(int i = 0; i <= (size-1); i++){
        if(arr[i] == 0){
            arr[i] = 1;
        }
        else if(arr[i] == 1){
            arr[i] = 0;
        }
        else{
            continue;
        }
    }
    return 0;
} 
int main(){
    int arr1[10] = {0, 1, 3, 0, 0, 1, 1, 10, 0, 1};
    cout << "Array before Flipping 0s and 1s: ";
    for(int i = 0; i <= (10-1); i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    arrflip(arr1, 10);

    cout << "Array after Flipping 0s and 1s: ";
    for(int i = 0; i <= (10-1); i++){
        cout << arr1[i] << " ";
    }
    return 0;
}