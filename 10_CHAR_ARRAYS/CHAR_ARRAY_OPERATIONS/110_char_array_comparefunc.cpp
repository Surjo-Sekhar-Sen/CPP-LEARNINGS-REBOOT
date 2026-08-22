#include <iostream>
using namespace std;

void comparearr(char arra[], char arrb[]){
    int a = 0, b = 0;
    while(arra[a] != '\0' || arrb[b] != '\0'){
        if(arra[a] == arrb[b]){
            cout << "Array 1 matches with Array 2 at: " << arra[a] << endl;
            a++;
            b++; 
        }
        else{
            cout << "Array 1 and Array 2 does not match at: " << arra[a] << " and " << arrb[b];
            cout << endl;
            cout << "Since their is a mismatch, They are not same!!";
            break;
        }
    }
    return;
}

int main(){
    char arr1[100] = "Surjo";
    char arr2[100] = "Surjo";
    comparearr(arr1, arr2);
    cout << endl;
    
    char arr3[100] = "Sen";
    char arr4[100] = "Sent";
    comparearr(arr3, arr4);
    return 0;
}