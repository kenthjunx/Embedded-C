#include <stdio.h>

int main(){
    float num = 0;
    printf("Enter a real number: ");
    scanf("%f", &num);

    if (3 <=num && num<8.5)
    {
        // Condition A
        if (num<3 || (5.4<num && num <=7.3) || num>13)
        {
            // Condition B
            if (num!=3 && num<9.75)
            {
                // Condition C
            }
            
        }
        
    }
    

    return 0;
}