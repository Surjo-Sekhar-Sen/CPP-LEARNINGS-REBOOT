#include <iostream>
#include <cstring>
using namespace std;

void concatarray(char arr1[], char arr2[]){
    int index1 = strlen(arr1);
    int index2 = 0;
    while(index2 != strlen(arr2)){
        arr1[index1] = arr2[index2];
        index1++;
        index2++;
    }
    arr1[index1] = '\0';
    cout << arr1;
}
int main(){
    char arra[] = "Surjo";
    char arrb[] = " Sekhar";
    concatarray(arra,arrb);
    return 0;
}