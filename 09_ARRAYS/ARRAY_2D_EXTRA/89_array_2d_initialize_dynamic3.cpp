#include <iostream>
using namespace std;
//WE CAN DYNAMICALLY INITILIAZE 2-D ARRAYS WHERE WE CAN EVEN KEEP 
//COLUMN SIZE DIFFERENT FOR EACH ROW!!

int main(){
    int n;
    cout << "Enter the row size of the 2-D array: ";
    cin >> n;

    int** arr = new int*[n];
    int* column = new int[n];
    for(int i = 0; i <= (n-1); i++){
        cout << "Give how many columns you want in " << i+1 << " row: ";
        cin >> column[i];
    } 

    for(int i = 0; i <= (n-1); i++){
        arr[i] = new int[column[i]];
    }
    for(int i = 0; i <= (n-1); i++){
        for(int j = 0; j <= (column[i]-1); j++){
            cout << "Enter the element in [" << i << "][" << j << "]: ";
            cin >> arr[i][j]; 
            cout << endl;
        }
    }

    for(int i = 0; i <= (n-1); i++){
        for(int j = 0; j <= (column[i]-1); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i <= (n-1); i++){
        delete[] arr[i];
    }
    delete[] column;
    delete[] arr;
    return 0;
}