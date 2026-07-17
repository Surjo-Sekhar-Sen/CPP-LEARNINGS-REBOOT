#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isnumval(string str){
    int length = str.length();
    for(int i = 0; i <= (length-1); i++){
        if(str[i] == '-'){
            if(i == 0){
                if(length == 2){
                    return false;
                }
                else{
                    continue;
                }
            }
            else{
                return false;
            }
        }
        else if(str[i] >= 48 && str[i] <= 57){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
} 

int string2int(string str){
    int length = str.length();
    int num = 0;
    int j = 0;
    for(int i = (length-1); i >= 0; i--){
        if(str[i] == '-'){
            num = -num;
        }
        else{
            int digit = str[i] - '0';
            num = digit * round(pow(10, j++)) + num;
        } 
    }
    return num;
}

void check(string numstr1){
    if(isnumval(numstr1) == true){
        int value = string2int(numstr1);
        cout << "Your number: " << value << endl;
    }
    else{
        cout << "You have put a wrong string to be converted to a number!!" << endl;
        cout << "Put your string of integer again: ";
        cin >> numstr1;
        check(numstr1);
    }
    return;
}
int main(){
    string numstr;
    cout << "Enter any string of integer: ";
    cin >> numstr;
    check(numstr);
    return 0;
}