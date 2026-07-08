#include <iostream>
using namespace std;
//LINEAR SEARCH ALGORITHM!!

int main(){
    int key;
    cout << "Enter the key you want to find from the array: ";
    cin >> key;

    int arr[] = {10, 20, 30, 40, 50, 60};
    for(int i = 0; i <= (6-1); i++){
        if(arr[i] == key){
            cout << "Key found in " << i+1 <<" position!!";
            return 0;
        }
    }
    cout << "Key not found!!";
    return 0;
}