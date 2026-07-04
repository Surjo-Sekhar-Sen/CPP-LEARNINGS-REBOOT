#include <iostream>
#include <sstream>
#include <string>
using namespace std;
//VERY OLD TECHNIQUE!! USING sstream and stringstream!!
//IT WWAS USED WHEN THERE WAS NO to_string() FUNCTION!!
int main(){
    int num = 9905372;
    stringstream ss;
    ss << num;
    string str;
    ss >> str;

    cout << str << endl;
    cout << str.length();
    return 0;
}