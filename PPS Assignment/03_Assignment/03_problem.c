#include<stdio.h>
int main(){
    printf("Enter the number of stars that you want to print: ");
    int number, i = 0, j;
    scanf("%d", &number);
    while(number >= i - 1){
        for(j = 0; i >= j; j = j + 1){
            printf("*");
        }

        printf("\n");
        i = i + 2;

    }

    return 0;
}