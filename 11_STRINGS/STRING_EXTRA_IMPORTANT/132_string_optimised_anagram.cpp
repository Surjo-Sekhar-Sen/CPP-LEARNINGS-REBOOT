#include <iostream>
#include <string>
#include <limits>
using namespace std;

string upper2lowercase(string str){
    int length = str.length();
    for(int i = 0; i <= (length-1); i++){
        if(str[i] == ' '){
            continue;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            continue;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - 'A' + 'a';
        }
        else{
            continue;
        }
    }
    return str;
}

int reallengthfunc(string str){
    int length = str.length();
    int reallength = 0;
    for(int i = 0; i <= (length-1); i++){
        if(str[i] == ' '){
            continue;
        }
        reallength++;
    }
    return reallength;
}
void anagram(string strr1, string strr2){
    int length1 = strr1.length();
    int length2 = strr2.length();
    int count = 0;
    int reallength1 = reallengthfunc(strr1);
    int reallength2 = reallengthfunc(strr2);
    int refcount;
    if(reallength1 == reallength2){
        for(int i = 0; i <= (length1-1); i++){
            refcount = count;
            if(strr1[i] == ' '){
                strr1[i] = char(0);
                continue;
            }
            for(int j = 0; j <= (length2-1); j++){
                if(strr2[j] == ' '){
                    strr2[j] = char(0);
                    continue;
                } 
                else if(strr1[i] == strr2[j]){
                    cout << "Found letter " << strr1[i] << " at position: " << j+1 << " of your check sentence!!" << endl;
                    strr2[j] = char(0);
                    count++;
                    break;
                }
                else{
                    continue;
                }
            }
            if(count == refcount){
                cout << "Did not find any letter matching with " << strr1[i] << " in your expected anagram!!" << endl;
                cout << "Therefore it is not an anagram!!" << endl;
                break;
            }
        }
        if((count-1) == (reallength1 - 1)){
                cout << "Your sentence is an anagram!!" << endl;
        }
    }
    else{
        cout << "The length of both the sentences don't match!!" << endl;
        cout << "Therefore it is not an anagram!!" << endl;
    }
        return;
}

int main(){
    string str1, str2;
    cout << "Enter you valid sentence: ";
    getline(cin, str1);

    cout << "Enter your sentence to check for anagram: ";
    getline(cin, str2);
    string strreal1 = upper2lowercase(str1);
    string strreal2 = upper2lowercase(str2);
    // cout << str1 << " " << str2 << endl;
    // cout << strreal1 << " " << strreal2;
    anagram(strreal1, strreal2);
    return 0;
}