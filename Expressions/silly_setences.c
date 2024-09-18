#include <stdio.h>

int main() {
    char word1[50], word2[50], word3[50];

    printf("Please enter a word: ");
    scanf("%49s", word1);

    printf("Now, enter the second word: ");
    scanf("%49s", word2);

    printf("Now, enter the last word: ");
    scanf("%49s", word3); 
    
    printf("Once upon a time, a %s decided to use a %s when it needed to use a %s.\n", word1, word2, word3);

    return 0;
}