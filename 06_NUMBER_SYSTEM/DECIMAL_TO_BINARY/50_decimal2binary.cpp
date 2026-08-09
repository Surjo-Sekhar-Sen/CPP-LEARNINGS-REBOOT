#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//FOR DECIMAL TO BINARY, THE BEST WAY IS TO USE push_back()
//AND reverse() FUNCTIONS WHICH DOESN'T CREATE ANY EXTRA OBJECTS

int main(){
    int num, rem;
    string val = "";
    cout << "Put an Integer number: ";
    cin >> num;

    if(num == 0){
        cout << "0" << endl;
        return 0;
    }

    while(num != 0){
        rem = num % 2;
        num = num / 2;
        val.push_back(rem + '0'); //THIS rem+ '0' IS VERY IMPORTANT STEP
        //IF YOU WRITE val.push_back(rem) THEN YOU MAY GET NULL OR SOH(CHARACTER)
        //IN THE RESULTS!!
    }
    reverse(val.begin(), val.end());
    cout << val;
    return 0;
}