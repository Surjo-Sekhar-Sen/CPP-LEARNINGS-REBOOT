#include <iostream>
using namespace std;

int  main(){
    int n, sum = 0;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];  //WE CANNOT DIRECTLY WRITE int arr1[n] BCOZ THIS IS CONSIDERED
    //AS A BAD PRACTICE AND CAUSE COMPILER ERROR IN SOME CASES!!
    cout << "Enter array elements: ";
    for(int i = 0; i <= (n-1); i++){
        cin >> arr[i];
    }
    cout << "Array elements entered: ";
    for(int i = 0; i <= (n-1); i++){
        cout << arr[i] << " ";
    }

    for(int i = 0; i <= (n-1); i++){
        sum = sum + arr[i];
    }
    cout << "Sum of the array: " << sum;
    delete[] arr;
    return 0;
}