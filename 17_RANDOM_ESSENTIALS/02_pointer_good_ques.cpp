#include <iostream>
using namespace std;

int main(){
    int first = 6;
    int *p = &first;
    int *q = p; //THIS IS NOT A DOUBLE POINTER!!
    //THIS BASICALLY STORES THE VALUE OF p AS IT IS NOT &p INSTEAD IT IS JUST p!!
    //AND SINCE p CONTAINS AN ADDRESS AND THAT OF first VARIABLE SO BOTH OF THE POINTERS NOW 
    //POINT TO THE SAME ADDRESS!!
    (*q)++;
    cout << first << endl;
    return 0;
}