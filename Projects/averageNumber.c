#include<stdio.h>
int main(){
    int a, b, c;
    float average;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    average = (float)(a + b + c)/3;

    printf("Average: %0.3f", average);

    return 0;
}
