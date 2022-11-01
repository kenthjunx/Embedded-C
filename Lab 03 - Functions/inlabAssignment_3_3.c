#include <stdio.h>

int isLeapYear(int year);
int numberofDays(int month, int year);

int main(){

    int year, month;

    printf("Enter a year: ");
    scanf("%d", &year);
    printf("Enter a month[0-12]: ");
    scanf("%d", &month);

    // year = 2004;

    printf("month %d of %d has %d days", month, year, numberofDays(month, year));

    return 0;
}

int isLeapYear(int year){
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    return 0;
}

int numberofDays(int month, int year){
    if(month==1)
        return 31;
    else if(month==2){
        if(isLeapYear(year))
            return 29;
        return 28;
    }
    else if(month==3)
        return 31;
    else if(month==4)
        return 30;
    else if(month==5)
        return 31;
    else if(month==6)
        return 30;
    else if(month==7)
        return 31;
    else if(month==8)
        return 31;
    else if(month==9)
        return 30;
    else if(month==10)
        return 31;
    else if(month==11)
        return 30;
    else if(month==12)
        return 31;
}