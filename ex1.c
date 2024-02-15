#include <stdio.h>
int main(void) {

int n1=10, n2;   // 2 variables of type integer 

int *ptr;        //a pointer to integer

ptr = &n1;       // ptr = address of num1 

printf("\nThe address of n1 is %d\n", &n1);

n2 = *ptr;	//num2 = value stored at the address pointed by ptr, i.e value of n1 

printf("\n n1:%d  n2:%d  *ptr:%d \n\n", n1, n2, *ptr);

return(0);
}

