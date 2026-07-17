#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 20;
    cout << "Numbers before swapping: ";
    cout << a << " " << b << endl;
    a = a + b; //THIS LOGIC IS GOOD BUT HAS ONE PROBLEM WHEN NUMBERS ARE VERY BIG!!
    b = a - b; //IF THE NUMBERS ARE ADDED AND EXCEEDS TO CROOS OUT OF BOUND POINTS!!
    a = a - b; //THEN IT MAY CREATE UNNECESSARY PROBLEMS!!
    cout << "Numbers after swapping: ";
    cout << a << " " << b << endl;
    return 0;
}