#include <iostream>
using namespace std;
//BINARY 0/1 BIT TRIANGLE

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            cout << (j%2) << " ";
        }
        cout << "\n";
    }
    return 0;
}