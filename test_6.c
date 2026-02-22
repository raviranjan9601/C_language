//Fahrenheit °F to Celsius °C Formula
#include <stdio.h>

int main(){
    float Fahrenheit;
    printf("enter fahrenheit: ");
    scanf("%f", &Fahrenheit);
    
    printf("Celsius is:%f", (Fahrenheit - 32) / 1.8);
    return 0;
}