#include <iostream>
#include <string>
using namespace std;
//NEW METHOD USING to_string() FUNCTION STANDARD TOOL and
//.length() FUNCTION TO FIND LENGTH OF THE STRING!!

int main(){
    int num = 23432;
    string str = to_string(num);
    cout << str << endl;
    cout << str.length();
    return 0;
}