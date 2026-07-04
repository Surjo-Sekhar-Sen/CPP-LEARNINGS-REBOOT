#include <iostream>
using namespace std;
//PALINDROME'S NUMBER COMPLEX PYRAMID

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= (n-i); k++){//FOR SPACES
            cout << " " << " ";
        }
        for(int j = i; j >= 1; j--){//FOR NUMBERS
            cout << (j%2) << " ";
        }
        for(int l = 2; l <= i; l++){//FOR NUMBERS OTHER SIDE
            cout << (l%2) << " ";
        }
        cout << "\n";
    }
    return 0;
}