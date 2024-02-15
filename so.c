#include <stdio.h>
#include <stdlib.h> 

int main(void) 
{ 
 
  int a;
  int *ptr1=&a; 
  float b;
  char c;
  double d;
  
  printf("int: %d float: %d char: %d double: %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
  
  }
