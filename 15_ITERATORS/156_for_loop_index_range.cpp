#include <iostream>
#include <string>
using namespace std;

int main(){
    char arr[6] = "Surjo";
    for(auto &x : arr){//DOING &x IS NECESSARY!! FOR GETTING INSIDE THE ACTUAL ARRAY ADDRESS!!
        int index = &x - arr; //THIS BASICALLY MEANS TO SUBTRACT THE ADDRESS OF THE CURRENT ELEMENT TO 
        //THE BASE ADDRESS TO GET THE BYTE DIFFERENCE WHICH IS THEN DIVIDED BY THE SIZEOF DATATYPE!!
        //THIS HELPS TO GET THE INDEX VALUE!!
        cout << "Element at " << index << " is: " << x << endl;
    }
    return 0;
}