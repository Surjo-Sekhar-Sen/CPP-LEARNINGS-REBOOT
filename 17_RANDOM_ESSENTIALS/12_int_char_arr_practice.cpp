#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>
using namespace std;

int count(int num){
    int count = 0;

    while(num != 0){
        num = abs(num) / 10;
        count++;
    }
    return count;
}

int inttochararr(int num){
    int countval = count(num);
    int rem;
    char* arr = new char[countval+2];

    if(num > 0){
        for(int i = ((countval+2)-2); i >= 0; i--){
            if(i == ((countval+2)-2)){
                arr[i] = '\0';
                continue;
            }
            rem = abs(num) % 10;
            num = num / 10;
            arr[i] = rem + '0';
        }
    }

    else{
        for(int i = ((countval+2)-1); i >= 0; i--){
            if(i == ((countval+2)-1)){
                arr[i] = '\0';
                continue;
            }
            rem = abs(num) % 10;
            num = num / 10;
            arr[i] = rem + '0';

            if(i == 0){
                arr[i] = '-';
            }
        }
    }
    cout << "The char array you get from your number: ";
    cout << arr << endl;
    return 0;
}

int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    
    inttochararr(n);
    return 0;
}