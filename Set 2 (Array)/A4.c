/*
The normal array : 
10      11      12      13      14
The reverse array : 
41      31      21      11      1
*/

#include <stdio.h>
#define pp printf
int reverse(int x);
int main(){
    int arr[50],n,i;
    pp("Enter the size of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        pp("The element in position %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    pp("The normal array : \n");
    for(i=0;i<n;i++){
        pp("%d\t",arr[i]);
        
    }
    pp("\nThe reverse array : \n");
    for(i=n-1;i>=0;i--){
        pp("%d\t",reverse(arr[i]));
    }
    return 0;
}
int reverse(int x){
    int rev=0,d,n;
    n=x;
    while(n){
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    return rev;
}