#include"headers.h"
#include"declerations.h"
void** Preorder(void **arg)
{
   Node *Root;
   Root=(Node*)arg;
   if(Root==NULL)
   {
       return (void**)0;
   }
   printf("%d ",Root->value);
   Preorder((void**)Root->lchild);
   Preorder((void**)Root->rchild); 
}