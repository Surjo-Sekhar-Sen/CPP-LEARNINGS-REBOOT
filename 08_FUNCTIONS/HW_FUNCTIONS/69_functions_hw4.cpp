#include <iostream>
using namespace std;
//FUNCTION TO SEE WHETHER SOMEONE IS ELIGIBLE TO VOTE OR NOT!!

void eligibility(int age){
    if(age > 18){
        cout << "Your are eligible!!";
        return;
    }
    cout << "You are not eligible!!";
    return;
}

int main(){
    int umar;
    cout << "Type your age: ";
    cin >> umar;

    eligibility(umar);
    return 0;
}