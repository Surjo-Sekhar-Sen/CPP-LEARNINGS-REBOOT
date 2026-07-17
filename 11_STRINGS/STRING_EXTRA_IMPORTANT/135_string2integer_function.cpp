#include <iostream>
#include <string> //stoi IS AVAILABLE IN THIS!!
#include <cstdlib> //atoi IS AVAILABLE IN THIS!!
using namespace std;

int main(){
    string str1 = "4532";
    string str2 = "-4532";
    //USING ATOI FUNCTION MEANS ASCII TO INTEGER!!
    //THIS IS OLD AND C-STYLE WAY WHICH DOES NOT TAKE STRING VALUE!!
    //AND ONLY TAKES CHAR ARRAY VALUE -> THATSWHY WE NEED TO CONVERT
    //THE STRING TO CHAR ARRAY FIRST USING c_str() FUNCTION!! 
    int num1 = atoi(str1.c_str());
    cout << "Number using atoi: " << num1 << endl;
    //IF THE STRING IS NOT A NUMBER IT BASICALLY RETURNS 0!!
    //SO IT GETS DIFFICULT TO UNDERSTAND WHETHER THE STRING WWAS ZERO(0)
    //OR THE VALUE WAS INCORRECT!!
    int num2 = atoi(str2.c_str());
    cout << "Negative number using atoi: " << num2 << endl;

    //USING STOI FUNCTION MODERN C++ WAY!!
    //STRING TO INTEGER!!
    //IF A STRING IS NOT AN INTEGER IT DOES NOT RETURN 0 LIKE atoi!!
    //INSTEAD THROWS A RUNTIME ERROR!!
    int num3 = stoi(str1);
    cout << "Number using stoi: " << num3 << endl;
    int num4 = stoi(str2);
    cout << "Negative number using stoi: " << num4 << endl;
    return 0;
}