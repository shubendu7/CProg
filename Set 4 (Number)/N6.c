// Adding without using any '+' operators. Using half adder logic

#include <stdio.h>
int main(){
    int a,b,sum=0,carry;
    printf("\nEnter the first number : ");
    scanf("%d",&a);
    printf("\nEnter the second number : ");
    scanf("%d",&b);
    while(b!=0){
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }

    printf("\nThe sum is : %d ",a);
return 0;
}