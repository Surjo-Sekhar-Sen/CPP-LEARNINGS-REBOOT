#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 40;
    int &temp = a; //& STANDS FOR ADDRESS OF OPERATOR!!
    //SO IT MEANS WE NAME temp ALSO IS POITING TO a ONLY!!
    //THIS ALLOWS USER TO HAVE VARIOUS NAMES FOR A SAME SINGLE VARIABLE!!
    //WE CAN EVEN CHANGE ACCESS AND DO WHATEVER OPERATIONS WE WANT ON ANY OF THEM!!
    //AND CHANGES WITH BE SEEN ON BOTH OF THEM!!
    //IT IS BASICALLY THE SAME ADDRESS THATSWHY!!
    cout << &a << " " << &temp << endl; //BOTH HAVE THE SAME ADDRESS!!
    temp = 20;
    cout << a << " " << temp << endl;
    temp++;
    cout << a << " " << temp << endl;
    a--;
    cout << a << " " << temp << endl;

    string str = "Surjo";
    string &refstr = str;
    refstr = refstr + " Sekhar";
    cout << str << " " << refstr;
    return 0;
}