#include <iostream>
using namespace std;
//WRITE A FUNCTION TO REVERSE AN ARRAY!!
//WE USE TWO-POINTER APPROACH!!

int arrreverse(int arr[], int size){
    int start = 0;
    int end = (size -1);

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

int main(){
    int arr1[5] = {10, 20, 30, 40, 50};
    cout << "Array before Reversing: ";
    for(int i = 0; i <= (5-1); i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    arrreverse(arr1, 5);

    cout << "Array after Reversing: ";
    for(int i = 0; i <= (5-1); i++){
        cout << arr1[i] << " ";
    }
    return 0;
}