// Strong Number

#include <stdio.h>
int fact(int x);
int main(){
    int sum=0,a,num,d;
    printf("\nEnter the Number : ");
    scanf("%d",&num);
    a=num;
    while(a!=0){
        d=a%10;
        sum+=fact(d);
        a/=10;
    }

    if(sum==num)
        printf("\nStrong Number");
    else
        printf("\nNot Strong Number");
return 0;


}
int fact(int x){
        if(x==0 || x==1)
            return 1;
        else
            return x * fact(x-1);
}
