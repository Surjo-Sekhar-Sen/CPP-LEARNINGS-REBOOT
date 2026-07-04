#include <iostream>
#include <cmath>
using namespace std;
//DECIMAL TO BINARY USING THE BEST WAY!!
//USING BITISE METHOD -> USING >> AND &!!

int main(){
    int num, rem;
    int binaryval = 0;
    cout << "Put an Integer Number: ";
    cin >> num;

    if(num == 0){
        cout << "0";
        return 0;
    }

    for(int i = 0; i <= 31; i++){
        if((num >> i) == 0){  // >> HAS MORE PRECEDENCE THAN ==
            break;
        }
        rem = (num >> i) & 1;
        binaryval = rem * round(pow(10, i)) + binaryval; //POW RETURNS DOUBLE THATSHY 
        //IT CAN SOMETIMES GIVE 99.999 OR SOMETHING LIKE THAT!! WHAT THE HELL!!
        //SO THIS CODE GIVES CORRECT ANSWER FOR EVEN INTEGERS!!
    }

    cout << "The binary value of the decimal number is: ";
    cout << binaryval;
    return 0;
}