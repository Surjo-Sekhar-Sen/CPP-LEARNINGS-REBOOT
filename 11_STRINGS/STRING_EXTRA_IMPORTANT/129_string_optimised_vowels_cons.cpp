#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void countvowcons(string str){
    int length = str.length();
    bool isvowel = false;
    int realposition = 0;
    int count = 0;
    int conscount = 0;

    char vowarr[6] = {'a', 'e', 'i', 'o', 'u', '\0'};
    char vowarrcap[6] = {'A', 'E', 'I', 'O', 'U', '\0'};
    for(int i = 0; i <= (length-1); i++){
        if(str[i] == ' '){
            continue;
        }
        realposition++;
        for(int j = 0; j <= (5-1); j++){
            if(str[i] == vowarr[j]){
                cout << "Found " << vowarr[j] << " at position: " << realposition << endl;
                count++;
                isvowel = true; 
                break;
            }
            else if(str[i] == vowarrcap[j]){
                cout << "Found " << vowarrcap[j] << " at position: " << realposition << endl;
                count++;
                isvowel = true;
                break;
            }
        }
        if(!isvowel && isalpha(str[i])){
            conscount++;
            }
    }
    cout << "Total number of vowwels in your string: " << count << endl;
    cout << "Total number of consonants in your string: " << conscount << endl;
    return;
}

int main(){
    string str1;
    cout << "Enter your string you for which you want to count vowels and consonants: ";
    getline(cin, str1);
    countvowcons(str1);
    return 0;
}