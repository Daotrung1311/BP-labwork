/*Exercise 6: Enter a string from the keyboard, let’s print the string in reverse.*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Reversed string: ");
    int length = strlen(str);
    for(int i = strlen(str) - 1; i>=0; i--){
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
