#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Which start point you want: ";
    cin >> n;
    cout << "Which end point you want: ";
    cin >> m;

    if(n >= m){
        cout << "Not possible!!" << endl;
        return 0;
    }

    for(int i = n; i <= m; i++){
        for(int k = 1; k <= (m-i); k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << i * j << " ";
        }
        for(int k = 1; k <= (m-i); k++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}