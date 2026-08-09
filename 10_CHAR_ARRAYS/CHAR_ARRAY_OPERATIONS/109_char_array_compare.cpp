#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr1[4] = {'s', 'e', 'n', '\0'};
    char arr2[4] = {'s', 'e', 'n', '\0'};
    char arr3[6] = {'s', 'u', 'r', 'j', 'o', '\0'};
    char arr4[6] = {'S', 'U', 'R', 'J', 'O', '\0'};

    int firstcomp = strcmp(arr1, arr2);
    int secondcomp = strcmp(arr3, arr4);
    if(firstcomp == 0){
        cout << "The first two arrays are same!!";
    }
    else{
        cout << "The first two arrays are not same!!";
    }
    cout << endl;
    if(secondcomp == 0){
        cout << "The last two arrays are also same!!";
    }
    else{
        cout << "The last two arrays are not equal!!";
    }
    return 0;
}