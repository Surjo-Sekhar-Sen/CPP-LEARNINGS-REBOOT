#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i <= 5; i++){
        cout << "Hello " << i << endl;
    }

    int j = 0;
    for( ; j <= 7; ){ //WE DON'T NEED TO WRITE ALL THE THINGS INSIDE THE 
        //LOOP STATEMENTS AND ALSO IT IS NOT AT ALL NECESSARY TO WRITE ANYTHING!!
        //FOR LOOP TO EXECUTE WE NEED TO WRITE ; THAT IS IT!!
        //for(; ;) -> THIS WILL ALSO EXECUTE THE CODE INSIDE BUT FOR INFINITE TIMES!!   
        cout << "Hi " << j << endl;
        j++;
    }
    return 0;
}