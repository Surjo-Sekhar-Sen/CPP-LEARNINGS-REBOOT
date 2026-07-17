#include <iostream>
#include <string>
using namespace std;

void changes(int arr[], int size, int &c){ //WE GIVE SIZE AS IT IS A GOOD PRACTICE AND HELPS IN LOOPS!!
    //ARRAYS ARE ALWAYS PASS BY REFERENCE!! 
    //THAT USUALLY IS BECAUSE THEY DON'T ONLY SEND THE ADDRESS OF THE FIRST BLOCK
    //INSTEAD OF SENDING THE WHOLE ARRAY TO COPY!! WHICH MAKES IT FASTER AND RELAIABLE!!
    //BUT BECAUSE OF THIS, IT DOES NOT HAVE ANY ACCOUNT OF ITS SIZE!!
    // cout << sizeof(arr); //MIGHT GIVE THE SIZE OF POINTER VARIABLE AS 8 OR SOMETHING!!
    arr[1] = 24;
    cout << arr[1] << " " << arr[2] << endl;
    c++; 
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) << endl;
    int count = 0;
    changes(arr, 5, count);
    cout << arr[1] << " " << arr[2] << endl;
    cout << count;
    return 0;
}