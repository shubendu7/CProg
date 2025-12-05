#include<stdio.h>
int main(){
    int f1=0,f2=1,sum=0;
    int Fibo[100]={[0]=0,[1]=1};
    int i=2;
    int M,N;
    printf("Enter the M & N Range Values : ");
    scanf("%d %d",&M,&N);
    printf("\nThe Sum of Fibo numbers : ");
    while(M!=N){
        sum=f1+f2;
        Fibo[i]=sum;
        f1=f2;
        f2=sum;
        i++;
        M++;
    }
    return 0;
}