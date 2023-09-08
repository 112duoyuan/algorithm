//顺序队列
#include "../tree.h"
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
#include "queue.h"
#include <stddef.h>
//队列初始化
int InitQueue(Linkqueue q);
//求长度
int QueueLength(Linkqueue q);

//循环队列入队
int EnQueue(Linkqueue q,char e);
int ENQueue(Linkqueue q, BTree t);

//循环队列出队
int OUtQueue(Linkqueue q,char e);
//取对头元素
int HeadGet(Linkqueue q,char e);

//链队-----用于用户长度无法确定 看到P62
int InitQueue(LinkQueue q);
int DestroyQue(LinkQueue q);
//入队
int EnterQue(LinkQueue q,char e);
//出队
int pop(LinkQueue q, char e);
int GetHead(LinkQueue q,char e);
















