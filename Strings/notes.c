#include <stdio.h>

int main(void){
    char lname[] = " Martin";
    char fname[] = "Labarca";
    char prefix[] = " ";
    strcat(prefix, fname);
    printf("%s\n", prefix);
    stract(prefix, lname);
    printf("%s\n", prefix);
    printf("%d\n", strlen(prefix));
    return 0;
}