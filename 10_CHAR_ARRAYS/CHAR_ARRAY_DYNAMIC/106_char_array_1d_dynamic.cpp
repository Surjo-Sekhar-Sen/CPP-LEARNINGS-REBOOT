#include <iostream>
using namespace std;
//USING GETLINE!! NOT NECESSARY JUST USE STRING INSTEAD!!

int main(){
    char name[100];
    cout << "Enter your full name: ";
    cin.getline(name, 100); //FOR NON-OBJECT OR NOT STRING ->
    //getline IS A FUNCTION INSIDE cin AND HAVE TO USED THIS WAY!!

    //FOR string, getline IS PRESENT IN IT'S std NAMESPACE ITSELF!! 
    cout << "Your full name: " << name;
    return 0;
}