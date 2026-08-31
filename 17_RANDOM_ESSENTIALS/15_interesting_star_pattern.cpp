#include <iostream>
using namespace std;

/*
      *      
    *   *     
  *       *   
*           * 


*/

void numtimes(int number, int value, int num, int count){
    int i = number;
    for(i = number; i <= (value); i++){
        for(int j = i; j  <= (value-1); j++){
            cout << " " << " ";
        }
        for(int k = 1; k <= 1; k++){
            cout << "*" << " ";
        }
        for(int l = 1; l <= (i-1); l++){
            cout << " " << " ";
        }
        for(int m = 1; m <= (i-2); m++){
            cout << " " << " ";
        }
        if(i >= 2){
            for(int n = 1; n <= (1); n++){
                cout << "*" << " ";
            }
        }
        for(int o = i; o <= (value-1); o++){
            cout << " " << " ";
            count++;
        }
        if(count <= (num)){
            return numtimes(i, value, num, count);
        }
        else{
            count = 0;
            continue;
        }
    }
}

int main(){
    int val;
    cout << "Enter the depth of the bridge: ";
    cin >> val;

    int num;
    cout << "Enter the number of times you want to print this bridge star pattern: ";
    cin >> num;

    numtimes(1, val, num, 1);
    cout << endl;
}