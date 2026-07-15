#include <iostream>
using namespace std;
//THIS IS WAY TO DYNAMICALLY ALLOCATE CHARACTER ARRAYS (USING LOOP)!!
//HERE YOU HAVE TO PUT EACH CHARACTER ONE BY ONE!!

int main(){
    int n;
    cout << "Enter the size of character array: ";
    cin >> n;
    char* name = new char[n+1]; //+1 for the null character

    for(int i = 0; i <= n; i++){
        if(i == n){
            name[i] = '\0';
            break;
        }
        cout << "Put the character value in " << i+1 << " position: ";
        cin >> name[i];
        cout << endl;
    }
    cout << name;
    delete[] name;
    return 0;
}