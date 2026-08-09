#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Surjo Sekhar Sen";
    string sub = str.substr(6,6); //substr(start_index, count) -> CUTS A SUBSTRING OUT OF
    //MAIN STRING BUT DOES NOT CHANGE THE AACTUAL ONE!!
    cout << str << endl;
    cout << sub << endl;
    return 0;
}