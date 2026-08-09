#include <iostream>
using namespace std;

int main(){
    int a = 20;
    int *ptr = &a;
    cout << a << " " << &a << endl;
    cout << *ptr << " " << ptr << endl;
    cout << &ptr << endl;

    int* p = new int;
    *p = 50;
    cout << *p << endl;
    delete p;
    p = nullptr;
    cout << p << endl;
    return 0;
}