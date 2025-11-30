/*
Input a set of numbers in an array and check wheather a given 
element is present in the array or not.
*/

#include <stdio.h>
int main(){
    int arr[10],num,num_chk,c=0;
    int i;
    printf("\nEnter the size : ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("\nPosition %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the number to be checked : ");
    scanf("%d",&num_chk);
    for(i=0;i<num;i++){
        if(num_chk==arr[i]){
            printf("\n The number is found at the index : %d",i+1);
            c=1;
            break;
        }
    }
    if(!c)
        printf("\n The number is not found ");

    return 0;
}