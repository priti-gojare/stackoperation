#include <stdio.h>
#include"stackope.h"
#include "extern.h"
void display()
{
    int i;
    if(isempty())
     {
    printf("stack is empty\n");
      }
    printf("stack elements:\n\n");
    for (i=top;i>=0;i--)
    printf("%d\n",stack_arr[i]);
    printf("\n");
}