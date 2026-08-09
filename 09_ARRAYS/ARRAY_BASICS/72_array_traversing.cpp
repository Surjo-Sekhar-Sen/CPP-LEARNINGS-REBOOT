#include <iostream>
using namespace std;

int main(){
    int arr1[5] = {10, 20, 30, 40 ,50};
    for(int i = 0; i <= 4; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    int arr2[5];
    for(int i = 0; i <= 4; i++){
        cout << "Enter the array element " << i << ": ";
        cin >> arr2[i];
        cout << endl;
    }

    for(int i = 0; i <= 4; i++){
        cout << arr2[i] << " ";
    }
    return 0;
}