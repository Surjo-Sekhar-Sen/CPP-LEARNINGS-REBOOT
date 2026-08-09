#include <iostream>
using namespace std;

int main(){
    int arr1[3][2] = {{1, 2}, {3, 4}, {4, 5}};
    int arr2[][4] = {{10, 20, 30, 40},
                     {50, 60, 70}}; //IF YOU DON'T FILL THE VALUES THEN 
                    //AUTOMATICALLY IT WILL BE FILLED WITH 0!!
                    //IF YOU DON'T GIVE THE ROW NUMBER IT WON'T BE A 
                    //PROBLEM BUT NOT GIVING COLUMN NUMBER WILL CREATE
                    //PROBLEMS!!
    int arr3[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    //THIS TYPE OF INITIALIZATION IS ALSO ALLOWED AS IN MEMORY 
    //ALL 2D ARRAYS ARE STORED ACTUALLY KIND OF THIS WAY ONLY!!
    return 0;
}