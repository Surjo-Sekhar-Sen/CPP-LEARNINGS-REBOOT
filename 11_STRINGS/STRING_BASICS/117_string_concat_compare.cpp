#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Surjo";
    string str2 = " Sekhar ";
    string str3 = "Sen"; 
    string str4 = "Surjo";
    string str = str1 + str2 + str3; //STRING CONCATENATION!!
    //THIS IS POSSIBLE BECAUSE STRING IS AN OBJECT SO IT BASICALLY 
    //HAS THE PROPERTY OF OPERATOR OVERLOADING!!
    cout << str << endl;

    if(str1 == str2){ //COMPARISONS ARE DONE BETWEEN EACH CHARACTER!!
        //IN CHAR ARRAYS WE USED strcmp(arr1, arr2) FOR COMPARISON!!
        //WHICH IS COMPARITIVELY SLOWER!! AND ALWAYS CHECKS FOR \0!!
        //AND IT ALSO PROVES TO BE CONFUSING AS THE RESULT OF IT, IF THE ARRAYS ARE TRUE IS 0!!
        //AND IF FALSE THEN ANY OTHER VALUE!!
        
        //THIS COMPARISON ONLY WORKS IN C++ AND NOT IN C!! AS C DON'T HAVE OOPS!!
        cout << "Equal 1 and 2!!" << endl;
    }
    else{
        cout << "Unequal 1 and 2!!" << endl;
    }
    if(str1 == str4){
        cout << "Equal 1 and 4!!" << endl;
    }
    else{
        cout << "Unequal 1 and 4!!" << endl;
    }
    return 0;
}