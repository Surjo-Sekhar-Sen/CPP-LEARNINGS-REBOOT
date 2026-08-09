#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Total inputs given by OS: " << argc << endl;
    
    // Saare inputs ko print karte hain
    for(int i = 0; i < argc; i++) {
        cout << "Argument [" << i << "] is: " << argv[i] << endl;
    }
    return 0;
}