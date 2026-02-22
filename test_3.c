//write a program to find a perimeter of rectangle.

#include<stdio.h>

int main(){
    float height, width;
    
    printf("Enter height: ");
    scanf("%f", &height);
    
    printf("Enter width: ");
    scanf("%f", &width);
    
    float sum = height + width;
    float cal = 2 * sum;
    
    printf("Perimeter of Rectangle:%f", cal);
    return 0;
}