#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Surjo";
    char val1 = str1[1];
    cout << val1 << " ";
    char ch = str1[5]; //RETURNS NULL JUST LIKE CHAR ARRAYS WHERE AT LAST \0 IS STORED!! 
    //FOR OUT OF BOUND CASES IT RETURNS GARBAGE VALUE!!
    cout << int(ch) << " ";

    char val3 = str1.at(3); //FINDS THE CHARACTER AT THE SPECIFIC INDEX!!
    cout << val3 << " ";
    // char val4 = str1.at(5); //DOES NOT RETURN NULL, AND ALSO FOR OUT OF BOUND CASES,
    //IT THROWS AN ERROR UNLIKE GIVING GARBAGE VALUE!!
    // cout << int(val4) << endl;

    char val5 = str1.front(); //RETURNS THE FIRST CHARACTER!!
    cout << val5 << " ";
    char val6 = str1.back(); //RETURNS THE LAST CHARACTER, NOT \0!!
    cout << val6 << " ";
    return 0;
}