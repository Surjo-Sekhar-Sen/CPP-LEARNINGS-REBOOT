#include <iostream>

int main(){
    int size;
    std::cout << "Give the size of 1-D array: " << std::endl;
    std::cin >> size;

    int* arr1d = new int[size];
    for(int i = 0; i <= (size-1); i++){
        std::cout << "Enter the element in arr[" << i << "] position: ";
        std::cin >> arr1d[i];
    }

    int val = 1;
    int (*arrval)[2] = new int[size+1][2];
    arrval[0][0] = 0;
    arrval[0][1] = 0;
    for(int i = 1; i <= (size); i++){
        if((size % i) == 0){
            int j = size / i;
            arrval[val][0] = i;
            arrval[val][1] = j;
            val++;
        }
        else{
            arrval[val][0] = i;
            arrval[val][1] = 0;
            val++;
        }
    }
    std::cout << "Your options for 2-D transformation are: " << std::endl;

    for(int i = 0; i <= (size); i++){
        if((arrval[i][0] != 0) && (arrval[i][1] != 0)){
            std::cout << "Row value: " << i << ": (" << arrval[i][0] << "," << arrval[i][1] << ")" << std::endl;
        }
    }
    int option;
    std::cout << "Which row value you want to choose from these??: ";
    std::cin >> option;

    int totalrow, totalcol;
    for(int i = 0; i <= (size); i++){
        if(option == i){
            if((arrval[i][0] == 0) && (arrval[i][1] == 0)){
                std::cout << "This cannot be used for 2-D transformation!!";
            }
            totalrow = arrval[i][0];
            totalcol = arrval[i][1];
        }
    }
    int** arr2d = new int*[totalrow];
    for(int i = 0; i <= (totalrow-1); i++){
        arr2d[i] = new int[totalcol];
    }
    int row, col;
    for(int k = 0; k <= (size-1); k++){
        row = k / totalcol;
        col = k % totalcol;
        arr2d[row][col] = arr1d[k];
    }

    for(int i = 0; i <= (totalrow-1); i++){
        for(int j = 0; j <= (totalcol-1); j++){
            std::cout << arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for(int i = 0; i <= (totalrow-1); i++){
        delete[] arr2d[i];
    }
    delete[] arr2d;
    delete[] arrval;
    delete[] arr1d;
    return 0;
}