#include <iostream>
using namespace std;

int updatevalue(int x){
    //HERE A COPY OF THE ARGUMENT PASSED IS TAKEN!!
    cout << "Value of num in updatevalue Function: " << x << endl;
    x = x + 10;
    return x;
}

int main(){
    int n = 60;
    int passval = updatevalue(n);
    //WHEN WE TRY TO PRINT THE VALUE WE SEE THAT VALUE OF 
    //ORIGINAL VALUE IS STILL THE SAME!!
    cout << "Updated value of num: " << passval << endl;
    cout << "Value of num in main Function: " << n;
    return 0;
}