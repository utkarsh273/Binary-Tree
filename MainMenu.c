#include "headers.h"
#include "declerations.h"
void** Mainmenu(void **arg)
{
    int i;
    Node **tree;
    printf("%s:________MainMenu_______\n",__func__);
   if(!arg)
    {
        printf("1.CreateTree\n");
    }
    else
    {
        printf("2.InsertNode\n");
        printf("3.DeleteNode\n");
        printf("4.TraverseTree\n");
        printf("5.DisplayTree\n");
        printf("6.DistroyTree\n");
    }
    printf("0.Exit\n"); 
    printf("Enter your choice\n");
    scanf("%d",&i);
    if(i==0)
    {
        *(fptr[0])((void**)&status[0]);
    }
    else if(i>=1 && i<=6)
    {
        arg=(*fptr[i+1])(arg);
    }
    return arg;
}