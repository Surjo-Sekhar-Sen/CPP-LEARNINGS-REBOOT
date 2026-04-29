#include <iostream>
#include <string>
using namespace std;

int main(){
    // FOR INTEGER
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "\n" << "Your age is: " << age << "\n";
    
    // FOR FLOAT
    float mark;
    cout << "Enter your mark: ";
    cin >> mark;
    cout << "\n" << "Your mark is: " << mark << "\n";

    // FOR DOUBLE
    double marks;
    cout << "Enter your marks: ";
    cin >> marks;
    cout << "\n" << "Your marks is: " << marks << "\n";

    // FOR CHAR
    char sign;
    cout << "Enter your sign: ";
    cin >> sign;
    cout << "\n" << "Your sign is: " << sign << "\n";

    // FOR BOOL
    bool val;
    cout << "Enter yout val: ";
    cin >> val; //YOU CANNOT PUT true or false AS VALUES HERE!!
    //HERE WE CAN WRITE IN 0 OR 1!!
    cout << "\n" << "Your val is: " << val << "\n";
    //EVEN IF YOU GIVE VALUE OTHER THAN 0 OR 1 IT IS STILL CONVERTED 
    //INTO 0 OR 1!! VALUES OTHER THAN 0 ARE ALWAYS TREATED AS 1!!

    // WHAT IF WE TRY TO ACCESS THE VALUE BEFORE GIVING INPUT!!
    // THEN IT WILL OBVIOUSLY THROW THE VALUE WHICH IS INSIDE IT
    // THAT TIME --> GARBAGE VALUE!!
    int days;
    cout << "Days: " << days << "\n"; //GIVES GARBAGE VALUE!!
    cin >> days;
    cout << "\n" << "Days: " << days << "\n"; //GIVES INPUT VALUE!!

    char day;
    cout << "Day: " << day << "\n"; //GIVES GARBAGE VALUE!!
    cin >> day;
    cout << "\n" << "Day: " << day << "\n"; //GIVES INPUT VALUE!!

    char dayss;
    cout << "(CHAR)Dayss: " << dayss << endl << int(dayss) << "\n"; //GIVES GARBAGE VALUE!!
    cin >> dayss;
    cout << "\n" << "(CHAR)Dayss: " << dayss << "\n"; 

    string name;
    cout << "Enter your name: ";
    cin >> name; //EVEN IF YOUR WRITE A FULL SENTENCE, THIS WILL ONLY TAKE THE FIRST 
    //WORD FROM THAT!!
    cout << "Your name is: " << name << "\n";
    
    //SINCE cin WILL ONLY TAKE THE SIRST WORD, THE REST OF THE WORDS 
    //REMAIN IN THE INPUT BUFFER AND HENCE WE SEE getline() TAKING THE SPACE AND sekhar sen FROM
    //THE INPUT OF BUFFER AND AUTOMATICALLY FILLING VALUES!!
    //FOR GETTING OUT OF THIS: WE USE cin.ignore()
    cin.ignore(1000, '\n'); //WE NEED TO WRITE AND REMOVE THE EXTRA CHARACTERS FROM THE BUFFER!!

    //THIS IS WHY WE HAVE getline(cin, string)!!
    string fullname;
    cout << "Enter your full name: ";
    getline(cin, fullname); //BEFORE WRITING THIS ENSURE TO #include <string> FIRST!!
    cout << "Your full name is: " << fullname << "\n";
    return 0;
}