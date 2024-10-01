#include <stdio.h>

void checkEligibility(int age) {
    if (age >= 18) {
        printf("You are old enough to vote, drive, and get a learner's permit.\n");
    } else if (age >= 16) {
        printf("You are old enough to drive and get a learner's permit.\n");
    } else if (age >= 15) {
        printf("You are old enough to get a learner's permit.\n");
    } else if (age >= 5) {
        printf("You are old enough to go to school.\n");
    } else {
        printf("You are not old enough for any of the conditions.\n");
    }
}

int main() {
    int user_age;
    printf("Enter your age: ");
    scanf("%d", &user_age);
    
    checkEligibility(user_age);
    
    return 0;
}