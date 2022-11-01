#include <stdio.h>

int main(){
    float num = 0;

    printf("Enter a real number: ");
    scanf("%f", &num);

    printf("%f matches conditions: ", num);
    if (3 <= num && num < 8.5)
        printf("A, ");
    else
        printf("not A, ");

    if (num < 3 || (5.4 < num && num <= 7.3) || num > 13)
        printf("B, ");
    else
        printf("not B, ");

    if (num != 3 && num < 9.75)
        printf("C");
    else
        printf("not C");
    
    printf("\n");

    return 0;
}