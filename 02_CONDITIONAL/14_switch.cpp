#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter the day: ";
    cin >> day;

    switch(day){ //WE CAN ONLY USE INT/CHAR AS VARIABLE HERE
        //ALSO WE MUST ENSURE THE VALUES ARE DISCRETE!! (NO RANGE INVOLVED)!!
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        default:
            cout << "Enter correct day!!";
    }
    return 0;
}