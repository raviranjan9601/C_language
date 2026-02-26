//Check Prime number

#include <stdio.h>
int main(){
    int num1, j, factor = 0;

    printf("Enter a number to cheak number is prime or not : ");
    scanf("%d",&num1);

    for(j = 1; j <= num1; j++){
        if(num1 % j == 0){
            factor++;
        }
        // printf("\n %d factor", factor);
    }
    if(factor == 2){
        printf("\n %d is prime number.", num1);
    }
    else{
        printf("\n number is not prime.");
    }

    return 0;
}