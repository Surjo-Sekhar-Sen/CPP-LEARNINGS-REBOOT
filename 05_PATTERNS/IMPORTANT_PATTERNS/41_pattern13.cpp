#include <iostream>
using namespace std;
//PALINDROME'S NUMBER PYRAMID

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= (n-i); k++){//FOR SPACES
            cout << " " << " ";
        }
        for(int j = 1; j <= i; j++){//FOR NUMBERS
            cout << j << " ";
        }
        for(int l = (i-1); l >= 1; l--){//FOR NUMBERS OTHER SIDE
            cout << l << " ";
        }
        cout << "\n";
    }
    return 0;
}