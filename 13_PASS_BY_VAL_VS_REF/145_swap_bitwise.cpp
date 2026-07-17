#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 20;
    cout << "Numbers before swapping: ";
    cout << a << " " << b << endl;
    a = a ^ b; //THIS BITWISE LOGIC IS THE MOST EFFICIENT WAY!!
    b = a ^ b;//NO EXTRA VARIABLE IS NEEDED ANY CREATION!!
    a = a ^ b;//AND ALSO THE OUT OF BOUND PROBLEM WITH ADD SUB METHOD ALSO IS AVOIDED!!
    cout << "Numbers after swapping: ";
    cout << a << " " << b << endl;
    return 0; 
}