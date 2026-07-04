#include <iostream>
using namespace std;
//INVERSE PYRAMID

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){ 
        for(int k = 1; k <= (i-1); k++){//FOR SPACES
            cout << " " << " ";
        }
        for(int j = 1; j <= (n-i+1)+(n-i); j++){ //FOR STARS
            cout << "*" << " ";
        }
        // for(int l = 1; l <= (n-i); l++){//FOR STARS OTHER SIDE
        //     cout << "*" << " ";
        // }
        
        //ON THE OTHER SIDE WE DON'T NEED TO THINK OF PRINTING SPACES!!
        cout << "\n";
    }
    return 0;
}