// Reverse a number

#include <stdio.h>
int main(){
    int num1, rev=0 ;

    printf("Enter number to find reverse number: ");
    scanf("%d", &num1);
    
    int og_num = num1;

    while (num1 > 0)
    {
        rev = (rev * 10) + num1 % 10;
        num1 = num1 / 10; 
    }
    printf("\n %d revrse is %d", og_num, rev);
    return 0;

    
}