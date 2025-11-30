#include<stdio.h>
typedef struct abc{
    int x;
    int y;
}ab;
int main(){
    ab a={0,1};
    ab *ptr=&a;  

    printf("%d\n",ptr->x);/* 
    = ptr->x 
    = (*ptr).x
    = (*&a).x
    = a.x
    = 0
    */
    printf("%d",ptr->y);/*
    = ptr->y
    = (*ptr).y
    = (*&a).y
    = a.y
    = 1
    */
}