#include <stdio.h>
#pragma warning(disable:4996)
//pragma warning was missing.

int main()
{
    int a = 4; 
    int b = 7;
    //there was no "int" before the declaration of variabule "b".
    float c;
    scanf("%f", &c);
    //added "&" before the "c" for use of the adress. 
    if (5 == c) {
        //the condition was wrong, it was writen "5=c" instead "5==c".
        //there was no "{}" for the "if" condition.
        printf("%f", c);
        //it was "print" instead of "printf".
    }
 




    return 0;
}

