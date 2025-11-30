#include<stdio.h>
int main(){
int val=5;
    int *ptr = &val ;
    printf("%u\n",ptr);
    printf("%d %d\n",val,*++ptr);
    printf("%u\n",ptr);
    return 0;
}