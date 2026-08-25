#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int countval(string str){
    int count = 0;
    for(int i = 0; i <= (str.length() - 1); i++){
        if(str[i] == ' '){
            continue;
        }
        count++;
    }
    return count;
}

string up2low(string str){
    for(int i = 0; i <= (str.length() - 1); i++){
        if(isalpha(str[i]) != false){
            if((str[i] >= 'A') && (str[i] <= 'Z')){
                str[i] = str[i] - 'A' + 'a';
            }
        }
    }
    return str;
}

string checkanagram(string str1, string str2){
    int realposition1 = 0;
    bool valfound = true;
    int totalcount1 = countval(str1);
    int totalcount2 = countval(str2);
    int count1 = 0;
    int count2 = 0;

    if(totalcount1 != totalcount2){
        cout << "The number of characters are not same!!" << endl;
        return "The string is not an anagram!!";
    }

    for(int i = 0; i <= (str1.length() - 1); i++){
        if(str1[i] == ' '){
            continue;
        }
        realposition1++;
        int realposition2 = 0;
        valfound = false;
        count1++;

        for(int j = 0; j <= (str2.length() - 1); j++){
            if(str2[j] == ' '){
                continue;
            }
            realposition2++;

            if(str1[i] == str2[j]){
                cout << "Value: " << str1[i] << " at "<<  realposition1 << " in main string,found at: " << realposition2 << " in anagram string!!" << endl;
                valfound = true;
                str2[j] = '\0';
                count2++;
                break;
            }
        }
        if(valfound == false){
            cout << str1[i] << " cannot be found!!" << endl;
            return "The string is not an anagram!!";
        }
    }
    if((valfound == true) && (count1 == totalcount1) && (count2 == totalcount2)){
        return "Your string is an anagram!!";
    }
    else{
        return "Not an anagram!!";
    }
}


int main(){
    string strmain;
    cout << "Give main string for which anagram is to be checked: ";
    getline(cin, strmain);

    string strcheck;
    cout << "Give the string to check for anagram: ";
    getline(cin, strcheck);

    string strmain1 = up2low(strmain);
    string strcheck1 = up2low(strcheck);
    string str = checkanagram(strmain1, strcheck1);
    cout << str;
    
    return 0;
}