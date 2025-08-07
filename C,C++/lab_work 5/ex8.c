/*Exercise 8: Enter a string and a character x from 
the keyboard and delete all the characters x
in the string.*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    char x;
    scanf("%c", &x);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] != x){
            printf("%c", str[i]);
        }
    }


    return 0;
}