/*
Find column wise maximum element pf the matrix and print them
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
    
    for(j=0;j<5;j++){
        max=arr[0][j];
        for(i=1;i<4;i++){
            if(arr[i][j] > max) max = arr[i][j];
        }
        printf("Column %d max: %d\n", j+1, max);

    }
    return 0;
}
