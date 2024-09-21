#include<stdio.h>
int main(){
    printf("Enter the number you want to print: ");
    int number;
    scanf("%d", &number);
    
    for(int i = 1; i <= number - 1; i++){
        int j = 1;
        while(j <= number){
            printf("%d ", j);

            j = j + 1;
        }
        printf("\n");
    }

    return 0;
}
