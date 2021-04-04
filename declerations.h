#ifndef NOF
#define NOF 12
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
extern Node **NewNode;
extern Node *Tree;
extern int count,allocsize,n,idx;
int Init();
void** Mainmenu(void **arg);
void** CreateTree(void **arg);
void** InsertNode(void **arg);
void** DeleteNode(void **arg);
void** TraverseTree(void **arg);
void** DisplayTree(void **arg);
void** DestroyTree(void **arg);
void** Preorder(void** arg);
void** Postorder(void** arg);
void** Inorder(void** arg);
void** ExitFunc(void **arg);
void** allocateNode(void **arg);
void GetRootNode();
void** (*fptr[NOF])(void**);