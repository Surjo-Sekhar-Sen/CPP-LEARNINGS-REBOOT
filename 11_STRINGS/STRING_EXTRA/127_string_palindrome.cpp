#include <iostream>
#include <string>
using namespace std;

string reversestring(string str){
    int start = 0;
    int end = (str.length() - 1);
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << "String after reversing: " << str << endl;
    return str;
}

void palindromecheck(string strr1, string strr2){
    if(strr1 == strr2){
        cout << "Both the strings are equal and are apalindrome!!" << endl;
    }
    else{
        cout << "Both the strings are unequal and are not a palindrome!!" << endl;
    }
    return;
}
int main(){
    string str1;
    cout << "Enter your string you want to check for a palindrome: ";
    cin >> str1;
    cout << "String before reversing: " << str1 << endl;
    string str2 = reversestring(str1);
    palindromecheck(str1, str2);
    return 0;
}