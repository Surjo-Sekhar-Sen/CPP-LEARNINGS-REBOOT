#include <iostream>
using namespace std;

int main(){
    //UNARY OPERATOR -> INCREMENT AND DECREMENT OPERATOR!!
    int a = 5, b = 10;
    cout << ++a << endl; //PRE-INCREMENT
    cout << b++ << endl; //POST-INCREMENT

    cout << "New updated values of a: " << a << " and b: " << b << endl;

    cout << --a << endl; //PRE DECREMENT
    cout << b-- << endl; //POST DECREMENT

    //BINARY OPERATORS ->
    //ARITHMETIC OPERATOR
    int x = 2, y = 3, z = 4;
    cout << x + y + z << endl;
    cout << x - y << endl;
    cout << x * y + z - x << endl;
    cout << z / x + y * 4 - 2 * z << endl;
    cout << 5.0 / 2 << endl; //FLOATING DIVISION!!
    cout << y % x << endl; //MODULUS (REMAINDER)!!

    // cout << 5.5 % 2; //THIS LEADS TO AN ERROR AS DECIMAL NUMBER'S REMAINDER
    //CANNOT BE FOUND AS FLOATING POINT NUMBERS ARE NOT EXACTLY STORED IN MEMORY!!

    //RELATIONAL OPERATOR
    int m = 2, n = 4, l = 30;
    cout << (m < n) << endl; //VALUES COME AS 1 OR 0 WHICH SIGNIFY TRUE/FALSE!!
    cout << (l < n) << endl;
    cout << (l > n*m) << endl;
    cout << (2*m >= n) << endl;
    cout << (15*m == l) << endl;
    cout << (m == l) << endl; 

    //LOGICAL OPERATOR
    int age = 18; //early -> 20
    bool skill = true;
    float cgpa = 8;
    if(age >= 20 && skill && cgpa >= 8){
        cout << "Come for Interview!!";
    }
    else if((age > 17 && age < 20) || (!skill)){
        cout << "Grow Up Kid!!";
    }
    else{
        cout << "Come for Jhadu Pocha!!";
    }

    //BITWISE OPERATOR
    int e = 5, f = 10;
    cout << (e & f) << endl;
    cout << (e | f) << endl;
    cout << (~e) << endl;
    cout << (e ^ f) << endl;

    //SHIFT OPERATOR
    int g = 5, h = 10;
    cout << (g << 1) << endl; //g * 2^1 
    cout << "g: " << g << endl; //INITIAL VALUE DOESN'T CHANGE!! 
    cout << (g << 3) << endl; //g * 2^3
    cout << "g: " << g << endl;
    cout << (h >> 2) << endl; //h / 2^2
    cout << "h: " << h << endl;
    cout << (h >> 4) << endl; //h / 2^4
    cout << "h: " << h << endl;
    return 0;
}