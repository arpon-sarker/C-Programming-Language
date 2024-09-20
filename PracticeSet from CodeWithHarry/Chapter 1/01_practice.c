/*Question: Write a C program to calculate area of a rectangle. Using inputs supplied by the user.*/

#include<stdio.h>
int main(){
    int legnth, width;
    printf("Enter the Legnth of rectangle: ");
    scanf("%d", &legnth);
    printf("Enter the Width of rectangle: ");
    scanf("%d", &width);
    int area = legnth * width;

    printf("The area according to your values is: %d", area);


    return 0;
}