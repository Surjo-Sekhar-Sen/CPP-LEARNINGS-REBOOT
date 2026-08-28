#include <iostream>
#include <string>
using namespace std;

void passbyrefnormal(int arr[], int size){//THIS IS PASS BY REFERENCE BY DEFAULT!!
    //BUT IT ONLY RETURNS THE ADDRESS OF THE FIRST BLOCK AND DON'T HAVE THE IDEA OF THE SIZE OF THE ARRAY!!
    //BUT STILL POINTS TO THE SAME ADDRESS!! 
    //THIS IS WHAT WE CALL AS POINTER DECAY!!
    for(int i = 0; i <= (size-1); i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
    // cout << sizeof(arr); //THIS CANNOT BE DETERMINED AS ITS TOTAL SIZE IS UNKNOWN!!
    cout << arr << endl; //ADDRESS OF THE FIRST BLOCK -> &arr[0]!!
    cout << &arr[1] << endl; 
    arr[2] = 30; //arr[2] = (arr + 2) -> (&arr[0] + 2*4)
    return;
}

void passbyrefactual(int (&arr)[5]){//WE DON'T HAVE TO STORE SIZE IN ANOTHER VARIABLE!!
    for(int x : arr){ //FOR-EACH LOOP WHERE IT WORKS ACCORDING TO THE RANGE!!
        //THIS CANNOT WORK WITH SIMPLE PASS BY REFERENCE AS THERE IS NO SIZE OR RANGE VALUE KNOWN, 
        //SO THE ARRAY LOOP MIGHT GO OUT OF BOUND IF YOU DON'T EXPLICITLY TELL HOW MUCH THE LOOP SHOULD EXECUTE!!
        cout << x << " ";
    }
    cout << endl;
    arr[1] = 20;
    return;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    passbyrefnormal(arr, 5);
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
    passbyrefactual(arr);
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}