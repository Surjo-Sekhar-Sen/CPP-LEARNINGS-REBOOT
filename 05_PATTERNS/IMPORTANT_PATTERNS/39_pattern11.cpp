#include <iostream>
using namespace std;
//REVERSED NUMBER RIGHT TRIANGLE

int main(){
    int n;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}