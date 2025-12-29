#include <stdio.h>

int main(){
    char name[50];
    printf("Enter your name\n: ");
    scanf("%s", &name);

    printf("Name entered: %s", name);
    return 0;
}