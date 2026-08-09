#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    
    if(marks >= 90){
        cout << "Your grade is A, EXCELLENT!!";
    }
    else if(marks >= 60 & marks < 90){
        cout << "Your grade is B, WELL DONE!!";
    }
    else if(marks >= 35 & marks < 60){
        cout << "Your grade is C, TRY TO DO BETTER!!";
    }
    else{
        cout << "Your grade is D, ZINDAGI EK SAFAR HAI SUHANA YAHA KAL KYA HO KISNE JANA!!";
    }
    return 0;
}