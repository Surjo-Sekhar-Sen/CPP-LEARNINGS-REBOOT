#include <iostream>
using namespace std;

int main(){
    char CH;
    cout << "Enter the upper case character you want to convert to lower case: ";
    cin >> CH;

    char ch = CH - 'A' + 'a';
    cout << "Your character was: " << CH << ", it's lower case is: ";
    cout << ch;
    return 0;
}