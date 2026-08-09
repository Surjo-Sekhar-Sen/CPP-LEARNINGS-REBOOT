#include <iostream>
using namespace std;
//INVERSE RIGHT TRIANGLE

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= (n-i); j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}