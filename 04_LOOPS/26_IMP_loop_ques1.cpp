#include <iostream>
using namespace std;

int main(){
    int i;
    //IF YOU AGAIN WRITE int i = 0 IN FOR LOOP THEN IT WILL BE CONSIDERED A NEW VARIABLE DECLARATION!! 
    for(i = 0; i <= 5; i++);{ //GIVING ; HERE MEANS THAT THE LOOP HAS ENDED!!
        //THIS WILL SEPERATE THE CODE OF cout << i; IN A DIFFERENT SCOPE!!
        //IF YOU DON'T DECLARE i EARLIER THEN THIS WILL THRO ERROR AS YOU HAVE NOT DEFINED 
        //i IN ITS SCOPE!! 
        cout << i;
    }
}