#include"headers.h"
#include"declerations.h"
int main()
{
    Node **Tree;
#ifdef DEBUG
    printf("%s:Begin\n"__FILE__);
#endif
    Tree=NULL;
    Init();
    while(1)
    {
        Tree=(Node**)(*fptr[1]((void**)Tree));
    }
#ifdef DEBUG
    printf("%s:End\n"__FILE__);
#endif
    return 0;
}