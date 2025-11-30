//Sum of elements

#include <stdio.h>
#define pp printf
int main(){
    int a[]={1,2,3,4,5,6};int *p,sum=0; 
    for(p=a;p<=a+5;p++){
        sum+=*p;
    }
    pp("Sum : %d ",sum);
    return 0;
}