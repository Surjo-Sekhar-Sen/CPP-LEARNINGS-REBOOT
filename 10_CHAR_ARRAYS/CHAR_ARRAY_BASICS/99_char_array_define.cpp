#include <iostream>
using namespace std;

int main(){
    char arr[6] = {'s', 'u', 'r', 'j', 'o', '\0'}; //\0 IS ESSENTIAL FOR PRINTING 
    //CHAR ARRAY WITHOUT ANY LOOP!!
    //IF YOU WANT TO PRINT IT WITH LOOP THEN \0 ISN'T NECESSARY!!
    cout << arr[0] << " "; //GIVES FIRST ELEMENT!!
    cout << arr[5] << " "; //GIVES NULL VALUE!! IF U CHANGE IT TO INTEGER THEN YOU WILL SEE 0!!
    cout << int(arr[5]) << " ";
    cout << arr << endl; //PRINTS FULL ARRAY WITHOUT LOOP!!

    //WITH LOOP
    char arr2[4] = {'g', 'o', 'a', 'l'};
    for(int i = 0; i <= 3; i++){
        cout << arr2[i] << " ";
    }
    return 0;
}