#include <stdio.h>

float hour = 0, min = 0, sec = 0;

int main(){
    printf("Enter hours: ");
    scanf("%f", &hour);
    printf("Enter minutes: ");
    scanf("%f", &min);
    printf("Enter seconds: ");
    scanf("%f", &sec);

    printf("The entered time is: %0.0f hours %0.0f minutes %0.2f seconds", hour, min, sec);

    return 0;
}