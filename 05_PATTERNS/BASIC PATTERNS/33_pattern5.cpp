#include <iostream>
using namespace std;
//NUMBER PATTERN 2

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}