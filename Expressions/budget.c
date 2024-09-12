#include <stdio.h>

int main(void){
    char income[9];
    char utilities[9];
    char grocies[9];
    char car[9];
    printf("This is a budger calculator.\n How much do you make a month?\n");
    scanf("%s", income);
    printf("How much do your utilities cost?\n");
    scanf("%s", utilities);
    printf("You make %s\n", income);
    float spend[] = (float) income - (float) utilities;
    printf("%f" ,spend);
    return 0;
}