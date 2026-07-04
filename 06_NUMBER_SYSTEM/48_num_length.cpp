#include <iostream>
using namespace std;
//WE KNOW WE CAN FIND THE LENGTH OF A NUMBER
//USING .length() FUNCTION WHEN AT FIRST WE HAVE CONVERTED 
//IT TO A STRING!!

//BUT DOING THAT CAN COST MEMORY WASTAGE!!
//SO INSTEAD  OF THAT WHAT CAN WE DO TO CALCULATE
//THE LENGTH OF A NUMBER!!
int main(){
    int num;
    cout << "Put any Integer Number: ";
    cin >> num;
    int count = 0;
    
    if(num == 0){
        count = 1;
    }
    while(num != 0){
        num = num / 10;
        count++;
    }
    cout << "The number of digits in the number: " << count;
    return 0;
}