#include <stdio.h>
// User Input and Output

int main() { 
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s!, Welcome to C Programming.\n",name);
    return 0;
}
