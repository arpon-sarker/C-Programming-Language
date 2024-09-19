#include<stdio.h>
int main(){
    printf("Welcome to the new era of Calculator: \n");
    int a, b, c, d;
    char operator;
    float num1, num2;
    printf("Which operation you want to do? \n");
    printf("1. +\n2. -\n3. *\n4. /\n");
    printf("Enter your operator: ");
    scanf("%c", &operator);
    if(operator == '-' || operator == '2'){
        printf("Enter the big number: ");
        scanf("%f", &num1);
        printf("Enter the small number: ");
        scanf("%f", &num2);
        printf("%f - %f = %f", num1, num2, num1 - num2);

    }
    
    else if(operator == '+' || operator == '1'){
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        printf("%f + %f = %f", num1, num2, num1 + num2);
    }
    else if(operator == '*' || operator == '3'){
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("%f * %f = %f", num1, num2, num1 * num2);
    }
    else if(operator == '/' || operator == '4'){
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        printf("%f / %f = %f", num1, num2, num1 / num2);
    }
    else{
        printf("Invalid Input");
    }

    return 0;
}