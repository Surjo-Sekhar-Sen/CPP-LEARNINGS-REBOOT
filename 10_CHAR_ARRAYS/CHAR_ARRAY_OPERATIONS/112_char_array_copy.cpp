#include <iostream>
using namespace std;

void copyarr(char arra[], char arrb[]){
    int a = 0, b = 0;
    while(arra[a] != '\0'){
        arrb[b] = arra[a];
        a++;
        b++;
    }
    arrb[b] = '\0';
    cout << "Copied array: " << arrb;
    return;
}
int main(){
    char arr1[100] = "Surjo";
    char arr2[100]; 
    copyarr(arr1, arr2);
    return 0;
}