#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    void* ptr = new int;
    //INTEGER MEMORY IS ALLOCATED AND ADDRESS IS RETURNED TO A VOID POINTER!!
    //WE CANNOT ACCESS THE VALUE EVEN IF IT IS GARBAGE VALUE OR WE KNOW INTEGER GARBAGE!!
    //SO WE NEED TO CONVERT IT TO INTEGER FIRST THEN ONLY WE CAN USE IT!!
    cout << ptr << endl; //CAN RETURN ITS ADDRESS THOUGH!!
    int* iptr = static_cast<int*>(ptr);
    cout << iptr << " " << *iptr << endl;
    delete iptr;
    // delete ptr; //THIS IS NOT IMPORTANT AS FOR EMPTYING MEMORY FOR A VOID POINTER SHOULD 
    //BE DONE ONLY IF WE KNOW HOW MUCH MEMORY IS NEEDED TO DELETED OR FREED!!
    //IF WE USED malloc THEN THERE WOULDN'T HAVE BEEN ANY PROBLEM!!
    //AS WE DO SPECIFY HOW MUCH MEMORY TO BE USED LIKE -> void* vptr = malloc(20);
    iptr = nullptr;
    // ptr = nullptr;
    return 0;
}