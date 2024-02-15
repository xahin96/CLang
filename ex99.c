#include <stdio.h>

int main(void) {

int num=100;

int * b;
b = & num;
printf("\nThe address of num in b is: %d", b);
printf("\nThe value of num in * b is: %d\n", * b);

int * * c;
c = & b;
printf("\nThe address of b in c is: %d", c);
printf("\nThe address of num in * c is: %d", * c);
printf("\nThe value of num in * * c is: %d\n", * * c);

int * * * d;
d = & c;
printf("\nThe address of c in d is: %d", d);
printf("\nThe address of b in  * d is: %d", * d);
printf("\nThe address of num in * * d is: %d", * * d);
printf("\nThe value of num in * * * d is: %d\n", * * * d);
}