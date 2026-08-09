#include <iostream>
#include <string>
using namespace std;

int main(){
    char arr[6] = "Surjo";
    char (&refchararr)[6] = arr; //THIS ( ) PARENTHESES IS NECESSARY!!
    refchararr[0] = 'T';
    cout << refchararr << " " << "arr";

    int arra[6] = {1, 2, 3, 4, 5, 6};
    int (&refarra)[6] = arra;
    refarra[1] = 10;
    cout << arra << " " << refarra << endl; //GIVES ADDRESS!!
    cout << arra[1] << " " << refarra[1] << endl;
    return 0;
}