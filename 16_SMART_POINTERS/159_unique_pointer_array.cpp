#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr <int[]>arrptr1 = make_unique<int[]>(3); //CREATES AN INT ARRAY WITH 5 BLOCKS!!
    for(int i = 0; i <= (3-1); i++){
        cout << (arrptr1.get() + i) << " "; //PRINTS THE ADDRESSES OF THE ELEMENTS!!
    } 
    cout << endl;

    *(arrptr1.get()) = 10;
    *(arrptr1.get()+1) = 20;
    *(arrptr1.get()+2) = 30;
    for(int i = 0; i <= (3-1); i++){
        cout << *(arrptr1.get() + i) << " ";
    }
    cout << endl;
    
    unique_ptr <int[]>arrptr2 = move(arrptr1);
    for(int i = 0; i <= (3-1); i++){
        cout << (arrptr2.get() + i) << " ";
    } 
    cout << endl;

    cout << (arrptr1.get()) << endl;

    for(int i = 0; i <= (3-1); i++){
        cout << *(arrptr2.get() + i) << " ";
    }
    cout << endl;
    return 0;
}