#include <iostream>
using namespace std;

int main(){
    for(unsigned int i = 5; i >= -1; i--){ //IF YOU COMPARE IT WITH -1 THEN 
        //IT WILL BE CHANGED TO IT'S UNSIGNED VALUE THAT IS 4294967295!!
        cout << i << " ";
        //THIS WILL EXECUTE BUT AT WHAT COST!!
        //IN unsigned VALUE THERE IS NO NEGATIVE VALUE!!
        //SO AFTER IT GOES -1 THE IT CHANGES TO 4294967295!!
    }
    return 0;
}