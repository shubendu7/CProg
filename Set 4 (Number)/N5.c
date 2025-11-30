// Adding two numbers without using the direct '+' operator between the numbers

#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter the two numbers \na : ");
    scanf("%d",&a);
    printf("\nb : ");
    scanf("%d",&b);
    while(b!=0){
        a++;
        b--;
    }
    printf("The Sum : %d",a);
}