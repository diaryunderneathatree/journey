//This program asks your name and outputs it back to you

#include <stdio.h>

int main()
{
    char name[747];
    char surname[747];
    printf("What is your name?\n");
    scanf("%s %s", &name, &surname);
    
    printf("Hello %s %s.\n", name, surname);
}
