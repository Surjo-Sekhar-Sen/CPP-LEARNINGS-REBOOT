#include <iostream>
using namespace std;

int main(){
    
    int marks;
    cout << "Marks: ";
    cin >> marks;

    if (cin.fail()) {
        cout << "Error!! Put a number!!" << endl;
    } else {
        cout << "Your marks: " << marks << endl;
    }
}