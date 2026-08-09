#include <iostream>
using namespace std;

int main(){
    int height, weight;
    cout << "Enter your height is cms: ";
    cin >> height;
    
    cout << "\n" << "Enter your weight in kgs: ";
    cin >> weight;

    if(height > 175){
        if(weight >= 75){
            cout << "You are overeight!!";
        }
        else if(weight >= 60 & weight < 75){
            cout << "You are healthy!!";
        }
        else if(weight < 60){
            cout << "You are underweight!!";
        }
    }
    else{
        cout << "We only measure for people greater than 175(cms) in height!!GROW SOME HEIGHT DUDE!!";
    }
    return 0;
}