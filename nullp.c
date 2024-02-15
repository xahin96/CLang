#include <stdio.h> 
#include <stdlib.h>
int * division(int a, int b){
    int d; 
    if(b == 0)
        return NULL;
    else
        return (int *) (a / b);
}
int main(){
    int * ptr = division(20, 0);
    printf("\n ptr = %d", ptr);
//    printf("\n ptr address = %d", ptr);
    if(ptr == NULL)
        printf("\nDivision unsuccessful\n");
    int * choco = NULL;
    printf("\n choco: %d \n", choco);
}