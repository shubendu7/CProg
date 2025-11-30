#include <stdio.h>
#include <math.h>

// Function prototype
void menu();

int main() {
    char choice,flag;
    float num1, num2, result;
    flag='n';
    do {
        menu();

        
        
        printf("\nEnter the first number operator and the second number : ");
        scanf("%f %c %f",&num1,&choice,&num2);
        
        
        // Perform calculation based on choice
        switch(choice) {
            case '+': // Addition
                result = num1 + num2;
                printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '-': // Subtraction
                result = num1 - num2;
                printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '*': // Multiplication
                result = num1 * num2;
                printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '/': // Division
                if(num2 == 0) {
                    printf("Error: Division by zero is undefined!\n");
                } else {
                    result = num1 / num2;
                    printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            case '%': // Modulus
                result = (int)num1 % (int)num2;
                printf("\nResult: %.2f %% %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '^': // Power
                result = pow(num1, num2);
                printf("\nResult: %.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;
                
            default:
                printf("Invalid operation!\n");
            }

        printf("Do you want to exit \n");
        scanf(" %c",&flag);
        }while(flag=='n');
    
    
    return 0;
}

void menu() {
    
    printf("\n========== CALCULATOR MENU ==========\n");
    printf("Addition       (+)\n");
    printf("Subtraction    (-)\n");
    printf("Multiplication (*)\n");
    printf("Division       (/)\n");
    printf("Modulus        (%%)\n");
    printf("Power          (^)\n");
    
    
}
