#include<iostream>

int main(){
    int numbers[6]{5,10,15,50,80,90};

    for(int i=0; i<6; i++){
        std::cout << numbers[i] << "\t";

    }

    std::cout << std::endl;

    std::cin.get();

    return 0;

}