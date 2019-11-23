#include <stdio.h>
#include"stackope.h"
#include "extern.h"

void push(int item)
{

    if(isfull())
    {
        printf("stack overflow\n");
        return;
    }
    top++;
    stack_arr[top]=item;
    return;
}