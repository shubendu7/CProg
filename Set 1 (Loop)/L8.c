/*
   2
  3 5
 7 11 13
17 19 23 29
*/

#include <stdio.h>
int isPrime(int x);
int main(){
    int i,j,k=2;
    for(i=0;i<4;i++){
        for(j=0;j<3-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            while(!isPrime(k)) 
                k++;
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
int isPrime(int x){
    int i;
    for(i=2;i<=x/i;i++)
        if(x%i==0)
            return 0;
    return 1;
}