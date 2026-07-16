#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Surj";
    str1.push_back('o'); //IN push_back WE CAN ONLY PUT 1 CHARACTER!!
    //WE ALSO USED IT IN DECIMAL TO BINARY CONVERSIONS!! -> rem + '0'!!

    str1.push_back('s');
    cout << str1 << endl;

    str1.pop_back(); //POPS BACK THE LAST CHARACTER OF THE STRING!!
    cout << str1 << endl;

    string str2 =  "Surjo";
    str2.append(" Sen"); //HELPS TO ADD STRING AT THE LAST OF ANY STRING!!
    cout << str2 << endl;

    str2.insert(5, " Sekhar"); //INSERTS STRING AT ANY INDEX!!
    cout << str2 << endl;

    str2.erase(5, 7); //erase(index, count) -> ERASES THE STRING FROM INDEX TILL COUNT
    //OF CHARACTERS!!
    cout << str2 << endl;

    str2.replace(6, 3, "says Hello!!");
    cout << str2;
    return 0;
}