#include <stdio.h>

void compute(float width, float height){
    float area, perimeter;
    area = width * height;
    
    perimeter = 2*(width + height);
    
    printf("Area of the rectangle: %0.2f\n sq. in.", area);
    printf("Perimeter of the rectangle: %0.2f\n in.", perimeter);
}

int main(){

    float width, height;

    printf("Enter width of a rectangle: ");
    scanf("%f", &width);
    printf("Enter height of rectangle: ");
    scanf("%f", &height);

    compute(width, height);

    return 0;
    /*Q: What changes must be made to the program?
    A: create a function and pass those values to that function to compute the area and perimeter*/
}