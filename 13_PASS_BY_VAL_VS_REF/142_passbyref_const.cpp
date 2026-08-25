#include <iostream>
using namespace std;

void nochanges(const int &value){
    // value = 1; //THIS WILL THROW AND ERROR AS WE HAVE USED CONST
    //WHICH MAKES IT INEDITABLE!!
    cout << value << endl;
    return;
}
int main(){
    int a = 5;
    cout << a << endl;;
    nochanges(a);
    cout << a << endl;
    return 0;
}