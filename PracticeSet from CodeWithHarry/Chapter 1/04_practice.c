/*Question: Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/

#include<stdio.h>
int main(){
    float principal, years, rateInterest;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter the number of years you want: ");
    scanf("%f", &years);
    printf("Enter the rate of interest: ");
    scanf("%f", &rateInterest);

    float valueSI = (principal * years * rateInterest)/100;
    printf("Your simple Interest: %.2f\n", valueSI);


    return 0;
}