
typedef struct Lnode{
    char data;
    struct Lnode* next;
}Lnode,*LinkList;


typedef struct{
    char name[8];
    char num[8];
    int score;
}ElemType;

typedef struct Student{
    ElemType data;
    struct Student*next;
}SNode,*SListNode;
