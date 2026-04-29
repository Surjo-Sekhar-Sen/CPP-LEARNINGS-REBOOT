#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main(){

    string name;
    cout << "Enter your name: ";
    cin >> name; //EVEN IF YOUR WRITE A FULL SENTENCE, THIS WILL ONLY TAKE THE FIRST 
    //WORD FROM THAT!!
    cout << "Your name is: " << name << "\n";

    //THIS IS TO REMOVE ANY LENGTH IN THE STREAMSIZE BUFFER BCOZ 
    //WRITING cin.ignore(1000, '\n') DOES NOT ENSURE ALL EXTRA CHARACTERS REMOVED!!
    cin.ignore(numeric_limits <streamsize>:: max(), '\n');
    
    string fullname;
    cout << "Enter your full name: ";
    getline(cin, fullname); //BEFORE WRITING THIS ENSURE TO #include <string> FIRST!!
    cout << "Your full name is: " << fullname << "\n";
    return 0;
}