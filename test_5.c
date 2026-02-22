//Celsius to Fahrenheit.

#include<stdio.h>

int main(){
    float Celsius;
    
    printf("Enter Celsius: ");
    scanf("%f", &Celsius);
    
    printf("Fahrenheit:%f", Celsius * 9 / 5 + 32);
    return 0;
}