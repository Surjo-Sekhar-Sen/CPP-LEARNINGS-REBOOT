#include <iostream>
using namespace std;

int main(){
    if(-23038){ //ANY VALUE RITTEN IN THE CONDITION IS CHECKED AS TRUE OR FALSE!!
        //VALUE WHICH IS NOT 0 (FALSY VALUE) IS A TRUTHY VALUE!!
        //EITHER THE VALUE IS NEGATIVE OR POSITIVE!!
        cout << "This is truthy value!!";
    }
    else if(200){
        cout << "This is also truthy value!!";
    }
    else if(0){
        cout << "This is falsy value!!";
    }
    else{
        cout << "Not execute!!";
    }

    if("hello") //HERE WE HAVE NOT USED {} BRACES!!
    //ALSO "hello" or any filled string value or char value IS TRUTHY VALUE!!
    // "" EMPTY STRING VALUE IS CONSIDERED AS FALSY!!
        cout << "Truthy value";
        cout << "Falsy value"; //THIS WILL ALSO BE EXECUTED AS WHEN WE WRITE
        //WITHOUT BRACES THEN THE FIRST LINE IS ONLY CONSIDERED AS INSIDE THE IF STATEMENT!!
    return 0;
}