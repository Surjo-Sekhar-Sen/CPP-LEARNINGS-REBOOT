#include <iostream>
#include <cmath>
using namespace std;
//FUNCTION TO GIVE THE SIP!!

double sip(float P, float R, float T){
    double r, t;
    r = (R / (12 * 100));
    t = (T * 12);
    double sipval = (P * ((pow(1 + r, t) - 1) / r) * (1 + r));
    return sipval;
}

int main(){
    double p, r, t;
    cout << "Put Principle value monthly: ";
    cin >> p;
    cout << "\n" << "Put Rate of interest yearly: ";
    cin >> r;
    cout << "\n" << "Put time in years: ";
    cin >> t;

    double sipvalue = sip(p, r, t);
    cout << "The SIP Value: " << sipvalue;
    return 0;
}