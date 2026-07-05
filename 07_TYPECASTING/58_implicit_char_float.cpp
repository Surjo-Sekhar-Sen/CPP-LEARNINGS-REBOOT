#include <iostream>
using namespace std;

int main(){
    //CHAR TO FLOAT
    char ch1 = 'A', ch2 = '0';
    float f1 = ch1;
    float f2 = ch2;
    cout << f1 << " " << f2 << "\n";

    //FLOAT TO CHAR
    float f3 = 48.17740;
    char ch3 = f3;
    cout << ch3 << "\n";
    cout << int(ch3);
    return 0;
}