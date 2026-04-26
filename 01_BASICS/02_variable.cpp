#include <iostream>
using namespace std;

int main(){
    int age = 21;
    cout << "My age is: " << age << "\n";
    
    int value; //VARIABLE DECLARATION!!
    //IF WE TRY TO PRINT ITS VALUE, UNLIKE JS IT WON'T GIVE UNDEFINED!!
    //INSTEAD IT WILL GIVE A GARBAGE VALUE!!
    cout << value;

    int mark = 22; //THIS IS PROPER DEFINITION OF A VARIABLE!!
    cout << mark; 

    // int mark = 24; //THIS WILL THROW AN ERROR AS THIS IS NOT ALLOWED!!
    //RE-DECLARATION OF A VARIABLE IS NOT ALLOWED!!
    
    int val = 46;
    val = 56; //THIS IS CALLED UPDATION AND IS ALLOWED!!
    // int val = 56; THIS IS NOT ALLOWED AS IT IS RE-DECLARATION!!
    //WHICH MEANS THAT A DIFFERENT MEMORY BLOCK WILL BE ALLOCATED SAME NAME OF THE VARIABLE!!
    cout << val;
    return 0;
}