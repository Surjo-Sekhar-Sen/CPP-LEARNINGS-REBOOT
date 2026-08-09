#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string str = "Surjo";
    char arr[6];
    strcpy(arr, str.c_str()); //THIS c_str() CHANGES THE STRING TO OLD C STYLE CHAR ARRAY!!
    //SO IT BECOMES char arr[6] = "Surjo"!!
    cout << arr << " " << str << endl; //THIS IS A DEEP COPY METHOD WHICH COPIES THE ELEMENT FROM 
    //MAIN STRING AND THEN ALIGNS IT TO BE SEATED IN CHAR ARRAYS!!
    
    //IF YOU MAKE ANY CHANGES IN BOTH THEY WON'T AFFECT EACH OTHER!!
    arr[1] = 'a';
    str[4] = 'u';
    cout << arr << " " << str << endl;

    //BETTER WAY BY MAKING A SHALLOW COPY!! MAKES IT FASTER AND BETTER!!
    const char* rawarr = str.c_str(); //WRITING CONSTANT IS NECESSARY OTHERWISE COMPILER ERROR COMES,
    //AS IT IS NOT ALLOWED FOR rawarr TO CHANGE THE VALUE INSIDE str STRING!!
    cout << rawarr << " " << str << " ";

    //IF CHANGES ARE DONE WE SEE BOTH OF THEM GETTING EFFECTED!!
    str[4] = 'o';
    cout << rawarr <<  " " << str << endl;
    return 0;
}