#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main(){
    string str;
    cin >> str;
    cout << "1st string: " << str;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    cout << endl;
    
    string str2;
    getline(cin, str2);
    cout << "2nd string: " << str2;
    return 0;
}