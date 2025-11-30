/*
Input two matrices and find their product
*/
#include <stdio.h>
int main(){
    int arr1[3][3], arr2[3][3], pro[3][3];
    int i, j, k;

    // Initialize product matrix to zero
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            pro[i][j] = 0;
        }
    }

    // Input matrices
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Enter element [%d][%d] for array 1 and array 2: ", i, j);
            scanf("%d %d", &arr1[i][j], &arr2[i][j]);
        }
    }

    // Print original matrices
    printf("\nArray 1:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nArray 2:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // Calculate product
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                pro[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Print product matrix
    printf("\nProduct of the two arrays:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", pro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
