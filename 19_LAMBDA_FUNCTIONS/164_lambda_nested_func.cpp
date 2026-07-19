#include <Iostream>
#include <string>
using namespace std;

auto outerfunc(){
    int num = 100; //THIS IS CREATED INSIDE THE outerfunc FUNCTION!!
    //WHICH MEANS IT WILL BE DE-ALLOCATED ONCE THE FUNCTION ENDS WHICH HAPPENS WHEN FUNCTION RETURNS!!
    cout << "Num before change and memory deletion: " << num << endl;
    auto innerfunc = [num](int *value)mutable{//THERE WILL BE AN ERROR THROWN IF YOU TRY TO MODIFY num VALUE 
        //USING num AND NOT &num BECAUSE PASS BY VALUE TREATS IT AS CONST VALUE!! SO YOU NEED TO MAKE IT MUTABLE
        //USING mutable KEYWORD!! 
        cout << "Num before: " << num << endl;
        num = num + (*value);
        cout << "Value before: " << (*value) << endl;
        num++;
        (*value)++;
        cout << "Num after: " << num << endl;
    };
    cout << "Num after change but before memory deletion(no change bcoz innerfunc isn't executed yet!!) : " << num << endl;
    return innerfunc; //WE RETURNED THE FUNCTION FROM THE OUTER FUNCTION TO BE USED!!
    //IMPORTANT -> ONCE THE VALUE IS RETURNED AND SINCE YOU CREATED THE num VALUE INSIDE IT 
    //SO EVEN IF YOU HAVE USED IT INSIDE THE innerfunc THE MEMORY WILL STILL BE DELETED
    //AND GARBAGE VALUE WILL BE PRINTED!!
}

int main(){
    int value = 40;
    auto outer = outerfunc();
    outer(&value);
    cout << "Value after: " << value << endl;
    return 0;
}