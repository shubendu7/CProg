#include <stdio.h>
#include <math.h>

int main(){
    int N;
    int i;
    printf("Enter the number : ");
    scanf("%d",&N);
    printf("\nThe Prime factors of the number %d are : ",N);
    int tempN = N;
    while (tempN % 2 == 0) {
        printf("2 ");
        tempN = tempN / 2;
    }
    for (i = 3; i <= sqrt(tempN); i = i + 2) {
        while (tempN % i == 0) {
            printf("%d ", i);
            tempN = tempN / i;
        }
    }
    if (tempN > 2) {
        printf("%d ", tempN);
    }
    printf("\n");
    return 0;
}
