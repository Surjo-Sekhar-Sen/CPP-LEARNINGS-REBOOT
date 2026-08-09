#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 20;
    string str = "Surjo";
    float marks = 50;

    auto lambda = [num, str, marks](int value){//BECAUSE THIS IS AN ANONYMOUS FUNCTION WE STORE IT IN A VARIABLE TO ACCESS!!
        cout << "Hello " << str << " this side!!" << endl;
        int calculate = marks + value;
        cout << num << endl; //WE CANNOT MODIFY THIS VALUE AS IT IS JUST A COPY OF THE VALUE!!
        //FOR MAKING THE ACTUAL VALUE CHANGE WE NEED TO PASS THE ACTUAL ADDRESS REFERENCE OF THE VARIABLE USING &!!
    };

    auto another = [&num, &str, &marks](int newvalue){
        cout << "Hello: " << str << " again!!" << endl;
        int changeval = marks + newvalue;
        num = num + 10;
        marks = marks + changeval;
        cout << num << " " << marks << endl;
    };
    lambda(20);
    another(30);
    return 0;
}