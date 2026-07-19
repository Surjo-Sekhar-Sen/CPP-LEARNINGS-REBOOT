#include <iostream>
#include <string>
using namespace std;

class Student{
    private :
        int roll;
        float marks;
        int pin;

    public :
        string name;

        void privateaccess(int usn){
            if(usn > 0){
                roll = usn;
            }

        }
        void checkmarks(int pin){
            if(pin == 9275){
                marks = 50;
            }
            else if(pin == 2202){
                marks = 60;
            }
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll No." << roll << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main(){
    Student s1, s2;
    s1.name = "Surjo";
    s2.name = "Neelesh";
    // s1.roll = 163; //THIS IS NOT ALLOWED!! AS roll IS A PRIVATE DATA MEMBER!!
    //BUT WE CAN ACCESS AND DISPLAY IT IF WE USE THE FUNCTIONS RELATED TO IT
    //AND FULFILL IT'S CONDITIONS!!
    s1.privateaccess(163);
    s2.privateaccess(99);
    s1.checkmarks(9271);
    s1.checkmarks(9275);
    s2.checkmarks(2202);
    s1.display();
    s2.display();
    return 0;
}