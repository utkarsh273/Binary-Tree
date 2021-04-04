#include"headers.h"
#include"declerations.h"
void** Postorder(void **arg)
{
   Node *Root;
   Root=(Node*)arg;
   if(Root==NULL)
   {
       return (void**)0;
   }  
   Postorder((void**)Root->lchild);
   Postorder((void**)Root->rchild);
   printf("%d ",Root->value); 
}