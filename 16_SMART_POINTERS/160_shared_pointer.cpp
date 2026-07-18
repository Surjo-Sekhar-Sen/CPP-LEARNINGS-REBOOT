#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr <char>cptr = make_shared <char>('S');
    cout << (cptr.get()) << endl; //TO GET THE ADDRESS!!
    cout << *(cptr.get()) << endl; //TO THE GET THE VALUE!!

    cout << cptr.use_count() << endl; //use_count IS USED TO TELL HOW MANY POINTERS ARE SHARING THE SAME ADDRESS!!
  
    char ch = *(cptr.get());//WE CAN STORE THE VALUE IN A VARIABLE TOO!!
    if(ch == 'S'){
        shared_ptr <char>ccptr = cptr;
        *(ccptr.get()) = 'U';
        cout << (ccptr.get()) << " " << *(ccptr.get()) << endl;
        cout << ccptr.use_count() << endl; //SHARED POINTER ccptr HAS ACCESS, SO COUNT IS 2!!

        if(*(ccptr.get()) == 'U'){
            shared_ptr <char>cccptr = ccptr;
            cout << (cccptr.get()) << " " << *(cccptr.get()) << endl;
            cout << cccptr.use_count() << endl; //SHARED POINTER cccptr HAS ACCESS, SO COUNT IS 3!!
        }
        cout << cptr.use_count() << endl; //COUNT WILL BE 2!! YOU CAN WRITE cptr OR ccptr BOTH ARE IN COUNTS!!
    }
    cout << cptr.use_count() << endl; //COUNT WILL BE 1!!     
    shared_ptr <char>ccccptr = cptr; 
    cout << ccccptr.use_count() << " " << cptr.use_count() << endl; //WILL BE 2 FOR BOTH!!
    cout << *(cptr.get()) << endl; //WILL HAVE VALUE OF 'U' LAST CHANGED IN ccptr!!
    return 0; //NO NEED TO DE-ALLOCATE AS IT AUTOMATICALLY HAPPENS!!
}