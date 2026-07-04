#include <iostream>
#include <cmath>
using namespace std;
//USING THIS METHOD WE DON'T USE STRING OBJECT!!

int main(){
    int num, rem;
    int binaryval = 0;
    int i = 0;
    cout << "Put an Integer Number: ";
    cin >> num;

    if(num == 0){
        cout << "0";
        return 0;
    }
    while(num != 0){
        rem = num % 2;
        num = num / 2;
        binaryval = rem * pow(10, i++) + binaryval;
    }
    
    cout << "The binary value of the decimal number is: ";
    cout << binaryval;
    return 0;
}