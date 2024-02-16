#include <stdio.h>
#include <stdlib.h>

int main(void){
int *ptr1;
float *ptr2;

/* allocate space for an integer */
ptr1 = malloc (2* sizeof(double ));

printf("\nThe value of ptr1 is %d\n",ptr1);
printf("\nThe size of ptr1 is %lu\n",sizeof(ptr1));
printf("\nThe value of ptr1 is %d\n",*ptr1);

/* allocate space for a float */
ptr2 = malloc (sizeof(float));

*ptr1 = 20;
*ptr2 =13.5;

printf("\nThe value of ptr1 is %d\n",ptr1);
printf("\nThe value is ptr1 is %d\n",*ptr1);
printf("\nThe value is ptr2 is %f\n",*ptr2);

free(ptr1); free(ptr2);
}

