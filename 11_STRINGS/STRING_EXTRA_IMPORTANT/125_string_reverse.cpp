#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    //USING reverse FOR STRING!!
    string str1 = "Surjo";
    cout << "String before reversing: " << str1 << endl;
    //REVERSE TAKES TWO PARAMETERS BOTH ARE POINTERS!!
    reverse(str1.begin(), str1.end()); //FOR USING reverse() WE NEED TO INCLUDE algorithm HEADER FILE!!
    //THIS FUNCTION CHANGES THE MAIN STRING ON WHICH WE WANT TO PERFORM THE OPERATION!!
    //INSTEAD OF DEEP COPY IT MAKES A SHALLOW COPY AND CHANGES THE SAME VALUE!!
    cout << "String after reversing: " << str1 << endl;

    //USING reverse FOR CHAR ARRAY!!
    char arr[] = "Surjo";
    int length = strlen(arr); //FOR USING strlen WE HAVE TO INCLUDE cstring HEADER FILE!!
    cout << "Char Array before reversing: " << arr << endl;
    //IN C-STYLE CHAR ARRAYS WE CANNOT USE begin() AND end() AS THIS IS AN ADDED PART IN C++!!
    //WE HAVE TO CREATE OUR OWN POINTERS FOR THIS!!
    reverse(arr, arr + length);
    cout << "Char Array after reversing: " << arr << endl;
    return 0;
}