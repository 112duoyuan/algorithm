//˳�����
#include "../tree.h"
#define MAXQUESIZE 100
typedef struct {
    char * base;
    int front;
    int rear;
}queue,*Linkqueue;

//��ʽ���нڵ�
typedef struct Qnode{
    char data;
    struct Qnode * next;
}QNode,*QuePtr;

typedef struct {
    QuePtr front;
    QuePtr rear;
}LinkQueue;//��ʽ����
#include "queue.h"
#include <stddef.h>
//���г�ʼ��
int InitQueue(Linkqueue q);
//�󳤶�
int QueueLength(Linkqueue q);

//ѭ���������
int EnQueue(Linkqueue q,char e);
int ENQueue(Linkqueue q, BTree t);

//ѭ�����г���
int OUtQueue(Linkqueue q,char e);
//ȡ��ͷԪ��
int HeadGet(Linkqueue q,char e);

//����-----�����û������޷�ȷ�� ����P62
int InitQueue(LinkQueue q);
int DestroyQue(LinkQueue q);
//���
int EnterQue(LinkQueue q,char e);
//����
int pop(LinkQueue q, char e);
int GetHead(LinkQueue q,char e);
















