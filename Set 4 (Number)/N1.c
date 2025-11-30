// Palindrome Number

#include <stdio.h>
int main(){
    int num,a,i,d,sum=0;
    printf("\nEnter the Number : ");
    scanf("%d",&num);
    a=num;
    while(a!=0){
        d=a%10;
        sum=sum*10+d;
        a/=10;
    }
    if(sum==num)
        printf("Palindrome");
    else
        printf("Not Palindrome");
return  0;
}