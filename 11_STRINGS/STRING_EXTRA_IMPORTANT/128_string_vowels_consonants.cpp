#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void countvowcons(string str){
    bool isvowel = false;
    int length = str.length();
    int reallength = length;
    int conscount = 0;
    for(int i = 0; i <= (length-1); i++){
        if(str[i] == ' '){
            str.replace(i, 1, ""); //THIS IS A GREAT APPROACH TO REDUCE THE WHITE SPACES!!!
            //BUT DOING THIS MAY ALSO BE MORE TIME TAKING AS SHIFTING AND REMAKING THE STRING IS 
            //PLENTY OF HARD WORK FOR THE CPU!!
            reallength--;
            i--; //THIS IS NECESSARY FOR CASES LIKE "su rjo" IF THE WHITE SPACE IS REMOVED!!
            //THE POSITION OF r CHANGES TOO AND ALL OTHERS TOO!! SO THE INDEX NEEDS TO BE SHIFTED TOO!!
        }
    }
    int count = 0;
    char vowarrcap[6] = {'A', 'E', 'I', 'O', 'U', '\0'};
    char vowarr[6] = {'a', 'e', 'i', 'o', 'u', '\0'}; //COULD HAVE DONE WITH STRINGS BUT CHAR ARRAYS 
    //ARE FUN TOO!!
    for(int i = 0; i <= (reallength - 1); i++){
        for(int j = 0; j <= (5-1); j++){ //CONSIDERED (6-1) BUT \0 SHOULD NOT BE CHECKED!!
            if(str[i] == vowarr[j]){
                cout << "Found " << vowarr[j] << " at position: " << i+1 << endl;
                count++;
                isvowel = true; 
                break;
            }
            else if(str[i] == vowarrcap[j]){
                cout << "Found " << vowarrcap[j] << " at position: " << i+1 << endl;
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