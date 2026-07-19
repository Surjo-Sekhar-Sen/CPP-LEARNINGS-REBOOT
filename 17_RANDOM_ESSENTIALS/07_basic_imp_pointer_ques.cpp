#include <iostream>
using namespace std;

void change(int** ptr){
    ++(**ptr);
}
int main(){
    int num = 110;
    int* p = &num;
    change(&p);
    cout << num << endl;
    return 0;
}