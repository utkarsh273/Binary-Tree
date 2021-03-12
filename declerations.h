#ifndef NOF
#define NOF 10
#endif
#ifndef DEBUG
#define DEBUG
#endif

typedef struct node
{
    int index;
    struct node *parent;
    struct node *lchild;
    struct node *rchild;
    int status;
    int value;
}Node;
extern int val;
extern char **status;
extern Node *NewNode;
extern int count,allocsize;
int Init();
void** Mainmenu(void **arg);
void** CreateTree(void **arg);
void** InsertNode(void **arg);
void** DeleteNode(void **arg);
void** TraverseTree(void **arg);
void** DisplayTree(void **arg);
void** DistroyTree(void **arg);
void** ExitFunc(void **arg);
void** allocateNode(void **arg);
void** FirstNode(void **arg);
void** (*fptr[NOF])(void**);