#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Give any character you want to convert to upper case: ";
    cin >> ch;

    char CH = ch - 'a' + 'A';
    cout << "Your character was: " << ch << ", it's upper case is: ";
    cout << CH;
    return 0;
}