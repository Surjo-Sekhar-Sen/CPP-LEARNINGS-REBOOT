#include <iostream>
using namespace std;

void arrfunc(int arr[], int size){ //HERE SIZE IS NOT AT ALL NECESSARY TO BE WRITTEN
    //BUT STILL WRITING IT IS CONSIDERED AS A GOOD PRACTICE!!
    arr[0] = 20; //WHEN WE PASS ARRAY AS AN ARGUMENT, THERE ARE TWO WAYS FOR FUNCTION TO USE
    //PASS BY VALUE OR BY REFERENCE, BUT ARRAY ALWAYS USES PASS BY REFERENCE!!
    //SO IT'S ORIGINAL VALUE WILL CHANGE!! 
}
int main(){
    int arr1[3] = {10, 20, 30};
    for(int i = 0; i <= 2; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    arrfunc(arr1, 3);
    for(int i = 0; i <= 2; i++){
        cout << arr1[i] << " ";
    }
    return 0;
}