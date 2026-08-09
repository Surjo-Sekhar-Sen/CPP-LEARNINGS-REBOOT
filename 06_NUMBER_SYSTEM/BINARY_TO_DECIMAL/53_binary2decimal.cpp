#include <iostream>
using namespace std;

int main(){
    int num;
    int lengthval(int numb);
    
    cout << "Put any Binary Number: ";
    cin >> num;

    cout << "Total length of the number you gave is: ";
    int len = lengthval(num);
    cout << len;

    int decimalval = 0;
    int base = 1;

    for(int i = 1; i <= len; i++){
        int rem = num % 10;
        num = num / 10;
        decimalval  = decimalval + (rem*base);
        base = base * 2;
    }
    cout << "The decimal value of the binary value is: ";
    cout << decimalval;
    return 0;
}

int lengthval(int numb){

    int length = 0;

    if(numb == 0){
        length = 1;
    }
    while(numb != 0){
        numb = numb / 10;
        length++;
    }
    return length;
}