#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//IMPORTANT PART!!
int main(){
    string str = "Surjo";
    char name[6];

    strcpy(name, str.c_str());
    cout << "Name: " << name;
    return 0;
}