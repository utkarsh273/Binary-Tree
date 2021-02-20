#include "headers.h"
#include "declerations.h"
void** ExitFunc(void **arg)
{
    char **stat;
    printf("%s:Begin\n",__FILE__);

    stat=(char**)arg;
    if(strncmp(*stat,"Success",7)==0)
    {
        exit(EXIT_SUCCESS);
    }
    if(strncmp(*stat,"Failure",7)==0)
    {
        exit(EXIT_FAILURE);
    }

    printf("%s:End\n",__FILE__);
}
