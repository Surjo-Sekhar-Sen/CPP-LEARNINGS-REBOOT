#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //INT TO FLOAT
    int n1 = 123;
    float f1 = n1;
    cout << f1 << "\n";

    //FLOAT TO INT
    int n2 = 34.567;
    float f2 = 0.1;
    double d1 = 0.1;
    int f3 = n2;
    cout << n2 << endl;
    cout << fixed << setprecision(30) << f2 << " " << f3 << " " << d1 << "\n";
    return 0;
}