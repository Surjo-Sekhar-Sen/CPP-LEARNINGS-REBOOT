#include <iostream>
using namespace std;

int main(){
    char arr[] = "Surjo"; //HERE \0 WILL AUTOMATICALLY COME!!
    cout << arr << endl; 

    char ch = 'a';
    int value = 4;
    //WHAT IF YOU DON'T PUT \0??
    char arr2[] = {'s', 'u', 'r', 'j', 'o'};
    cout << arr2 << endl; //THIS WILL RANDOMLY PRINT VALUES FROM CHARACTERS!!
    //AND FORTUNATELY STOP IF NULL (\0) COMES BY CHANCE!! BUT YES ONLY PRINTS GARBAGE IF THERE IS NO OTHER
    //CHAR ARRAYS IN THE SAME FUNCTION!!
    cout << (void*)arr2 << endl; // WORKS WITH CHAR* 
    cout << (void*)arr << endl;
    cout << (void*)&ch << endl;
    cout << &value << endl; //WAY TO FIND MEMORY ADDRESS OF VALUES!!
    return 0;
}