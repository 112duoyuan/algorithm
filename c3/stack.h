//À≥–Ú’ª
#define MAXSIZE 1024
typedef struct {
    char * top;
    char * base;
    int stacksize;
}*Stackp,Stack;

int InitStack(Stackp s);
int stackempty(Stackp s);
int pop(LinkStack s,char e);
int stackEmpty(LinkStack s);
void InitStack(LinkStack s);
int Push(LinkStack s,char e);
//¡¥’ª
typedef struct stacknode
{
    char data;
    struct stacknode * next;
}stacknode,*LinkStack;



