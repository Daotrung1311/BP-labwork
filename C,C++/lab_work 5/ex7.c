/*Exercise 7: Enter a string from the keyboard, let’s print out the number of the character ‘a’ in
the string and their orders in the string.*/

#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\"a\" at position: " );
    for(int i = 0;  i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A'){
            printf("%d", i+1);
            count ++;
        }
    }
    printf("\nTotal number of 'a': %d\n", count);
    return 0;
}