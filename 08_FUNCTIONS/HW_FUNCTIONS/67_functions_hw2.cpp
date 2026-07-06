#include <iostream>
using namespace std;
//FUNCTION TO PRINT SIMPLE INTEREST!!

int simpleinterest(float P, float R, float T){
    int simple = (P * R * T) / 100;
    return simple;
}

int main(){
    float p, r, t;
    cout << "Provide Principle value: ";
    cin >> p;
    cout << "\n" << "Provide Rate of Interest: ";
    cin >> r;
    cout << "\n" << "Provide Time: ";
    cin >> t;

    cout << "\n" << "The Simple Interest is: ";
    cout << simpleinterest(p, r, t);
    return 0;
}