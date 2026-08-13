#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i = 0; i <= (5-1); i++){
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    //INTERESTING WAY OF TAKING AND PRINTING VALUES!!
    //IF YOU TAKE EVERYTHING FROM INPUT BUFFER IN ONE GO THEN THE OUTPUT WILL ALSO BE CONTINUOS!!
    return 0;
}