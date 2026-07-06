#include <iostream>
using namespace std;

int updatevalue(int &x){
    //HERE THE ACTUAL VALUE OF THE ARGUMENT PASSED IS TAKEN
    //AS THE VARIABLE'S MEMORY ADDRESS IS GIVEN!!
    cout << "Value of num in updatevalue Function: " << x << endl;
    x = x + 10;
    return x;
}

int main(){
    int n = 60;
    int passval = updatevalue(n);
    //WHEN WE TRY TO PRINT THE VALUE WE SEE THAT VALUE OF 
    //ORIGINAL VALUE IS ALSO CHANGED!!
    //PASS BY REFERENCE IS FASTER OPERATION AND PROVES USEFUL FOR BIGGER STRING
    //AND OBJECT VALUES AS THERE IS NO COPY CREATED!!
    cout << "Updated value of num: " << passval << endl;
    cout << "Value of num in main Function: " << n;
    return 0;
}