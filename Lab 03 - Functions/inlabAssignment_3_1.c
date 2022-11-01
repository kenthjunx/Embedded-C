#include <stdio.h>

void checkChar(char ch){
    if (ch >=48 && ch <=57)
        printf("%c is a numeric character", ch);
    else if(ch >=65&& ch<=90)
        printf("%c is upper case character", ch);
    else if(ch >=97 && ch <=122)
        printf("%c is a lower case character", ch);
    else
        printf("%c is not alphanumeric", ch);
}

int main(){
    char chara;
    printf("Enter a character: ");
    scanf("%c", &chara);
    checkChar(chara);

    return 0;
}