#include <iostream>
#include <string>
using namespace std;

int getSum(int x, int y){
    int sum = x + y;
    return sum;
}

void nameMultiple(string name){
    cout << "Name is: " << name;
    return; //WE CAN WRITE RETURN HERE BUT CANNOT PUT ANYTHING IN IT!!
}

int table(int num){
    for(int i = 1; i <= 10; i++){
        cout << num * i << " ";
    }
    return 0;
}

int main(){
    int val = getSum(5, 10);
    cout << val << endl;
    nameMultiple("Surjo");
    cout << endl;
    table(7);
    return 0;
}