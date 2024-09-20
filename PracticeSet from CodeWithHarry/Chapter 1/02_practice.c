/*Question: Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.*/

#include<stdio.h>
int main(){
    int radius, height;
    
    printf("Enter the radius to calculate the area of a Circle: ");
    scanf("%d", &radius);
    float area = 3.1416 * radius * radius;
    printf("Area of the Circle according to your values: %.2f\n", area);
    printf("Enter the height for calculating the valume of a Cylinder: ");
    scanf("%d", &height);
    float volume = area * height;
    printf("Valume of the Cylinder according to your values: %.2f", volume);

    printf("\nThank you");

    return 0;
}