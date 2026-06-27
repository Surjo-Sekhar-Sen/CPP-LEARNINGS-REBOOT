#include <iostream>
using namespace std;

namespace newtask { //IT BASICALLY BECAOMES A GLOBAL NAMESPACE
    //EITHER WE WRITE THE NAME newtask FOR THE NAMESAPCE OR WE DON'T 
    //AND KEEP IT ANONYMOUS!!
    int age = 21;

    void hello(){
        std::cout << "Hello Everyone!!";
    }
}

namespace { //ANONYMOUS WAY!!
    void hi(){
        std::cout << "Hi Everyone!!";
    }
}

namespace {
    void hello(){
        std::cout << "Hello Everyone Anonymously!!";
    }
}

int main(){
    std::cout << newtask::age << "\n";

    newtask::hello();
    std::cout << std:: endl;
    hello();
    std::cout << "\n";
    hi();
    return 0;
}