#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the number of rows in the array: ";
    cin >> n;
    cout << "Enter the number of columns in the array: ";
    cin >> m;

    int** arr = new int*[n];

    for(int i = 0; i <= (n-1); i++){
        arr[i] = new int[m];
    }

    for(int i = 0; i <= (n-1); i++){
        for(int j = 0; j <= (m-1); j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i <= (n-1); i++){
        for(int j = 0; j <= (m-1); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i <= (n-1); i++){
        for(int j = 0; j <= (m-1); j++){
            delete[] arr[i];
        }
    }
    delete[] arr;
    return 0;
}