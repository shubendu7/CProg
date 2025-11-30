#include<stdio.h>
int main()
 {
  int a[] = {1,2,3,5,5,6};
  int *ptr = a + 2;
  printf("%d %d", *++ptr, *--ptr);
  return 0;
 }