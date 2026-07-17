#include <iostream>
#include <string>
#include <limits>
using namespace std;

void anagram(string strr1, string strr2){
    int length1 = strr1.length();
    int length2 = strr2.length();
    int count = 0;
    int refcount;
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
    if((count-1) == (length1 - 1)){
            cout << "Your sentence is an anagram!!" << endl;
    }
    return;
}


int main(){
    string str1, str2;
    cout << "Enter you valid sentence: ";
    getline(cin, str1);

    cout << "Enter your sentence to check for anagram: ";
    getline(cin, str2);

    anagram(str1, str2);
    return 0;
}