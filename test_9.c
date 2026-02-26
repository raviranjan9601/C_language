// chaek a number is devisible by 2 or not

#include <stdio.h>
int main(){
    int num_cheak;

    printf("Enetr a Number to Cheak it Divisible by 2 or Not: ");
    scanf("%d", &num_cheak);

    int cheak = num_cheak % 2 == 0;
    
    printf("%d", cheak);

    return 0;

}