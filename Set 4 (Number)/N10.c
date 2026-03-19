#include<stdio.h>
int main(){
    int f1=0,f2=1,next=0;
    int M,N;
    printf("Enter the M & N Range Values : ");
    scanf("%d %d",&M,&N);
    printf("\nFibonacci series in the range [%d, %d]: ", M, N);
    
    // Handle edge case when M is 0 or 1
    if(M <= 0 && 0 <= N){
        printf("0 ");
    }
    if(M <= 1 && 1 <= N){
        printf("1 ");
    }
    
    // Generate and print Fibonacci numbers within range
    while(1){
        next = f1 + f2;
        f1 = f2;
        f2 = next;
        
        if(next > N){
            break;
        }
        if(next >= M && next <= N){
            printf("%d ", next);
        }
    }
    printf("\n");
    return 0;
}
