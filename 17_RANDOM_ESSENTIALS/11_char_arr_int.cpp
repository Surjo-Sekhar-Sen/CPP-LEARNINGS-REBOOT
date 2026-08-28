#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int arrtoint(char arr[], int size){
    int num = 0;
    int j = 0;
    for(int i = (size-2); i >= 0; i--){
        if(arr[i] == '-'){
            num = -num;
        }
        else{
            int digit = (arr[i] - int('0'));
            num = digit * round(pow(10, j++)) + num;
        }
    }
    return num;
}

bool checkvalid(char arr[], int size){
    int count = 0;
    for(int i = 0; i <= (size-1); i++){
        if(arr[i] == '-'){
            if(strlen(arr) == 1){
                return false;
            }

            if(i == 0){
                count++;
                continue;
            }

            return false;
        }
        
        else if(((arr[i] - int('0')) >= 0) && ((arr[i] - int('0')) <= 9)){
            count++;
        } 

        else if(arr[i] == '\0'){
            break;
        }

        else{
            return false;
        }  
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the number of characters in char array: ";

    if(cin >> n){
        cout << "Your input was: " << n << endl;
    }

    char* arr = new char[n+1];

    cout << "Enter elements of the array as numbers: " << endl;
    cin >> arr;
    
    if(checkvalid(arr, n+1) == true){
        int numval = arrtoint(arr, n+1);
        cout << "The number after self made atoi operations: ";
        cout << numval;
    }
    else{
        cout << "Ye Wrong number hai!!";
    }

    delete[] arr;
    return 0;
}