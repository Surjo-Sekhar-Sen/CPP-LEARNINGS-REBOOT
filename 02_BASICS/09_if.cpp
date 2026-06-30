#include <iostream>
using namespace std;

int main(){
    int val = 21;
    //IF STATEMENTS DON'T ALLOW CONDITIONAL EXECUTION!!
    //AS ALL THE IF STATEMENTS ARE CHECKED!! AND EXECUTED!!
    //WHEREAS IF-ELSE, IF-ELSE IF-ELSE STATEMENTS ARE CHECKED 
    //AND ONLY ONE OF THEM IS EXECUTED!! 
    if(val > 20){
        cout << "Value is greater than 20!!" << endl;
    }
    if(val > 15){
        cout << "Value is greater than 15!!" << endl;
    }
    if(val > 10){
        cout << "Value is greater than 10!!" << endl;
    }

    return 0;
}