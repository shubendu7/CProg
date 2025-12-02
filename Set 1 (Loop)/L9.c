/*
      1
     1 1
    1 2 1 
   1 3 3 1
  1 4 6 4 1
1 5 10 10 5 1
*/
#include<stdio.h>
int main(){
    int arr[10][10] = {0};
    int i,j;
    int rows = 6;

    for(i=0; i<rows; i++){
        for(j=0; j<=i; j++){
            if(i==j || j==0)
                arr[i][j]=1;
            else {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }

    for(i=0; i<rows; i++){
        for(j=0; j<rows-1-i; j++){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}