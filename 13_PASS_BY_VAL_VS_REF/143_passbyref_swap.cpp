#include <iostream>
using namespace std;

void swapp(int &x, int &y){ //THE HIDDEN LOGIC BEHIND swap() FUNCTION!!
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main(){
    int a = 10, b = 20;
    cout << "Integers before swapping: ";
    cout << a << " " << b << endl;
    swap(a, b); //THIS IS THE BUILD IN FUNCTION WE USE AND USES THE SAME LOGIC!!
    cout << "Integers after swapping: ";
    cout << a << " " << b << endl;
    cout << "Integers again after swapping: ";
    swapp(a, b); //THE FUNCTION WE BUILT OURSELVES!!
    cout << a << " " << b << endl;
    return 0;
}