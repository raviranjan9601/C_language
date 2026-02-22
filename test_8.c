//arithmatic operator

#include <stdio.h>

int main(){
    float num_1, num_2;
    
    printf("Enter a number: ");
    scanf("%f",&num_1);
    
    printf("Enter a number: ");
    scanf("%f",&num_2);
    
    float sum = num_1 - num_2;
    
    printf("SUM of Your Number is : %f", sum);
    
    return 0;
}