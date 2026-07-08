#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0] << " " << arr[4] << " ";
    cout << arr[10] << endl; //THIS WON'T SHOW AN ERROR LIKE IN PYTHON OR JAVA
    //AS INDEX OUT OF BOUND ERROR!!
    //IT WILL RETURN SOME GARBAGE VALUE, SO IT IS IMPORTANT TO KNOW
    //HOW TO CAREFULLY PRINT THE ELEMENTS NOT OUT OF INDEX BOUNDARY!!
    for(int i = 0; i <= 7; i++){
        cout << arr[i] << " "; //THIS WILL ALSO THROW ANY ERROR INSTEAD GIVE SOME 
        //GARBAGE VALUE WHEN OUT OF INDEX BOUNDARY!! 
    }
    return 0;
}