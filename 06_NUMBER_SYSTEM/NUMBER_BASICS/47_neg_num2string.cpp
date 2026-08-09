#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//THE PROBLEM WITH NEGATIVE NUMBERS IS THAT
//THEY HAVE - SIGN WHICH CAN ALSO BE CONSIDERED AS A CHARACTER
//BY to_string() FUNCTION THATSWHY WE NEED TO CONVERT THE VALUE
//TO ITS ABSOLUTE FORM!!

int main(){
    int num = -125472;
    string str = to_string(abs(num));
    cout << str << endl;
    cout << str.length();
    return 0;
}