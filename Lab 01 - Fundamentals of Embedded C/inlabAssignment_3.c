#include <stdio.h>

int num = 0;

int main(){

    printf("Enter a 3-digit integer number: ");
    scanf("%d", &num);
    if (!(num < 1000 && num > 99))
    {
        printf("Enter only 3 digits number. Please try again. ");
        return 1;
    }
    
    // num = 123;
    // printf("%d%d%d", (num / 100), (num % 100) / 10, num % 100 % 10);
    printf("The number reversed: %d%d%d", (num % 100 % 10), (num % 100 / 10), (num / 100));

    return 0;
}