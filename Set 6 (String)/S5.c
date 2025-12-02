#include<stdio.h>
#include<string.h>
char* Strcpy(char dest[100], char src[100]);
int main(){
    char *s;
    char s1[100], s2[100];
    printf("Enter the String : ");
    gets(s1);
    s = Strcpy(s2, s1);
    printf("The String is : %s", s);
    return 0;
}
char* Strcpy(char dest[100], char src[100]){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
