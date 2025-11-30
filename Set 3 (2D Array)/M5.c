/*
Input a Matrix and display the sum of the elements in each row and each column
*/

#include <stdio.h>
int main(){
    int  arr[3][3],i,j,sum_row[3],sum_col[3];
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
    //ADDING THE ROW ELEMENTS
    for(i=0;i<3;i++){
        sum_row[i]=0;
        sum_col[i]=0;
        for(j=0;j<3;j++){
            sum_row[i]+=arr[i][j];
            sum_col[i]+=arr[j][i];
        }
    }
    //PRINTING THE SUM
    for(i=0;i<3;i++)
        printf("\nThe sum of row %d is : %d\nThe sum of column %d is : %d",i+1,sum_row[i],i+1,sum_col[i]);
    return 0;
}