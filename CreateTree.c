#include "headers.h"
#include "declerations.h"
int*  CreateTree()
{
    int ndata;
    int i;
    int *Tree;
    char ch;
    printf("Enter the height of Tree\n");
    scanf("%d",&h);
    printf("Enter the Data  of Node\n");
    scanf("%d",&ndata);
    Tree=(int*)malloc(sizeof(int)*(2*h-1));
    for(i=1;i<(2*h-1);i++)
    {
        *(Tree+i)=0;
    }
    for(i=1;i<(2*h-1);i++)
    {
        if(i==1)
        {
            *(Tree+i)=ndata;
            
            printf("Do you want left child of %d (y/n)\n",*(Tree+i));
            getchar();
            scanf("%c",&ch);
            if(ch=='y')
            {
                printf("Enter the Data  of left Node\n");
                scanf("%d",&ndata);
                *(Tree+2*i)=ndata;
            }
            else
            {
                printf("Do you want Right child of %d (y/n)\n",*(Tree+i));
                getchar();
                scanf("%c",&ch);          
                if(ch=='y')
                {
                    printf("Enter the Data  of Right Node\n");
                    scanf("%d",&ndata);
                    *(Tree+2*i+1)=ndata;
                }
                else
                {
                    continue;
                }
            }
        
        }
        else
        {
            if(*(Tree+i)==0)
            {
                printf("Enter the Data  of New Node\n");
                scanf("%d",&ndata);
                *(Tree+i)=ndata;
            }
            printf("Do you want left child of %d (y/n)\n",*(Tree+i));
            getchar();
            scanf("%c",&ch);
            
            if(ch=='y')
            {
                printf("Enter the Data  of left child\n");
                 scanf("%d",&ndata);
                *(Tree+2*i)=ndata;
            }
            else
            {
                continue;
            }
            printf("Do you want Right child of %d (y/n)\n",*(Tree+i));
            getchar();
            scanf("%c",&ch);
            
            if(ch=='y')
            {
                printf("Enter the Data  of Right child\n");
                scanf("%d",&ndata);
                *(Tree+2*i+1)=ndata;
            }
            else
            {
                continue;
            }
        }
      
    }
    return Tree;

}