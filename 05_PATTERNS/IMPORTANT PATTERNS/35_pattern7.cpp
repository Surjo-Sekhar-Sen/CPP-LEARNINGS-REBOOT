#include <iostream>
using namespace std;
//INVERSED REVERSE RIGHT TRIANGLE

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){ 
        for(int k = 1; k <= (i-1); k++){//FOR SPACES
            cout << " " << " ";
        }
        for(int j = 0; j <= (n-i); j++){ //FOR STARS
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}