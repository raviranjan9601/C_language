//write a program to cluclate area of squre.
#include <stdio.h>

int main(){
    int side;
    printf("Enter a side of squire: ");
    scanf("%d", &side);
    
    printf("area of squre is : %d", side*side);
    
    return 0;
}// write a program to find area of circle
#include<stdio.h>
#include<math.h>
int main(){
    float r;
    
    printf("Enter a number to find a area of circle: ");
    scanf("%f", &r);
    
    printf("area of circle is: %f", 3.14 * r * r);
    
    return 0;
}