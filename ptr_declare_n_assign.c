#include <stdio.h>

int main(void)
{
    float z;
    int x,y;
    int * ptr1 = & x;
    int * ptr2 = & y;
    printf("\n * ptr1: %d", * ptr1);
    printf("\n * ptr2: %d", * ptr2);
    printf("\n ptr1: %d", ptr1);
    printf("\n ptr2: %d", ptr2);
    printf("\n & x: %d", & x);
    printf("\n & y: %d", & y);

    ptr1 = ptr2;
    printf("\n * ptr1: %d", * ptr1);
    printf("\n * ptr2: %d", * ptr2);
    printf("\n ptr1: %d", ptr1);
    printf("\n ptr2: %d", ptr2);
    printf("\n ptr2==ptr1: %d \n", ptr1==ptr2);
    
}