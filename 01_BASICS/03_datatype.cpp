#include <iostream>
using namespace std;

int main(){
    int mark = 25; //INT DATATYPE (4 BYTES)
    cout << mark << "\n";

    float marks = 27.639372; //FLOAT DATATYPE (4 BYTES)
    cout << marks << "\n"; //LESS PRECISION THAN DOUBLE!!
    
    double markss = 26.637522; //DOUBLE DATATYPE (8 BYTES)
    cout << markss << "\n"; //MORE PRECISION BUT COUT ONLY ALLOWS 6 VALUES PRECISION MAX!!

    char value = 'a'; //CHAR DATATYPE (1 BYTE)
    cout << value << "\n"; //ALWAYS WRITE THE VALUE WITH '' SINGLE QUOTES!!

    bool isMale = true; //BOOL DATATYPE (true or false)
    bool isFemale = false;
    bool isTrue = 0;
    bool isFalse = 1;
    cout << isMale << "\n";
    cout << isFemale << "\n";
    cout << isTrue << "\n";
    cout << isFalse << "\n";

    //sizeof OPERATOR just like typeof OPERATOR!!
    //HERE SIZE IS A MAIN FACTOR BCOZ HERE MEMORY MANAGEMENT IS SOMETHING 
    //WE DO IT OURSELVES!!
    cout << sizeof(mark) <<"\n";
    cout << sizeof(marks) <<"\n";
    cout << sizeof(markss) <<"\n";
    cout << sizeof(value) <<"\n";
    cout << sizeof(isMale) << "\n";
 
    //SAME NAME VARIABLE REDEFINITION ALLOWED IN DIFFERENT BLOCKS!!
    int var = 12;
    // int var = 45; //REDEFINITION NOT ALLOWED!!
    {
        int var = 34; //THIS IS A DIFFERENT VARIABLE DEFINITION IN BLOCK!!
        //THIS IS ALLOWED AND WORKS!!
        cout << var << "\n";
    } 

    {
        int var = 85;
        cout << var << "\n";
    }
    cout << var << "\n";
    return 0;
}