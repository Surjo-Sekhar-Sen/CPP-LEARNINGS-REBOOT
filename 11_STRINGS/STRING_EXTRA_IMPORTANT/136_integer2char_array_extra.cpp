#include <iostream>
#include <string>
using namespace std;

int countnum(int num){
    int rem;
    int count = 0;
    while(num != 0){
        rem = num % 10;
        num = num / 10;
        count++;
    }
    return count;
}

bool negval(int num){
    if((num / -1) == abs(num)){ //IT IS NEGATIVE!!
        return true;
    }
    else{
        return false; //IT IS POSITIVE!!
    }
}

int main(){
    int num1, rem;
    cout << "Enter your number: ";
    cin >> num1;
    int lengthnum = countnum(num1);
    if(num1 == 0){ //EXTRA IMPROVEMENT FOR CASE WHERE USER PUT 0!!
        char* arr = new char[2];
        arr[1] = '\0';
        arr[0] = '0';
        cout << "Your number in char array: " << arr << endl;
        delete[] arr;
    }
    if(negval(num1) != true){
        char* arr = new char[lengthnum + 1]; //INITIALISED EXTRA BLOCK FOR NULL SIGN!!
        for(int i = (lengthnum); i >= 0; i--){
            if(i == lengthnum){
                arr[i] = '\0';
                continue;
            }
            rem = num1 % 10;
            num1 = num1 / 10;
            arr[i] = char(rem +'0');   
        }
        cout << "Your number in char array: " << arr << endl;
        delete[] arr;
    }
    else{
        char* arr = new char[lengthnum + 2]; //INITIALISED EXTRA BLOCK FOR NEGATIVE AND NULL SIGNS!!
        for(int i = (lengthnum+1); i >= 0; i--){
            if(i == (lengthnum+1)){
                arr[i] = '\0';
                continue;
            }
            else if(i == 0){
                arr[i] = '-';
                continue;
            }
            else{
                rem = abs(num1) % 10;
                num1 = abs(num1) / 10;
                arr[i] = char(rem + '0');
            }
        }
        cout << "Your number in char array: " << arr << endl;
        delete[] arr;
    }
    return 0;
}