#include<stdio.h>
int main(){
    int numberStars;
    printf("Enter the number of stars you want: ");
    numberStars = 0;
    int i, j;
    scanf("%d", &i);
    i = i - 1;
    while(i >= numberStars){
        for(j = 0; j <= i; j = j + 1){
            printf("*");
        }
        printf("\n");
        i = i - 1;
    }


    return 0;
}