#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    sayHello("Alice");
    sayHello("Bob");
    sayHello("Charlie");
    sayHello("Diana");
    sayHello("Eve");
    
    return 0;
}