#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr1 = new int[n];
    fill(arr1, arr1 + n, -1);
    for(int i = 0; i <= (n-1); i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    int* arr2 = new int[n];
    fill(arr2, arr2 + n, 4); //USING FILL IS SLOWER THAN memset() BUT IT WORKS
    //FOR ALL NUMBERS AND DOESN'T WORK BYTE BY BYTE WHICH PROVES TO BE ADVANTAGEOUS 
    //IN CASES OTHER THAN 0 AND -1!!
    for(int i = 0; i <= (n-1); i++){
        cout << arr2[i] << " ";
    }
    return 0;
}