//write a program to take a number from user and print the cube of that number.

#include<stdio.h>

int main(){
    float cube;
    
    printf("Enter cube: ");
    scanf("%f", &cube);
    
    printf("cube of %f is:%f", cube, cube * cube * cube);
    return 0;
}