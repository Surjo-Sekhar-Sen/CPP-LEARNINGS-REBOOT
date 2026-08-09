#include <iostream>
using namespace std;
//JUST FOR FUN THINGS!! MAKING DYNAMIC 2D CHAR ARRAY WITH NAMES!!
//DIFFERENT COLUMN SIZE ACCORDING TO NAME LETTERS!!
int main(){
    int n;
    cout << "Enter the number of words in your name: ";
    cin >> n;

    char** name = new char*[n];
    char* cols = new char[n];
    for(int i = 0; i <= (n-1); i++){
        cout << "Enter how many letters are there in the " << i+1 << " postiton word of your name: ";
        cin >> cols[i];
    }

    for(int i = 0; i <= (n-1); i++){
        name[i] = new char[cols[i] + 1]; //+1 for null character!!
    }

    for(int i = 0; i <= (n-1); i++){
        cout << "Enter the " << i+1 << " position of your name: ";
        cin >> name[i];
    }
    for(int i = 0; i <= (n-1); i++){
        cout << name[i] << " ";
    }
    for(int i = 0; i <= (n-1); i++){
        delete[] name[i];
    }
    delete[] cols;
    delete[] name;
    return 0;
}