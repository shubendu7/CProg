#include <stdio.h>
#define pp printf
#define sc scanf
int main(){
    int arr[50],i,n,c[50],j,k=0;
    for(i=0;i<50;i++) 
        c[i]=0;
    pp("Enter the size of array : ");
    sc("%d",&n);
    
    for(i=0;i<n;i++){
        pp("Element in the %d position : ",i+1);
        sc("%d",&arr[i]);
    }
    
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            if(arr[k]==arr[i])
                c[k]++;
    
    for(i=0;i<n;i++){
        int ap = 0;
        for(j=0;j<i;j++){
            if(arr[j] == arr[i]){
                ap = 1;
                break;
            }
        }
        if(!ap){
            pp("%d - %d\n",arr[i],c[i]);
        }
    }
    return 0;
}
