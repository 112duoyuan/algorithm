//顺序队列
#define MAXQUESIZE 100
typedef struct {
    char * base;
    int front;
    int rear;
}queue,*Linkqueue;

//链式队列节点
typedef struct Qnode{
    char data;
    struct Qnode * next;
}QNode,*QuePtr;

typedef struct {
    QuePtr front;
    QuePtr rear;
}LinkQueue;//链式队列