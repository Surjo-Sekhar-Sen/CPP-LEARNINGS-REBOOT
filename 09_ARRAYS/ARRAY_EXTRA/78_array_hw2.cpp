#include <iostream>
using namespace std;
//INITIALIZE AN ARRAY WITH -1 IN EACH BLOCK!!

int main(){
    int arr[10] = {-1};
    for(int i = 0; i <= (10-1); i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }
        cout << arr[i] << " "; 
    }
    return 0;
}