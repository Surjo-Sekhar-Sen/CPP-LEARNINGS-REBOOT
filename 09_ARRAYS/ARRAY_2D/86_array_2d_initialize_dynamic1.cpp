#include <iostream>
using namespace std;
//THIS IS HERE DURING THE COMPILE TIME THE CPU KNOWS ABOUT THE NUMBER OF COLUMNS!!

int main(){
    int n;
    cout << "Enter the number of rows in the array: ";
    cin >> n;
    // POINTER TO AN ARRAY -> * HAS MORE PRECEDENECE THAN [] SO IT MAINLY MEANS IT POINTS TO 
    // ARRAY WITH 3 INTEGERS!!
    
    int (*arr)[3] = new int[n][3]; //THIS IS A WAY TO DYNAMICALLY ALLOCATE 
    //BUT HERE WE GIVE THE COLUMN NUMBER, THAT IS IT IS FIXED!!

    for(int i = 0; i <= (n-1); i++){
        for(int j  = 0; j <= (3-1); j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i <= (n-1); i++){
        for(int j = 0; j <= (3-1); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}