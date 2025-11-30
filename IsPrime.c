#include <stdio.h>
int isPrime(int a);
int main(){
    int x,y,i;
    printf("Enter the Range x,y : ");
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++){
        if(isPrime(i))
            printf("The number %d is a Prime number\n",i);
    }
    return 0;
}
int isPrime(int a){
    int i;
    if(a < 2) 
        return 0;
    for(i=2;i<=a/i;i++){
        if(a%i==0)
           return 0;
    }
    return 1;
}
