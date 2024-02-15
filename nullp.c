#include <stdio.h> 
#include <stdlib.h>

int * division(int a, int b)
{
    int d; 
    if(b == 0)
        return NULL;
    else
        d = a / b;
    printf("\nThe result of the integer division is %d\n",d); 
}

main()
{
    int * ptr = division(20, 0); 
    printf("\n * ptr = %d", ptr);
    if(ptr == NULL)
        printf("\nDivision unsuccessful\n");

    int choco = NULL;
    printf("\n choco: %d \n", choco);
}