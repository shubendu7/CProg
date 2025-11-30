/*
Input two sq matrices and find the sum of them
*/

#include <stdio.h>
int main(){
    int  arr1[3][3],arr2[3][3],sum[3][3],i,j;
    //INPUT
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n Position %d,%d of array 1 and array 2: ",i,j);
            scanf("%d %d",&arr1[i][j],&arr2[i][j]);
        }
    }
    //PRINT ORIGINAL MATRIX
    printf("\nThe Original Matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    //SUM 
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
             sum[i][j]=arr1[i][j]+arr2[i][j];
    printf("\nThe sum of both the array\n");  
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}