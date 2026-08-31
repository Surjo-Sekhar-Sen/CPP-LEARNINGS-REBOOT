#include <iostream>
using namespace std;

void floor(float num){
    int result = num;
    cout << result << endl;
}

void ceil(float num){
    int result = num + 1;
    cout << result << endl;
}

void round(float num){
    if((num-int(num)) > 0.5){
        ceil(num);
    }
    else{
        floor(num);
    }
}

int main(){
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int op;
    cout << "What operation would you like to perform: \n";
    cout << "(1). floor, (2). ceil, (3). round!! ";
    cin >> op;

    if(op == 1){
        floor(a/b);
    }
    else if(op == 2){
        ceil(a/b);
    }
    else if(op == 3){
        round(a/b);
    }
    else{
        cout << "No operations for this value!!";
    }
    return 0;
}