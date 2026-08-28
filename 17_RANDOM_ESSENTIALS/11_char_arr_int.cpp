#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int arrtoint(char arr[], int size){
    int num = 0;
    int j = 0;
    if(arr[0] != '-'){
        for(int i = (size-3); i >= 0; i--){
            int digit = (arr[i] - int('0'));
            num = digit * round(pow(10, j++)) + num;
        }
    }
    else{
        for(int i = (size-2); i >= 0; i--){
            if(arr[i] == '-'){
                num = -num;
            }
            else{
                int digit = (arr[i] - int('0'));
                num = digit * round(pow(10, j++)) + num;
            }
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
        if(n <= 0){
            cout << "Not a valid length!!"<< endl;
            return 0;
        }
    }

    char* arr1 = new char[n+2];

    cout << "Enter elements of the array as numbers: " << endl;
    cin >> arr1;
    
    if(checkvalid(arr1, n+2) == true){
        int numval = arrtoint(arr1, n+2);
        cout << "The number after self made atoi operations: ";
        cout << numval << endl;
    }
    else{
        cout << "Ye Wrong number hai!!" << endl;
    }

    delete[] arr1;
    return 0;
}