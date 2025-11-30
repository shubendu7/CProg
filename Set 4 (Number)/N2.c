// Armstrong Number

#include<stdio.h>
#include<math.h>
int main(){
    int a,i,num,sum=0,d,l=0;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    a=num;
    // finding length
    while(a!=0){
        l++;
        a/=10;
    }
    
    a=num;
    while(a!=0){
        d=a%10;
        sum=sum+(int)pow(d,l);
        a/=10;
    }
    if(sum==num)
        printf("Armstrong");
    else
        printf("Not Armstong");
return 0;

}