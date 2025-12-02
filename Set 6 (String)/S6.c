/*
Write a C program that takes the name of a person as input and
prints the first letter of the first name and middle name (if any),
and the title as it is, e.g., Raj Kumar Santoshi as R.K. Santoshi.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char name[] = "Raj Kumar Santoshi";
    char result[100];
    int i = 0; 
    int j = 0; 
    int last_space = -1;

    
    for (int k = 0; name[k] != '\0'; k++) {
        if (isspace(name[k])) {
            last_space = k;
        }
    }

    
    if (i == 0 && !isspace(name[i])) {
        result[j++] = name[i];
        result[j++] = '.';
    }
    while (name[i] != '\0' && i < last_space) {
        if (isspace(name[i]) && name[i+1] != '\0') {
            result[j++] = name[i+1];
            result[j++] = '.';
        }
        i++; 
    }


    strcpy(&result[j], &name[last_space + 1]);

    printf("%s\n", result);
    return 0;
}