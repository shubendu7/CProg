#include <stdio.h>
int main(){
    char a[10];
    printf("Enter the Word : \n");
    //scanf("%s",a);//scanf doesnot store the rest of the string after finding the space
    //printf("Enter again : \n");
    //gets(a);
    scanf("%[^\n]",a);
    printf("%s",a);
    return 0;
}