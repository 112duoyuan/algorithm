#include "queue.h"
#include <stddef.h>
//���г�ʼ��
int InitQueue(Linkqueue q){
    q->base = (char *)malloc(sizeof(char)* MAXQUESIZE);
    if(!q->base){
        return -1;
    }
    q->front = 0;
    q->rear = 0;
    return 0;
}
//�󳤶�
int QueueLength(Linkqueue q){
    return (q->rear - q->front + MAXQUESIZE) % MAXQUESIZE;
}

//ѭ���������
int EnQueue(Linkqueue q,char e){
    if((q->rear + 1)% MAXQUESIZE == q->front)return -1;
    q->base[q->rear] = e;
    q->rear = (q->rear + 1) % MAXQUESIZE;
    return 0;
}
//ѭ�����г���
int OUtQueue(Linkqueue q,char e){
    if(q->front == q->rear)return -1;
    e= q->base[q->front];
    q->front = (q->front + 1)%MAXQUESIZE;
    return 0;
}
//ȡ��ͷԪ��
int HeadGet(Linkqueue q,char e){
    if(q->front != q->rear)return q->base[q->front];
}

//����-----�����û������޷�ȷ�� ����P62
int InitQueue(LinkQueue q){
    q.front = q.rear = (QuePtr)malloc(sizeof(QNode));
    if(!q.front){
        return -1;
    }
    q.front->next = NULL;
    return 0;
}
int DestroyQue(LinkQueue q){
    while(!q.front){
        QNode* p = q.front->next;
        free(q.front);
        q.front =p;
    }
    return 0;
}
//���
int EnterQue(LinkQueue q,char e){
    QNode * p = (QuePtr)malloc(sizeof(QNode));
    p->data = e;
    p->next =NULL;
    q.rear->next = p;
    q.rear = p;
    return 0;
}
//����
int pop(LinkQueue q, char e){
    if(q.front == q.rear)return -1;
    QNode * p = q.front->next;
    e = p->data;
    q.front->next = p->next;
    if(q.rear == p)q.rear ==q.front;
    free(p);
    return 0;
}
int GetHead(LinkQueue q,char e){
    if(q.front == q.rear)return -1;
    e = q.front->next->data;
    return 0;
}
















