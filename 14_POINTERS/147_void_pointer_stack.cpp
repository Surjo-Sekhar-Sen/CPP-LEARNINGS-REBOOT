#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int a = 20;
    int* iptr = &a; //THIS POINTS TO a!!
    void *vptr = &a; //THIS ALSO POINTS TO a!!
    //BUT....ONLY iptr CAN BE DIRECTLY USED TO CHANGE THE ACCESS THE VALUE OR CHANGE THE VALUE!!
    //BECAUSE IT IS ALREADY IN INTEGER DATATYPE!!
    // SINCE vptr IS IN void WE NEED TO CONVERT IT INTO INTEGER FIRST TO MAKE IT ACCESSIBLE!!
    cout << a << " " << &a << endl;
    cout << *iptr << " " << iptr << " " << &iptr << endl;
    // cout << *vptr << endl; //WILL THROWW ERROR!! NEEDS TYPECASTING!!
    cout << vptr << " " << &vptr << endl;

    int* iptr2 = static_cast<int*>(vptr);
    cout << iptr2 << " " << *iptr2 << " " << &iptr2 << endl;
    cout << (static_cast<int*>(vptr)) << " " << *(static_cast<int*>(vptr)) << endl;
    //HERE WE FIRST CONVERT IT TO INTEGER THEN USE IT!!
    return 0;
}