#include <stdio.h>
#include <stdlib.h>
char* subs(char *s, int a, int b);
int main(){
    char str[100];
    int initial,final;
    printf("\nEnter the String : ");
    scanf("%[^\n]", str);
    printf("\nEnter the values of Initial and final : ");
    scanf("\n%d",&initial);
    scanf("\n%d",&final);
    printf("The Final String : %s",subs(str,initial,final));
    return 0;
}
char* subs(char *s, int a, int b){
    char *substr = (char*)malloc((b + 1) * sizeof(char));
    if (substr == NULL) {
        return NULL; // Memory allocation failed
    }
    int i;
    for (i = 0; i < b; i++) {
        substr[i] = s[a + i];
    }
    substr[b] = '\0'; // Null-terminate the string
    return substr;
}
