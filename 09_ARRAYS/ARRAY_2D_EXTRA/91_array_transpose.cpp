#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the number of rows of the 2-D array: ";
    cin >> n;
    cout << "Enter the number of columns in the 2-D array: ";
    cin >> m;

    int** arr1 = new int*[n];
    for(int i = 0; i <= (n-1); i++){
        arr1[i] = new int[m];
    }
    for(int i = 0; i <= (n-1); i++){
        for(int j = 0; j <= (m-1); j++){
            cout << "Enter the element in [" << i << "][" << j << "]: ";
            cin >> arr1[i][j]; 
            cout << endl;
        }
    } 
    cout << "2-D Array before transpose: " << endl;
    for(int i = 0; i <= (n-1); i++){
        for(int j = 0; j <= (m-1); j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    int** arr2 = new int*[m];
    for(int i = 0; i <= (m-1); i++){
        arr2[i] = new int[n];
    }
    for(int i = 0; i <= (m-1); i++){
        for(int j = 0; j <= (n-1); j++){
            arr2[i][j] = arr1[j][i];
        }
    }
    cout << "2-D Array after transpose: " << endl;
    for(int i = 0; i <= (m-1); i++){
        for(int j = 0; j <= (n-1); j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i <= (n-1); i++){
        delete[] arr1[i];
    }
    for(int i = 0; i <= (m-1); i++){
        delete[] arr2[i];
    }
    delete[] arr1;
    delete[] arr2;
    return 0;
}