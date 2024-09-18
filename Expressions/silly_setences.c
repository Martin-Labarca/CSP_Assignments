#include <stdio.h>

int main() {
    char word1[50], word2[50], word3[50];

    printf("Enter the first word: ");
    scanf("%49s", word1);

    printf("Enter the second word: ");
    scanf("%49s", word2);

    printf("Enter the third word: ");
    scanf("%49s", word3); 
    
    printf("Once upon a time, a %s decided to ride a %s while eating a %s.\n", word1, word2, word3);

    return 0;
}