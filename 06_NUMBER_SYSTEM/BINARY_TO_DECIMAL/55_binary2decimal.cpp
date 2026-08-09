#include <iostream>
#include <cmath>
using namespace std;
//BINARY TO DECIMAL USING BITWWISE OPERATION AND STRING!!

int main(){
    string strnum;
    cout << "Put any Binary Number: ";
    cin >> strnum;

    int decimalval = 0;
    int base = 1;

    int length = strnum.length();

    if(strnum == "0"){
        cout << "0";
        return 0;
    }

    for(int i = (length - 1); i >= 0; i--){
        int val = strnum[i] - int('0'); //IF VALUE IS 1 THEN -> (49-48 = 1 IN INTEGER FORM!!)
        //AND IF 0 THEN -> (48-48 = 0 IN INTEGER FORM!!)
        decimalval = decimalval + (val * base);
        base = base << 1;
    }
    cout << "The decimal value of the binary number is: ";
    cout << decimalval;
    return 0;
}