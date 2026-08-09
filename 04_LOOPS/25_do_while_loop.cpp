#include <iostream>
using namespace std;

int main(){
    int i = 10;
    do{
        cout << i << endl;
        i--;
    }while(i < 5); //DO-WHILE LOOP EXECUTES ONCE EVEN WHEN 
    //CONDITION IS FALSE!!
    return 0;
}