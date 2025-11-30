// Input a set of numbers in an array and find the maximum of them

#include <stdio.h>
int main(){
    int num,i,arr[10],max;
    printf("\nEnter the range of the array : ");
    scanf("%d",&num);
    for(i=0;i<=num-1;i++){
        printf("The number is position %d ",i+1);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<=num-1;i++){
        if(max<arr[i])
            max=arr[i];
    }
    for(i=0;i<=num-1;i++){
        printf("\nThe number at position %d is : %d ",i+1,arr[i]);
    }
    printf("\nThe maximum number is %d ",max);
    return 0;
}