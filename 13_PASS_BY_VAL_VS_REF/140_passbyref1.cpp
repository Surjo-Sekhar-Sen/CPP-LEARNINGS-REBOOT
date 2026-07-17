#include <iostream>
#include <string>
using namespace std;

void change(string &str, int &value){ //PASS BY REFERENCE!!
    //IT TAKES THE ACTUAL VALUE AS WE PASS
    //A REFERENCE VARIABLE OF THE SAME ORIGINAL VARIABLE CREATED!! 
    //WE WILL SEE A CHANGE IN THE ACTUAL ORIGINAL VALUES TOO!!
    cout << value << " " << str << endl;
    value++;
    str[2] = 't';
    cout << value << " " << str << endl;
    return;
}

int main(){
    int a = 2;
    string str1 = "Surjo";
    change(str1, a);
    cout << a << " " << str1 << endl;
    return 0;
}