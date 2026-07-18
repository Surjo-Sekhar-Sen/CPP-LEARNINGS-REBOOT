#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0; //INITILSED BEFORE!!
    for(int x : arr){ //WE CANNOT USE for(int i = 0; int x : arr), IT'S NOT VERY MUCH ALLOWED IN ALL COMPILERS!!
        cout << "Integer array at: " << i  << " " << x << " " << endl;
        i++; //INCREMENT!!
    }
    cout << endl;
    
    //INSTEAD OF DECLARING THE DATATYPE WE CAN USE auto WHICH WILL AUTOMATICALLY CHECK THE DATATYPE!!
    char carr[6] = "Surjo";
    for(auto ch : carr){
        cout << ch << " ";
    }
    cout << endl;

    string str = "C++ Developer!!";
    for(int i = 0; i <= (str.length()-1); i++){ //NORMAL WAY OF PRINTING EACH CHARACTER OF A STRING!!
        cout << str[i] << " "; 
    } 
    cout << endl;
    for(char ch : str){
        cout << ch << " ";
    }
    cout << endl;
}