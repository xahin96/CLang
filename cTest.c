#include <stdio.h>

int main(void)
{
    int num=100;
    int *b;
    b = &num;
    printf("\nThe value of *b is : %d\n", *b);

    int **c;
    c = &b;
    printf("\nThe value of **c is: %d\n", **c);

    int ***d;
    d = &c;
    printf("\nThe value of ***d is: %d\n", ***d);
}