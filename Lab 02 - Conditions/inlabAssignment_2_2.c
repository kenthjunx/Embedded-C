#include <stdio.h>

int main(){

    int digit = 0;
    printf("Enter a digit[0-9]: ");
    scanf("%d", &digit);

    if(digit==0)
        printf("zero");
    else if(digit==1)
        printf("one");
    else if (digit == 2)
        printf("two");
    else if (digit == 3)
        printf("three");
    else if (digit == 4)
        printf("four");
    else if (digit == 5)
        printf("five");
    else if (digit == 6)
        printf("six");
    else if (digit == 7)
        printf("seven");
    else if (digit == 8)
        printf("eight");
    else if (digit == 9)
        printf("nine");
    else
        printf("%d is not a digit", digit);

    return 0;
}