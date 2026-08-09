#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    void* ptr = malloc(20); //ALLOCATES 20 BYTES OF DATA AND RETURNS THE ADDRESS TO ptr!!
    //FOR USING malloc() IN C++ WE NEED TO INCLUDE cstdlib HEADER FILE!!
    //THIS RANDOM BYTES ARE THEN CONVERT TO OTHER DATATYPE!!
    cout << ptr << endl; //IT HAS SOME ADDRESS!! BUT....
    // cout << *ptr << endl; //THIS IS NOT ALLOWED AS IT MAY HAVE SOME GARBAGE VALUE!! BUT THERE IS NO DATATYPE!!

    int* iptr = (int*)ptr; //ONCE IT IS CONVERTED THEN WE CAN ACCESS IT THOUGH STILL IT WILL HAVE SOME GARBAGE VALUE!!
    cout << iptr << endl; //THE ADDRESS WILL BE THE SAME!!
    cout << *iptr << endl; //GARBAGE VALUE!! BASICALLY MEANS iptr[0] ONLY!!
    //IN ARRAYS WE KNO THAT *iptr IS SAME AS iptr[0]!!
    //ALSO SINCE THIS malloc IS ALLOTED WITH 20 BYTES AND INT USES 4 BYTES SO THERE WILL BE
    //5 CONTINUOS 4 BYTES OF MEMORY THAT BASICALLY MEANS AN ARRAY!!
    iptr[0] = 40;
    iptr[3] = 100;
    cout << iptr[0] << " " << *iptr << endl;
    cout << iptr[3] << endl;

    int* arr = new int[5]; //THIS ALSO MEANS SAME THING IN C++!!
    arr[1] = 20; 
    arr[3] = 40;
    cout << arr[0] << " " << arr[3] << endl;
    //WE CAN DIRECTLY DECLARE malloc WITH ANY DATA TYPE TOO!!
    int* iptr2 = (int*)malloc(sizeof(int)); //THIS ALSO ALLOCATES 4 BYTES OF MEMORY AND RETURNS ADDRESS TO iptr2!!

    // char* cptr = malloc(1); //YOU CANNOT DO THIS WAY BECAUSE malloc RETURNS ONLY TO void!!
    char* cptr = (char*)malloc(sizeof(char)); //WE CAN DO THIS THOUGH!!
    char* cptr2 = new char; //IN C++!!
    *cptr = 's';
    *cptr2 = 'u';
    cout << cptr << " " << *cptr << endl;
    cout << cptr2 << " " << *cptr2 << endl;
    free(ptr);
    free(iptr);
    delete[] arr;
    free(iptr2);
    free(cptr);
    delete cptr2;
    return 0;
}