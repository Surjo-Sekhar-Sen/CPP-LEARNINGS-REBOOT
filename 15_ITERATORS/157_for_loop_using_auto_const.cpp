#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    for(auto x : arr){//USING auto IS MEANS WE DON'T NEED TO DECIDE THE DATATYPE!!
        //USING JUST x MEANS IT BASICALLY MAKES A VARIABLE x SEPERATELY WHERE IT COPIES THE ARRAY'S
        //VARIABLE AT THAT ADDRESS AND SHOWS IT!! SO, IT MEANS WHATEVER WE CHANGE INSIDE THIS LOOP
        //WILL NOT AFFECT THE MAIN ARRAY!! 
        if((&x - arr) == 2){//THIS WILL NOT AFFECT THE ORIGINAL ARRAY VALUE!!
            //HERE WE ARE TRYING TO ACCESS THE 3nd ELEMENT OF THE ARRAY AND CHANGE IT'S VALUE!! 
            x = 20;
        }
        cout << x << " ";
    }
    cout << endl;

    for(auto &x : arr){//THIS WILL ALLOW TO CHANGE THE VALUE OF ARRAY ELEMENTS!!
        //AS WE GIVE THE REFERENCE OF IT'S ORIGINAL ARRAY ELEMENT!!
        if((&x - arr) == 2){
            x = 20;
        }
        cout << x << " ";
    }
    cout << endl;
    
    for(const auto &x : arr){//HERE WE EXPLICITELY TELL THAT WE DON'T ALLOW ANY CHANGE INSIDE THE ARRAY ELEMENTS!!
        //AS WE ARE USING const KEYWORD!!
        //BUT WE ARE STILL GIVING THE ACCESS TO THE REAL ARRAY, MAYBE TO PRINT ITS ADDRESS AND INDEX CORRECTLY!!
        if((&x - arr) == 2){
            // x = 2;//NOT ALLOWED AND THROW COMPILER ERROR
        }
        cout << x << " "; 
    }
    return 0;
}