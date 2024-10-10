#include <stdio.h>

int main() {
    char *people[] = {"Aaron", "Nate", "Tate", "Mason", "Daniel"};
    

    for(int i = 0; i < 5; i++) {
        printf("Hello, %s!\n", people[i]);
    }
    
    return 0;
}
