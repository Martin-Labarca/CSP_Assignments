#include <stdio.h>
#include <string.h>

int main(void){
    char animal[20];
    char place[20];
    char verb[20];
    char setence[400];
    printf("Name an animal: ");
    scanf("%s", animal);
    printf("Name a place: ");
    scanf("%s", place);
    printf("Name a past tense verb: ");
    scanf("%s", verb);
    strcat(setence, animal);
    strcat(setence, " went to the ");
    strcat(setence, place);
    strcat(setence, " and ");
    strcat(setence, verb);
    strcat(setence, "with his friend the angry turtle.\n");
    printf("%s", setence);
    return 0;
}