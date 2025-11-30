/*
Find row wise maximum element of the matrix and print them
*/
#include <stdio.h>
int main(){
    int  arr[4][5],i,j,max;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("\n Position %d,%d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<4;i++){
        max = arr[i][0];
        for(j=1;j<5;j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
        printf("Row %d max: %d\n", i+1, max);
    }
    return 0;
}
