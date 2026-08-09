#include <iostream>
#include <memory> //WE NEED TO USE THIS HEADER FILE FOR ACCESSING THE SMART POINTERS!!
using namespace std;

int main(){
    //THERE IS A DIFFERENT OF MAKING SMART POINTERS!!
    //UNIQUE POINTER -> ONLY ONE VARIABLE CAN STORE THE ADDRESS OF THE MEMORY!!
    //IF YOU WANT TO CHANGE YOU NEED TO MOVE IT TO THE OTHER ONE!!
    unique_ptr<int>ptr = make_unique<int>(20); //ALLOCATES 20 AS VALUE FOR THE 4 BYTE OF INT!!
    *(ptr.get()) = 10; //CHANGED THE VALUE!! BUT BECAUSE POINTER SMART POINTERS STORE THE POINTER INSIDE
    //A CAPSULE TYPE IT NEEDS TO ACCESSED OR TAKEN OUT USING .get() FUNCTION!!
    cout << ptr.get() << " " << (*ptr.get()) << endl; 

    //FOR CHANGING THE POINTER VARIABLE!!
    // unique_ptr <int>ptr2 = ptr; //THIS IS NOT ALLOWED!!
    unique_ptr <int>ptr2 = move(ptr); //THIS MOVES THE ADDRESS FROM ptr TO ptr2!!
    //NOW ptr HAS nullptr AUTOMATICALLY AND ptr2 HAS THE VALUE!!
    cout << ptr2.get() << " " << (*ptr2.get()) << endl;
    cout << ptr.get() << endl; //WILL HAVE nullptr AS ADDRESS!!
    return 0; //WE DON'T EVEN NEED TO DELETE THE MEMORY IT GETS AUTOMATICALLY DE-ALLOCATED!! 
}