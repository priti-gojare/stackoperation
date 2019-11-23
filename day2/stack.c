#include <stdio.h>
#include<stdlib.h>
#include"stackope.h"
#include "extern.h"

stack_arr[10];
int top =-1;
int item;
int main()
{
   int ch;
    while(1)
    {
        printf("1.Push\n");
        printf("2.POP\n");
        printf("3.Display\n");
        printf("4.exit\n");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                  printf("Enter the item to be pushed\n");
                  scanf("%d",&item);
                  push(item);
                  break;
            case 2:
                 
                  item= pop();
                  printf("item popped=%d",item);
                  break;
             case 3:
                  display();
                  break;
             case 4:
                  exit(1);
                  break;
             default:
                  printf("please enter correct choice\n");
                  break;

        }
        
        }
        return 0;
}
