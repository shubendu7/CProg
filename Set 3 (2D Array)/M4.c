/*
Input a square matrix and swap the left and the right diagonal
*/

#include <stdio.h>
int main(){
    int  arr[3][3],i,j,temp;
    //INPUT
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n Position %d,%d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //PRINT ORIGINAL MATRIX
    printf("\nThe Original Matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //SWAPPING
    for(i=0;i<3;i++){
        temp = arr[i][i];
        arr[i][i]=arr[i][2-i];
        arr[i][2-i]=temp;
    }
    //PRINT NEW MATRIX
    printf("\nThe new Matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}