#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int a = 56;
    int *iptr1 = &a;
    int b, c;
    int *iptr2 = &b;
    memcpy(iptr1, iptr2, sizeof(a));
    cout << b << " " << *iptr2 << endl;
    memcpy(&a, &c, sizeof(a));
    cout << c << " " << &c << *iptr2;
    return 0;
}