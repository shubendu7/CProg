#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i,v=0,c=0;
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    for(i=0;i<strlen(str);i++){
        
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v++;
        else
            c++;
    }
    printf("\nThe number of vowels : %d",v);
    printf("\nThe number of consonants : %d",c);
    return  0;
}