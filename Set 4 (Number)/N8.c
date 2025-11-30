/*
  Floyd's triangle
  1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15
*/ 

#include<stdio.h>
int main(){
    int i,k=1,j;
    for(i=0;i<6;i++){
        for(j=0;j<i;j++){
            printf(" %d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
