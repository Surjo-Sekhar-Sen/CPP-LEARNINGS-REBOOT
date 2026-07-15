#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cout << "Give the size of the character array: ";
    cin >> n;

    char* arr = new char[n];
    string str = {"Surjo"};
    strcpy(arr, str.c_str());
    cout << arr;
    return 0;
}