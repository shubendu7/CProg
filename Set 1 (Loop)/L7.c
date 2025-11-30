/*
            * 
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
*/

#include <stdio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--)
            printf("  ",j);
        for(j=0;j<=5-i;j++)
            printf(" *");
        for(j=4;j>=i;j--)
            printf(" *");
        printf("\n");
    }
    return 0;
}