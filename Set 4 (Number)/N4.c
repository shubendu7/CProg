// Prime Number

#include <stdio.h>
#include <math.h>
int isPrime(int x);
int main(){
    int num;
    printf("\nEnter the number : ");
    scanf("%d",&num);
    if(isPrime(num))
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
int isPrime(int x){
    int i;
    for(i=2; i*i<=x; i+=1){ //x=2
        printf(".");
        if(x % i == 0)
            return 0; 
    }
    return 1; 
}
