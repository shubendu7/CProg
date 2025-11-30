/*
Input a square matrix and display the sums of the left diagonal 
and right diagonal 
*/
#include <stdio.h>
int main(){
    int  arr[3][3],i,j,max,sum_left=0,sum_right=0;
    //Input of the matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n Position %d,%d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //Printing the matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
   /* for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j)
            sum_left+=arr[i][j];
            else if(i+j==2)
                sum_right+=arr[i][j];
        }
    }*/
    for(i=0;i<3;i++){
        sum_left+=arr[i][i];
        sum_right+=arr[i][2-i];
    }
    printf("\n The sum of the Left Diagonal : %d \n The sum of the rigth diagonal : %d",sum_left,sum_right);
    printf("\n The Total is : %d",sum_right+sum_left);
    return 0;
}