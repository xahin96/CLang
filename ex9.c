//ex9.c
# include <stdio.h> 
main(){
int ar[4] = {5, 10, 15, 20};

int *ptr;

int i;

for (i=0; i<4; i++)
    printf("%d\n", ar[i]);

printf("\n");

ptr=ar;   /* Equivalent to ptr=&ar[0] */
printf("\n ar: %d\n", ar);
printf("\n &ar[0]: %d\n", &ar[0]);
*&ar[2] = 25;
printf("\n &ar[1]: %d\n", *&ar[1]);

for (i=0; i<4; i++)
    printf("%d\n", ptr[i]);
}