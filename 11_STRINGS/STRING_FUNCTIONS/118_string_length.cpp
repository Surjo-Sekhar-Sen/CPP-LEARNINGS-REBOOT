#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Surjo";
    cout << str1.length() << endl; //FINDS LENGTH!!
    string str2 = "Hello";
    cout << str2.size() << endl; //FINDS SIZE BASICALLY SAME AS LENGTH!!

    string str3 = "Sen";
    string str4 = ""; //EVEN PUTTING " " SPACE MEANS IT IS NOT EMPTY!!
    cout << str3.empty() << endl; //CHECKS IF IT IS EMPTY OF NOT, RETURNS 0 IF NOT EMPTY,
    cout << str4.empty() << endl; //RETURNS 1 IF TRUE!!

    str2.clear(); //HELPS TO CLEAN THE STRING!!
    cout << str2 << endl;

    string str5 = "Sekhar";
    str2 = str2 + str5; //CONCATENATION
    cout << str5 << endl;
    cout << str5.capacity(); //FINDS OUT THE TOTAL CAPACITY IN HEAP MEMORY!!
    return 0;
}