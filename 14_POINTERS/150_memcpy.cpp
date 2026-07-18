#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int a = 56;
    int *iptr1 = &a;
    int b, c;
    int *iptr2 = &b;
    memcpy(iptr2, iptr1, sizeof(a)); //memcpy HAS (dest add, soource add, size in bytes)!!
    cout << b << " " << *iptr2 << endl; //IMPORTANT IS THAT THE source AND dest BOTH NEEDS TO BE A POINTER ADDRESS!!
    memcpy(&c, &a, sizeof(a));
    cout << c << " " << &c << " " << *iptr2 << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int arrdest1[5];
    int arrdest2[5];
    int arrdest3[5];
    memcpy(arrdest1, arr, 8); //IF WE SAY 8 BYTES THEN IT MAY COPY TILL 2 BOXES AND LEAVE OTHER AS IT IS!!
    //ALSO THE SIZE HOW MUCH TO COPIED IS VERY ESSENTIAL AS IF THE USER PUTS WRONG OR OUT OF BOUND THEN 
    //IT WOULD CREATE A BIG PROBLEM!!
    for(int i = 0; i <= (5-1); i++){
        cout << arrdest1[i] << " ";
    }
    cout << endl;

    memcpy(arrdest2, arr, 16);
    for(int i = 0; i <= (5-1); i++){
        cout << arrdest2[i] << " ";
    }
    cout << endl;

    memcpy(arrdest3, arr, 20);
    for(int i = 0; i <= (5-1); i++){
        cout << arrdest3[i] << " ";
    }
    return 0;
}