/* 
Input a set of number in an array and seperately 
find the sum of the elements in the odd position and the even position

    0   1   2   3   4
    12  11  15  09  21

odd places 0,2,4
even places 1,3 
as by user i=i+1
*/

#include <stdio.h>
int main(){
    int arr[10],num,sum_odd=0,sum_even=0;
    int i;
    printf("\nEnter the size : ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("\nPosition %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
        printf(" %d ",arr[i]);
    for(i=0;i<num;i++)
        if(i%2)
            sum_odd+=arr[i];
        else
            sum_even+=arr[i];
    printf("\n The sum of the odd indexes : %d \n The sum of the even indexes : %d",sum_even,sum_odd);
    return 0;
}