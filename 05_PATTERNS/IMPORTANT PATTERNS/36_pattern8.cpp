#include <iostream>
using namespace std;
//PYRAMID

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){ 
        for(int k = 1; k <= (n-i); k++){//FOR SPACES
            cout << " " << " ";
        }
        for(int j = 1; j <= i+(i-1); j++){ //FOR STARS
            cout << "*" << " ";
        }
        // for(int l = 1; l <= (i-1); l++){//FOR STARS OTHER SIDE
        //     cout << "*" << " ";
        // }
        
        //ON THE OTHER SIDE WE DON'T NEED TO THINK OF PRINTING SPACES!!
        cout << "\n";
    }
    return 0;
}