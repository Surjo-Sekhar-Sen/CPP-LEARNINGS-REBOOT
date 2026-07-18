#include <iostream>
#include <memory>
using namespace std;

int main(){
    int a = 10, b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;
    ptr1 = ptr2;
    ptr2 = ptr1;
    *ptr1 = 20;
    *ptr2 = 30;
    cout << ptr1 << " " << ptr2 << endl;
    cout << *ptr1 << " " << *ptr2 << endl;
    return 0;
}