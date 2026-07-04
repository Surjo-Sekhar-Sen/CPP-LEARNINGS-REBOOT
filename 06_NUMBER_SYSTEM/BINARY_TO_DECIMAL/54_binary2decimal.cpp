#include <iostream>
#include <cmath>
using namespace std;
//WITHOUT FINDING LENGTH!!

int main(){
    int num, rem;
    int decimalval = 0;
    cout << "Put any Binary Number: ";
    cin >> num;

    int i = 0;
    if(num == 0){
        cout << 0;
        return 0;
    }

    while(num != 0){
        rem = num % 10;
        num = num / 10;
        decimalval = decimalval + (rem * round(pow(2, i++)));
    }
    cout << "The decimal value of the binary number is: ";
    cout << decimalval;
    return 0;
}