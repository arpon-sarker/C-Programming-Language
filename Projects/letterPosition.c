#include<stdio.h>
int main(){
    char letter;
    int letter_Position;

    printf("Enter a character between A and Z: ");
    scanf("%c", &letter);

    if('A' <= letter && 'Z' >= letter){
        letter_Position = letter + 1 - 65;
        if('A' == letter){
            printf("Position of %c is %dst.\n", letter, letter_Position);
        }
        else if('B' == letter){
            printf("Position of %c is %dnd.\n", letter, letter_Position);
        }
        else if('C' == letter){
            printf("Position of %c is %drd.\n", letter, letter_Position);
        }
        //letter_Position = letter + 1 - 65;
        else{
            printf("Position of %c is %dth.\n", letter, letter_Position);
        }
    }
    else{
        printf("Not order of the Character.\n");
    }


    return 0;
}
