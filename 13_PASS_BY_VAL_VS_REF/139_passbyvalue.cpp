#include <iostream>
#include <string>
using namespace std;

void change(string str, int value){ //PASS BY VALUE!!
    //IT TAKES A COPY OF THE ORIGINAL VALUE AND USES IT FOR THE CODE!!
    //THERE IS NO CHANGE IN THE ORIGINAL VALUE!!
    //UNTIL OR UNLESS YOU ARE USING AND RETURNING SOMETHING FROM THIS FUNCTION
    //YOU WON'T GET TO SEE ANY EFFECTS ON THE ORIGINAL VALUE!!
    cout << value << " " << str << endl;
    value++;
    str[2] = 't';
    cout << value << " " << str << endl;
    return;
}

int main(){
    int a = 2;
    string str1 = "Surjo";
    change(str1, a);
    cout << a << " " << str1 << endl;
    return 0;
}