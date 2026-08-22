#include <iostream>
using namespace std;
//WELL WE CAN USE 2D OF CHARARRAYS FOR STORING STRING VALUES!!

int main(){
    string arrstr[3] = {"Surjo", "Sekhar", "Sen"};
    char arr[3][10] = {"Surjo", "Sekhar", "Sen"};
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    cout << arrstr[0] << " " << arrstr[1] << " " << arrstr[2];
    return 0;
} 