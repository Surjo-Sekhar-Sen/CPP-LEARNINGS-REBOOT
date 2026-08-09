#include <iostream>
using namespace std;
//REVERSE RIGHT TRIANGLE

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){ //FOR SPACES
        for(int k = 1; k <= (n-i); k++){
            cout << " " << " ";
        }
        for(int j = 1; j <= i; j++){ //FOR STARS
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}