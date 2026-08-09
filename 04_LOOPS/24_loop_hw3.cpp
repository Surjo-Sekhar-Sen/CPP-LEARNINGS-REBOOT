//PRINT 'A' TO 'Z'
#include <iostream>
using namespace std;

int main(){
    for(char a = 'A'; a <= 'Z'; a++){
        cout << a << " ";
    }
    cout << endl;
    //DIFFERENT APPROACH USING TYPECASTING!!
    for(int i = int('A'); i <= int('Z'); i++){
        cout << char(i) << " ";
    }
    return 0;
}