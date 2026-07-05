#include <iostream>
using namespace std;

int main(){
    //IMPLICIT TYPECASTING WORKS MAINLY FOR SMALLER TO BIGGER DATATYPE!!
    //LIKE CHAR -> SHORT INT -> INT -> LONG -> FLOAT -> DOUBLE!!
    //STRING IS NOT A DATATYPE, IT'S AN OBJECT!!

    //BUT IF YOU ARE CHANGING FROM BIGGER TO SMALLER YOU NEED TO BE AWARE
    //OF THE SIZE THE SMALLER ONE CAN STORE IN IT!!

    //INT TO CHAR, BUT REMEMBER CHAR CAN ONLY STORE TILL 
    //-128 TO 127 IN SIGNED(DEFAULT) AND 0 TO 255 IN UNSIGNED!!
    //SO IF YOU EXCEED ANY VALUE WHICH IT CANNOT STORE THERE WILL BE OVERFLOW!!
    int n1 = 65, n2 = 130, n3 = 300, n6 = -126, n7 = 44;
    char ch1 = n1;
    char ch2 = n2;
    char ch3 = n3;
    char ch8 = n6;
    char ch9 = n7;
    cout << ch1 << " " << ch2 << " " << ch8 << " " << ch3 << " " << ch9 << "\n";

    //CHAR TO INT
    char ch4 = 'S', ch5 = '9';
    char ch6 = 66, ch7 = 0, ch10 = 48; //IMPLICIT INT TO CHAR CONVERSION!!
    int n4 = ch4;
    int n5 = ch5;
    cout << ch6 << " " << ch7 << " " << ch10 << endl;
    cout << n4 << " " << n5 << "\n";

    int result1 = ch4 + 1;
    char result2 = ch4 + 1;
    cout << result1 << " " << result2 << "\n";
    return 0;
}