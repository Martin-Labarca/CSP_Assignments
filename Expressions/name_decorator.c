#include <stdio.h>

int main() {
    char name[9];
    char tag[9];
    char answer[3];

    printf("What is your name?\n");
    scanf("%49s", name);

    printf("Now select a tag\n");
    scanf("%49s", tag);
    
    printf("Hello %s you choosed the tag: %s\n", name, tag);

    return 0;
}