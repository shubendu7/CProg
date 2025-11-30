//Find the mid value of an array using pointers
#include<stdio.h>
int *findmid(int a[],int len);
int main(){
    int a[]={1,2,3,4,5};
    int len=sizeof(a)/sizeof(a[0]);
    int *mid=findmid(a,len);
    printf("The mid value is : %d ",*mid);
    return 0;
}
int *findmid(int a[],int len){
    return &a[len/2];
}
