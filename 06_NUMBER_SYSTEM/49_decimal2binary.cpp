#include <iostream>
#include <string>
using namespace std;
//THIS IS NON-OPTIMISED WAY BCOZ val = to_string(rem) + val;
//IS ACTUALLY A GREAT STEP BUT BCOZ OF LOOP IT IS REINITIALISED 
//AGAIN AND AGAIN, SO EVERYTIME NEW VARIABLE IS CREATED!!
//WHICH SLOWS DOWWN THE SYSTEM!!

int main(){
    int num, rem;
    string val = " ";
    cout << "Give any integer number: ";
    cin >> num;

    if(num == 0){
        val = "0";
        cout << val;
    }

    while(num != 0){
        rem = num % 2;
        num = num / 2;
        val = to_string(rem) + val;
    }
    cout << val;
    return 0;
}