#include <iostream>
#include <string>
using namespace std;

void anagram(string strr1, string strr2){
    int length1 = strr1.length();
    int length2 = strr2.length();
    int count = 0;
    if(length1 == length2){
        for(int i = 0; i <= (length1-1); i++){
            int refcount = count;
            for(int j = 0; j <= (length2-1); j++){ //AND CHANGING THE VALUE OF j = count FOR USING THE REPLACE LOGIC!!
                if(strr1[i] == strr2[j]){
                    cout << "Found letter of " << strr2[j] << " at: " << j+1 << " position in your sentence!!"<< endl;
                    // swap(strr2[j], strr2[count]); //IF WE USE SWAP THEN WE WON'T GET THE CORRECT j VALUE IN THE OUTPUT
                    //BECAUSE WE ARE SWAPPING, SO INDTEAD OF THAT WE CAN REPLACE THE FOUND VALUE WITH . OR ANY CHARACTER!!
                    strr2[j] = '#';
                    count++;
                    break;
                }
                else{
                    continue;
                }
            }
            if((count) == refcount){
                cout << "Did not find any letter matching with " << strr1[i] << " in your expected anagram!!" << endl;
                cout << "Therefore it is not an anagram!!" << endl;
                break;
            }
        }
        if((count-1) == (length1 - 1)){
            cout << "Your sentence is an anagram!!";
        }
    }
    else{
        cout << "The length of both the sentences don't match!!" << endl;  //FOR ONE WORD THIS IS FINE!!
        //BUT FOR WORDS LIKE DORMITORY AND DIRTY BAG WHERE LENGTHS ARE DIFFERENT IT WON'T WORK!! 
        //ONLY IF YOU REMOVE THE SPACES THEN IT FINE!!
        cout << "Therefore it is not an anagram!!" << endl;
    }
    return;
}

int main(){
    string str1, str2;
    cout << "Enter your valid sentence: ";
    getline(cin, str1);
    cout << "Enter your sentence to check for anagram: ";
    getline(cin, str2);
    anagram(str1, str2);
    return 0;
}