#include<stdio.h>
int main(){
    int f1=1,f2=2,sum=0;
    int i;
    int N;
    printf("Enter the N terms : ");
    scanf("%d",&N);
    printf("\nThe non fibo numbers are : ");
    for(i=4;i<=N;i++){
        sum=f1+f2;
        if(sum!=i)
        printf("%d ",i);
        f1=f2;
        f2=sum;
    }
    return 0;
}