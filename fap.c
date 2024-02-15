#include <stdio.h>
int print1(int a)  
{
    printf("\nHello World from print1! %d\n", a);
    return 0;
}
int print2()  
{
    printf("\nHello World from print2!\n");
    return 0;
}

void helloworld(int (*fn)(int a),int (*fn1)())  
{
  fn(99);
  fn1();  
}

int main(void)  
{
    helloworld(print1,print2);  // Passing functions as parameters
    return (0);
}