#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl; //endl DOES NOT REMOVE INPUT MEMORY BUFFER,
    //IT REMOVES OUTPUT MEMORY BUFFER!!

    // cin.ignore(numeric_limits <streamsize>::max(), '\n'); //MUST ENSURE YOU DON'T WRITE
    //THE DELIMETER AS "\n", WRITE IT AS '\n'!!

    string fullname;
    cout << "Enter your full name: ";
    cin >> fullname;
    cout << "Your full name is: " << fullname << "\n";
    return 0;
}