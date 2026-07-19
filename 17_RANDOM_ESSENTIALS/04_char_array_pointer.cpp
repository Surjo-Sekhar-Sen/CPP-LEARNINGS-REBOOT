#include <iostream>
using namespace std;

int main(){
    char arr[] = "Surjo";
    char* p = arr;
    cout << p << endl; //THIS DOES NOT PRINT THE ADDRESS AS WE HAVE DISCUSSED 
    //ABOUT CHAR ARRAY BEHAVIOUR WITH cout!!
    cout << (void*)p << endl; //THIS WILL PRINT THE ADDRESS!!
    p++;
    cout << p << endl;
    return 0;
}