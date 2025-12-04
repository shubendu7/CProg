#include<stdio.h>
int main(){
    int f1=1,f2=2,sum=0;
    int i=4;
    int N;
    printf("Enter the N terms : ");
    scanf("%d",&N);
    printf("\nThe non fibo numbers are : ");
    while(N){
        sum=f1+f2;
        if(sum!=i)
        printf("%d ",i);
        f1=f2;
        f2=sum;
        i++;
        N--;
    }
    return 0;
}