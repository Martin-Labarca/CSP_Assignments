#include <stdio.h>

int grade;

int main(){
    printf("What percent do you have in the class?\n");
    scanf("%d", &grade);
    if (grade >= 90){
        printf("Your grade is an A\n");
    }else if (grade >= 80){
        printf("Your grade is an B\n");
    }else if (grade >= 70){
        printf("Your grade is an C\n");
    }else if (grade >= 60){
        printf("Your grade is an D\n");
    }else{
        printf("Your grade is an F\n");
    }
    return 0;
}