//À≥–Ú’ª
#define MAXSIZE 1024
typedef struct {
    char * top;
    char * base;
    int stacksize;
}*Stackp,Stack;

int InitStack(Stackp s);

//¡¥’ª
typedef struct stacknode
{
    char data;
    struct stacknode * next;
}stacknode,*LinkStack;



