//Swap two numbers (with & without third variable)

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two number for swape each Other: ");
    scanf("%d %d",&num1, &num2);

    printf("\n 1st number is = %d, and 2nd number is = %d", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\n 1st number is = %d, and 2nd number is = %d",num1, num2);

    return 0;

}