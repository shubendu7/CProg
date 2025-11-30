#include<stdio.h>
int main()
{
    int a[5]={1,3,6,7,0};
    int *b;
    b=&a[2];
    printf("%d",*b);//*(b-n)== b[-n]
    return 0;
}