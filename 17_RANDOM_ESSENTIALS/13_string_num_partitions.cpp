#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter your number string: ";
    cin >> str;

    int length = str.length();
    bool** partitionarr = new bool*[length-1];

    for(int i = 0; i <= (length-1); i++){
        partitionarr[i] = new bool[length-1];
    }
    fill(partitionarr, partitionarr+((length-1)*(length-1)), 0);

    int i = 0;
    for(int j = 1; j <= (length-1); j++){
        partitionarr[i][j] = 1;
        if(partitionarr[i][j] == 1){
            
        }
    }
}