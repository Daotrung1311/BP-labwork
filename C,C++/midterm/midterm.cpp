#include <stdio.h>
int main() {
    int num;
    FILE *file = fopen("input.txt", "w");
    fscanf(file, "%d", &num);
    fprintf(file, "Hello world");

    fclose(file);
}