//Find the min and max values of an array using pointers
#include <stdio.h>
void Minmax(int arr[],int l,int *min,int *max){
    *min=*max=arr[0];
    int i;
    for(i=1;i<l;i++){
        if(*min>arr[i])
            *min=arr[i];
        else if(*max<arr[i])
            *max=arr[i];
    }
}
int main(){
    int len,min,max;
    int a[]={23,45,6,98,46};
    len = sizeof(a)/sizeof(a[0]);
    Minmax(a,len,&min,&max);
    printf("The minimum value is : %d\nThe maximum value is : %d  ",min,max);
    return 0;
}