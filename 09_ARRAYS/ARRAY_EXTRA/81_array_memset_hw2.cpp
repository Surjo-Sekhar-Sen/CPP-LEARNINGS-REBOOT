#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr1 = new int[n];
    memset(arr1, -1, n * sizeof(int));

    for(int i = 0; i <= (n-1); i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    int* arr2 = new int[n];
    memset(arr2, 2, n * sizeof(int)); //THIS WILL GIVE WEIRD UNEXPECTED VALUES
    //AS MEMSET WORKS WITH 0 AND -1!! BASICALLY MEMSET WORKS BYTE BY BYTE!!
    for(int i = 0; i <= (n-1); i++){
        cout << arr2[i] << " ";
    }
    delete[] arr1;
    delete[] arr2;
    return 0;
}