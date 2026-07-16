#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Surjo";
    string str2 = "Sekhar"; //DECLARE AND INITIALISE
    string str3; //JUST DECLARE 
    str3 = "Sen"; //INITIALISED
    str2 = "Hello"; //UPDATION IS ALLOWED UNLIKE CHAR ARRAYS!!
    //MASS UPDATION IS NOT ALLOWED THERE, ONE BY ONE THROUGH INDEX WE CAN 
    //UPDATE IN CHAR ARRAYS!! 
    //ALSO WE DON'T NEED TO THINK OF ANY \0!!
    char arr[6] = "Surjo"; //WE ALSO HAVE TO THINK OF SIZE!!
    string name = "Sunkey"; //NO PROBLEM WITH SIZE AS IT IS AUTOMATICALLY DETECTED!!
    cout << name << " " << str << " " << str2 << " " << arr << endl;

    char arr2[2][10] = {"Surjo", "Sen"}; //IN STRINGS WE CAN EASILY MAKE THIS!!
    string arrstr[] = {"Surjo", "Sen"}; //STRING ARRAY!!
    cout << arr2[0] << " " << arr2[1] << endl;
    cout << arrstr[0] << arrstr[1] << endl;
    return 0;
}