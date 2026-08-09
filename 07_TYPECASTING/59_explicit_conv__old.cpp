#include <iostream>
using namespace std;
//THIS IS AN OLD TECHNIQUE USED WHERE WE PUT () AROUND THE DATATYPE IN WHICH WE WANT TO CONVERT!!

int main(){
    int a = 20, b = 25, c = 35;
    double pi = 3.1463627;
    int result1 = (float)28 + (float)a;
    int result2 = float('A') + 2000;
    char result3 = 35 + float(35);
    int result4 = (int)pi;
    int result5 = pi;

    float result6 = a/b;
    int result7 = a/b; //BOTH OF THESE WILL GIVE THE SAME OUTPUT AS a AND b BOTH ARE INTEGER 
    //VALUES AND THERE DIVISION GIVES INTEGER SO THE VALUE IN result6 COMES OUT TO BE SIMILAR IN 
    //DISPLAY BUT ACTUALLY IT IS STORED IN FLOAT IN MEMORY BUT YES IT WILL BE x.000000 SOMETHING!!
    float result8 = (float)a/b; //DOING THIS WILL CHANGE THE a TO FLOAT AND HENCE WE WILL SEE FLOAT VALUE 
    //ACCURATELY AS EXPECTED IN THE RESULT!!

    cout << result1 << " " << result2 << " " << result3 << " " << result4 << " " << result5 << "\n";
    cout << result6 << " " << result7 << " " << result8 << endl;
    return 0;
}