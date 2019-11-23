#include <stdio.h>
#include"stackope.h"
#include "extern.h"

int pop()
{
    if(isempty())
    {
        printf("stack underflow");
        exit(1);
    }
    item=stack_arr[top];
    top--;
    return item;
    }