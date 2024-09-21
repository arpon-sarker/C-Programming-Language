#include<stdio.h>
int main(){
    printf("Enter how much stars do you want to print?: ");
    int a;
    scanf("%d", &a);
    int i = 0;
    while(i <= a - 1){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
        i += 1;

    }


    return 0;
}
