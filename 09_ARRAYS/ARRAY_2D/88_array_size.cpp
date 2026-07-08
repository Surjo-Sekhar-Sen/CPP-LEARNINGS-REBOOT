#include <iostream>
using namespace std;

int main(){
    //WE CAN FIND OUT THE SIZE OF ANY ARRAY WHICH IS FIXED IN CODE!!
    //USING FORMULA = sizeof(arr) / sizeof(arr[0])
    //WE CANNOT USE THIS FOR DYNAMIC ARRAY!!

    //FOR 1-D ARRAY!!
    int arr1[5] = {1, 2, 3, 4, 5};
    cout << "Size of the 1-D array: ";
    cout << (sizeof(arr1) / sizeof(arr1[0])); //(SIZEOF ARRAY/SIZEOF FIRST ELEMENT)
    cout << endl;

    //FOR 2-D ARRAY!!
    int arr2[3][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12}};
    cout << "Row size of the 2-D array: ";
    cout << (sizeof(arr2) / sizeof(arr2[0]));  //(SIZEOF ARRAY/SIZEOF FIRST ROW)
    cout << endl;
    cout << "Column size of the 2-D array: ";
    cout << (sizeof(arr2[0]) / sizeof(arr2[0][0])); //(SIZEOF FIRST ROW/SIZEOF FIRST ELEMENT)
    return 0;
}