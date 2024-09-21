#include<stdio.h>
int main(){
    printf("Enter the number you want to print?: ");
    int num_Pattern;
    scanf("%d", &num_Pattern);
    int i = 0;
    while(i <= num_Pattern - 1){
        for(int j = 0; j <= i; j++){
            printf("%d ", j + 1);
        }
        printf("\n");
        i += 1;

    }


    return 0;
}
