#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Surjo";
    string str2 = "surjo";
    string str3 = "Surjo";
    if(str1.compare(str2) == 0){ //THIS TYPE OF COMPARISON ALSO WORKS 
        //IT IS SIMILAR TO strcmp(arr1, arr2) LIKE IN CHAR ARRAYS!!
        //HERE IF WE GET 0 THEN THEY ARE EQUAL!!
        //ALSO THERE IS ANOTHER WAY OF DOING THIS WHICH STRINGS PROVIDE ->
        //str1 == str2 DIRECT COMPARISON GIVES TRUE OR FALSE!! MUCH EASIER!!
        cout << "Strings 1 and 2 are equal!!" << endl;
    }
    else{
        cout << "Strings 1 and 2 are not equal!!" << endl;
    }

    if(str1.compare(str3) == 0){
        cout << "Strings 1 and 3 are equal!!" << endl;
    }
    else{
        cout << "Strings 1 and 3 are not equal!!" << endl;
    }
    return 0;
}