//˳�����
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