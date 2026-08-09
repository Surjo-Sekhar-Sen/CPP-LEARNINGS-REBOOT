#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[6] = {'S', 'U', 'R', 'J', 'O', '\0'};
    int length = strlen(arr); //IT TGNORES THE \0 (NULL CHARACTER)!!
    cout << "Length of the character array: " << length << endl;

    int i = 0, count = 0;
    char arr2[] = "Sekhar Sen";
    while(arr2[i] != '\0'){
        if(arr2[i] == ' '){
            i++;
            continue;
        }
        count++;
        i++;
    }
    cout << "Length of the 2nd character array: " << count;
    return 0;
}