#include <iostream>
#include <string>
using namespace std;

int main(){
    //WELL ALWAYS REMEMBER THAT THE VALUE RETURNED IS AN INDEX!! LIKE ARRAY INDEX!! 
    string str1 = "Surjo Sekhar Sen";
    int indexval1 = str1.find("Sekhar"); //FINDS FOR THE WHOLE STRING AND IF THE WHOLE
    //STRING IS PRESENT THEN RETURNS THE INDEX OF THE FIRST CHARACTER WHERE IT WAS FOUND!!
    cout << "Sekhar found at: " << indexval1 << endl;
   
    int indexval2 = str1.find("Sent"); //IF IT CANNOT FIND THE STRING THEN IT RETURNS 
    //A SPECIAL CONSTANT VALUE CALLED AS npos(no position) PRESENT IN string CLASS!!
    cout << indexval2 << endl; //THIS npos VALUE IS USUALLY -1 IN SIGNED!!
    if(indexval2 == string::npos){
        cout << "Sent cannot be found in string 1" << endl;
    }
    else{
        cout << "Found at: " << indexval2;
    }

    int indexval3 = str1.rfind("Sen"); //THIS ALSO RETURNS THE INDEX IF STRING IS FOUND, 
    //BUT IT STARTS SEARCHING FROM THE RIGHT END!!
    cout << "Sen found at: " << indexval3 << endl;
    //IF STRING NOT FOUND, THEN RETURNS npos!!

    //find_first_of(char)
    int indexval4 = str1.find_first_of("aeiouAEIOU"); //THIS IS USED TO FIND ANY CHARACTER IN THE STRING!!
    //IF TH STRING IS FOUND IT RETURNS THE VERY FIRST INDEX OF IT!!
    //THERE CAN BE MANY NUMBER OF CHARACTERS IN THE STRING THAT MATCHES 
    //BUT IT RETURNS ONLY THE VERY FIRST INDEX OF THE ANY CHARACTER FOUND FIRST!!
    //(aeiouAEIOU) -> THIS WHOLE THING GETS BROKEN DOWN TO SINGLE CHARACTERS!!
    cout << "Found your characters first at: " << indexval4 << endl;
    //RETRUNS npos IF NOT FOUND!! 
    //MAKE SURE TO WRITE THE if CONDITION FOR string::npos SO THAT IT CAN COME CORRECTLY!!
}