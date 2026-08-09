#include <iostream>
#include <string>
using namespace std;

void reversestring(string str){
    int start = 0;
    int end = (str.length() - 1);
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << str;
    return;
}

int main(){
    string str1 = "Surjo";
    reversestring(str1);
    return 0;
}