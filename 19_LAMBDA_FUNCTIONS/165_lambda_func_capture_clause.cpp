#include <iostream>
#include <string>
using namespace std;

int main(){
    int value = 300;
    int num = 100;
    string str = "Surjo";
    float marks = 40;
    cout << value << " " << num << " " << str << " " << marks << endl;

    auto func = [=, &str](int calc)mutable{//MIXED CLAUSE!!
        value++;
        num++;
        str[4] = 'u';
        marks = marks + calc;
        cout << value << " " << num << " " << str << " " << marks << endl; 
    };
    func(50);
    cout << value << " " << num << " " << str << " " << marks << endl;
    return 0;
}