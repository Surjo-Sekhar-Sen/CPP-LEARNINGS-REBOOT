#include <iostream>
using namespace std;

int main(){
    int arr1[100]; //WE CAN DECLARE ANY ARRAY WITH SPECIFYING IT'S SIZE!!
    arr1[0] = 10;
    arr1[20] = 100; //IN ALL THE OTHER SPACES THERE WILL BE GARBAGE VALUE INSIDE!!
    int arr2[5] = {1, 2, 3, 4, 5}; 
    int arr3[] = {1, 2, 3, 4, 5, 6}; //IF WE DON'T SPECIFY SIZE THEN WE NEED
    //TO GIVE THE VALUES IN IT!!

    //ACCESSING
    cout << arr1[0] << " " << arr1[30] << endl; 
    cout << arr2[0] << " " << arr2[1] << " " << arr2[2] << " " << arr2[3] << " " << arr2[4] << endl;
    cout << arr3[3];
    cout << sizeof(arr3) << " ";
    cout << &arr3 << " " << &arr3[0] << " " << &arr3[1] << " " << &arr3[2];
    return 0;
}