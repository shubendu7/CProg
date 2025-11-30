#include <stdio.h>
#include <string.h>
void word_frequency(char str[],char wd[]);
int main(){
    char string[100];
    char word[100];
    printf("Enter the String : ");
    gets(string);
    printf("\nEnter the word to be searched : ");
    gets(word);
    word_frequency(string,word);
    return 0;
}
void word_frequency(char str[],char wd[]){
    int i,c=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            c++;
    }
    printf("The number of spaces : %d",c);
}