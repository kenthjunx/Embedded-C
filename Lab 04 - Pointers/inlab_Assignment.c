#include <stdio.h>

int main(){
    
    /*1. Declare a pointer to a short int and a pointer to a float.*/
    short int intNum;
    short *intPtr = &intNum;
    float floatNum;
    float *floatPtr = &floatNum;

    /*2. Of what use is the sizeof() operator?*/
    /*sizeof() is an operator used to compute the size of the operand in bytes.
    In the following line of code, sizeof operator gives the size of float in bytes,
    which is 4 bytes.*/
    printf("sizeof(float) = %d bytes\n", sizeof(float));

    /*3. How wide is a pointer to a long int in a 32 bits wide system?*/
    /**/

   
    float num = 17.6; // address of num is 1000
    float *p;
    p = &num;  // value of p pointer is 1000, which is the address of num.

    /*4.a. What value is p++?*/
    // p++; // after post-incrementing, the value of p is (1000 + 1(4 bytes)) = 1004;
    
    /*4.b. Define in words what *p and &p mean.*/
    /*
    *p could mean one thing depending on the context. First, when declaring a pointer, *p means 
    a variable named p is being declared as a pointer. Second, when accessing the value of the 
    variable it is pointing to, * operator should be used. So the following line of code prints 17.6.*/
    printf("*p = %f\n", *p);
    /*&p means you are accessing the address of the pointer. So the code below prints 1004.*/
    printf("&num = %p\t&p = %p\n",&num, &p);
    
    /*4.c. Is there a way to determine the values of *p and &p given the info mentioned?*/
    /*The demonstration above shows how the values *p and &p can be known by printing.*/

    long int x = 100;
    long int *y;
    long int **z;

    printf("\n&x = %p\n", &x);
    y = &x; // y = address of x = 8000
    printf("y = %p\n", y);
    
    printf("\n&y = %p\n", &y);
    z = &y; // z = address of y = 5000
    printf("z = %p\n", &y);

    printf("\nx = %ld\n", x);
    x++;    // x = x + 1 = 101
    printf("x++ = %ld\n", x);

    printf("\nx = %ld\t*y = %ld\n", x, *y);
    *y = *y++;  // increment y, then assign the value of x (101) to x; only the value of y has changed
    printf("*y = %ld\n", *y);

    //-------pass-------//
    printf("\n*z = %p\t&y = %p\n", *z, &y);
    *z = *z++;  // address of y = address of y + 1(4 bytes) = 5000+1(4)=5004
    printf("*z = %p\n", *z);

    printf("\n&y = %p\tz = %p\n", &y, z);
    z++;    // address of y = address of y + 1(4bytes) = 5004 + 1(4) = 5008
    printf("z++ = %p\n", z);

    /*5. Fill out the memory map after the code has executed.*/
    /*Map after code executes
    top     ---------------------
            |                   |
            |                   |
            |                   |
            |                   |
            |                   |
            |                   |
            ---------------------
    8000    |        101        | x
            ---------------------
            |                   |
            ---------------------
    5000    |                   | y
            ---------------------
            |                   |
            ---------------------
    2000    |                   | z
            ---------------------
            |                   |
            ---------------------
    */


    return 0;
}