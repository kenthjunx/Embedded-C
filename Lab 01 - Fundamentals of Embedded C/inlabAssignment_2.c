#include <stdio.h>

int num = 0, sum = 0;
float mean = 0;

int main(){

    printf("Enter 1st number: ");
    scanf("%d", &num);
    sum += num;
    printf("Enter 2nd number: ");
    scanf("%d", &num);
    sum += num;
    printf("Enter 3rd number: ");
    scanf("%d", &num);
    sum += num;
    printf("Enter 4th number: ");
    scanf("%d", &num);
    sum += num;
    printf("Enter 5th number: ");
    scanf("%d", &num);
    sum += num;

    mean = sum / 5.0;
    printf("The mean of all 5 numbers is %0.2f", mean);

    return 0;
}