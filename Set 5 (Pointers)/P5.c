#include <stdio.h>
int main(){
    int a[5],*p;
    for(p=a;p<&a[5];p++){
        *p=p-a;
        printf("%d",*p);
    }
    return 0;
}