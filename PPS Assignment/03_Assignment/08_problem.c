#include<stdio.h>
int main(){
    int numberStars;
    printf("Enter the number you want to print: ");
    numberStars = 0;
    int i, j;
    scanf("%d", &i);
    i = i - 1;
    while(i >= numberStars){
        for(j = 0; j <= i; j = j + 1){
            printf(" %d", j + 1);
        }
        printf("\n");
        i = i - 1;
    }


    return 0;
}
