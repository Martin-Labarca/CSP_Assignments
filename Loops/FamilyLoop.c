#include <stdio.h>

int main() {
    char *Friends[] = {"Aaron", "Nate", "Tate", "Mason", "Daniel"};
    

    for(int i = 0; i < 5; i++) {
        printf("Hello, %s!\n", Friends[i]);
    }
    
    return 0;
}
