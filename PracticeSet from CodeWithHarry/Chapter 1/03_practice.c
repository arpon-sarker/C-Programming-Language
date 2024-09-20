/*Question: Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).*/

#include<stdio.h>
int main(){
    printf("Enter the value of temperature in Celsius: ");
    float celsius;
    scanf("%f", &celsius);
    float fahrenheit = ((1.8 * celsius) + 32);
    printf("Teperature from Celsius(%.2f) to Fahrenheit: %.2f", celsius, fahrenheit);

    return 0;
}