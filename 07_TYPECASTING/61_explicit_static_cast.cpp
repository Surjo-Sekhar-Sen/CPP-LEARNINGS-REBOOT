#include <iostream>
using namespace std;
//THIS IS THE BEST METHOD SUITABLE FOR COMPILER WITH ALL RULES AND REGULATIONS FOLLOWED!!
//WE USE static_cast TOOL FROM std NAMESPACE!!

int main(){
    int a = 25, b = 13;
    double pi = 3.14598243;
    int n1 = -30;
    float result1 = a / b; 
    int result2 = a / b;
    
    float result3 = static_cast<float>(a) / b;
    int result4 = static_cast<int>(pi);
    int result5 = static_cast<unsigned int>(n1); //IF YOU WANT TO STORE UNSIGNED VALUE 
    //IN result5 THEN YOU NEED TO WRITE unsigned int IN DATATYPE TOO OTHERWISE IT WILL STORE IN IT'S 
    // DEFAULT SIGNED FORM AND DISPLAY -30 AS THE OUTPUT ANYWAY AS WRITTEN!!
    char result6 = static_cast<unsigned char>(n1);

    cout << result1 << " " << result2 << " " << result3 << "\n";
    cout << static_cast<unsigned int>(n1) << endl;
    cout << result4 << " " << result5 << " " << result6 << endl;
    return 0;
}