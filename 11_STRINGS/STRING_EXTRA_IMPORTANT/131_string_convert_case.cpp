#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string upper2lowercase(string str){
    int length = str.length();
    string strref;
    for(int i = 0; i <= (length-1); i++){
        if(isalpha(str[i])){
            if(str[i] == ' '){
                strref.push_back(' ');
            }else{
                strref.push_back(str[i] - 'A' + 'a');
            }
        }
        else{
            strref.push_back(str[i]);
        }
    }
    return strref;
}

string lower2uppercase(string str){
    int length = str.length();
    string strref;
    for(int i = 0; i <= (length-1); i++){
        if(isalpha(str[i])){
            if(str[i]  == ' '){
                strref.push_back(' ');
            }
            else{
                strref.push_back(str[i] - 'a' + 'A');
            }
        }
        else{
            strref.push_back(str[i]);
        }  
    }
    return strref;
}

int main(){
    string strup;
    string strlow;
    cout << "Upper case word: ";
    getline(cin, strup);
    cout << "Lower case word: ";
    getline(cin, strlow);
    cout << "Upper to Lower: " << upper2lowercase(strup) << endl;
    cout << "Lower to Upper: " << lower2uppercase(strlow) << endl;
    return 0;
}