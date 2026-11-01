#include <stdio.h>

void greet(const char *name) {
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
}

int main(void) {
    printf("Hello, World!\n");
    greet("Tharun");
    return 0;
}
