#include <iostream>
using namespace std;

int main(){
    char arrbhosda[7] = {'N', 'e', 'e', 'l', 'e', 's', 'h'}; //\0 IS ESSENTIAL FOR PRINTING 
    //CHAR ARRAY WITHOUT ANY LOOP!!
    //IF YOU WANT TO PRINT IT WITH LOOP THEN \0 ISN'T NECESSARY!!
    cout << arrbhosda[0] << " "; //GIVES FIRST ELEMENT!!
    cout << arrbhosda[5] << " "; //GIVES NULL VALUE!! IF U CHANGE IT TO INTEGER THEN YOU WILL SEE 0!!
    cout << int(arrbhosda[5]) << " ";
    cout << arrbhosda << endl; //PRINTS FULL ARRAY WITHOUT LOOP!!

    //WITH LOOP
    char arr2[4] = {'g', 'o', 'a', 'l'};
    for(int i = 0; i <= 3; i++){
        cout << arr2[i] << " ";
    }
    return 0;
}