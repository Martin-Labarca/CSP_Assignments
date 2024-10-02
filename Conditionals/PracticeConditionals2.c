#include <stdio.h>

int num = 20;

int main(){
    if (num < 10){
        print("This is a sinlge digit number");
    }else if (num < 100){
        printf("This is a double digit number");
    }else{
        printf("This is at least a triple digit number");
    }
    return 0;
}