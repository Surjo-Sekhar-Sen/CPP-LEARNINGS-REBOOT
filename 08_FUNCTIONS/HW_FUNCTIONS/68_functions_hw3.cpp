#include <iostream>
using namespace std;
//FUNCTION TO PRINT PRIME NUMBERS BETWEEN ANY TWO NUMBERS!!

int primeNumbers(int n){
    if((n == 1) || (n == 0)){
        return false;
    }
    for(int i = 2; i <= (n-1); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int x, y;
    cout << "Put the Integer value from where you want to print: ";
    cin >> x;
    cout << "\n" << "Put the number till which you want to print: ";
    cin >> y;

    for(int i = x; i <= y; i++){
        if(primeNumbers(i) == true){
            cout << i << " ";
        }
    }
    return 0;
}