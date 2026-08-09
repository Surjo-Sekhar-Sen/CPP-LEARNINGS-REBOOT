#include <iostream>
using namespace std;

void printName(); //DECLARING THE FUNCTION SO THAT THE COMPILER CAN RECOGNISE 
//IT IS SOMEWHERE IN THE WHOLE CODE!!

int main(){
    printName(); //IF WE HAVE DEFINED THE FUNCTION AFTER THE MAIN FUNCTION
    //THEN WE NEED TO DECLARE IT EARLIER SOMEWHERE BEFORE USING IT!!
    return 0;
}

void printName(){
    cout << "Hello EVERYONE!! Surjo Here!!";
    return;
}