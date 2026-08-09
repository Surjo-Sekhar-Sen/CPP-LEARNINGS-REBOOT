#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr1[] = "Surjo";
    char arr2[] = " Sekhar";
    strcat(arr1, arr2); //CHANGES THE VALUE OF SOURCE ARRAY!!
    cout << "Concatenated Array: " << arr1;
    return 0;
}