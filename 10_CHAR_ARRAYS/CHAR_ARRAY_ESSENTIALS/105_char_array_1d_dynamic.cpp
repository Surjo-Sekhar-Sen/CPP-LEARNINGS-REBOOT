#include <iostream>
using namespace std;
//THIS IS ANOTHER WAY WHICH IS THE MOST BEST WAY TO DYNAMICALLY TAKE VALUE!!
//INSTEAD OF PUTTING CHARACTERS ONE BY ONE!!
//BUT IN TIMES THE CHARACTER METHOD CAN ALSO BE USEFUL!!

int main(){
    int n;
    cout << "Enter the size of the character array: ";
    cin >> n;

    char* name = new char[n+1];

    cout << "Enter you name: ";
    cin >> name; //YOU CAN JUST DIRECTLY PUT YOUR STRING HERE!! IT WILL AUTOMATICALLY
    //BE TAKEN INTO THE CHARACTER ARRAY!!
    cout << "Your name: " << name << endl;
    cout << name[0] << " " << name[1] << " " << name[2] << " ";
    cout << name[3] << " " << name[4] << " " << int(name[5]) << " "; //CHECKING LAST CHARACTER!!

    delete[] name;
    return 0; 
}