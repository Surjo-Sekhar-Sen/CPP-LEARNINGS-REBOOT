#include <iostream>
using namespace std;
//FLOYD'S TRIANGLE

int main(){
    int n;
    int count = 1;
    cout << "Number of rows you want to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}