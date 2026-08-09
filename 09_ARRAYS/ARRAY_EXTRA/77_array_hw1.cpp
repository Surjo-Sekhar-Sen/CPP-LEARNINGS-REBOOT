#include <iostream>
using namespace std;
//WRITE A FUNCTION TO POPULATE AN ARRAY WITH MULTIPLES OF 10!!

int arrmulti(int arr[], int size){
    for(int i = 0; i <= (size-1); i++){
        arr[i] = 10 * (i+1);
    }
    return 0;
}

int main(){
    int arr1[10];
    arrmulti(arr1, 10);
    for(int i = 0; i <= (10-1); i++){
        cout << arr1[i] << " "; 
    }
    return 0;
}