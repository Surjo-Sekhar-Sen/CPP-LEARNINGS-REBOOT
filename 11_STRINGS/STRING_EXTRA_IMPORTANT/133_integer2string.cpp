#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main(){
    //INTEGER TO STRING!!
    int a = 2343;
    int b = 1263;
    int c = -1626;

    //USING OLD METHOD!!
    string str1;
    stringstream ss;
    ss << a;
    ss >> str1;
    cout << "Using stringstream the string we get: " << str1 << endl;

    //NEW METHOD!!
    string str2 = to_string(b);
    cout << "Using to_string the string we get: " << str2 << endl;

    string str3 = to_string(c); //NEGATIVE NUMBERS MUST BE CONVERTED TO THEIR ABSOLUTE FOR LENGTH!!
    //VALUE TO BE CONVERTED TO STRING SO THAT THE - CHARACTER DOESNOT GET CHANGED!!
    cout << "Using to_string the negative number string is: " << str3 << endl;
    string str4 = to_string(abs(c));
    cout << "The length of the number string: " << str4.length();
    return 0;
}