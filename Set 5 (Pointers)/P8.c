#include<stdio.h>
int main(){
char *ptr="Mira Sen";
    (*ptr)++;
    printf("%s\n",ptr);
    ptr++;
    printf("%s\n",ptr);
    return 0;
}