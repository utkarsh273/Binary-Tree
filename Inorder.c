#include"headers.h"
#include"declerations.h"
void** Inorder(void **arg)
{
   Node *Root;
   Root=(Node*)arg;
   if(Root==NULL)
   {
       return (void**)0;
   }  
   Inorder((void**)Root->lchild);
   printf("%d ",Root->value); 
   Inorder((void**)Root->rchild);  
}