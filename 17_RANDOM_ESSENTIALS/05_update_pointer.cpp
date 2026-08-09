#include <iostream>
using namespace std;

void update(int* p){
    int a = 20;
    cout << &a << endl;
    p = &a;
    (*p) = (*p) * (*p);
}

int main(){
    int a = 20;
    cout << &a << endl;
    update(&a);
    cout << a << endl;
    return 0;
}