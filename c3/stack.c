#include "stack.h"
#include <stddef.h>
int InitStack(Stackp s){
    s->base = (char*)malloc(sizeof(char) * MAXSIZE);
    if(!s->base)return -1;

    s->top = s->base;
    s->stacksize =MAXSIZE;
    return 0;
}
//�ж��Ƿ�Ϊ��
int stackempty(Stackp s){
    if(s->top == s->base){
        return 1;
    }else{
        return -1;
    }
}
//��˳��ջ����
int Stacklength(Stackp s){
    return s->top - s->base;
}
//���ջ
int clearStack(Stackp s){
    s->top = s->base;
    return 0;
}

//����˳��ջ
int DestroyStack(Stackp s){
    if(s->base){
        free(s->base);
        s->stacksize = 0;
        s->base = s->top = NULL;
    }

    return 0;
}
//˳��ջ��ջ
int push(Stackp s,char e){
    if(s->top - s->base == MAXSIZE){
        return -1;
    }
    *s->top++ = e;
    return 0;
}
//˳��ջ��ջ
int pop(Stackp s,char e){
    if(s->top == s->base){
        return -1;
    }
    e ==*--s->top;
    return 0;
}

//��ջ�ı�ʾ
void InitStack(LinkStack s){
    s =NULL;
    return 0;
}
int stackEmpty(LinkStack s){
    if(s == NULL)return 1;
    return 0;
}
int Push(LinkStack s,char e){
    LinkStack p = (LinkStack)malloc(sizeof(stacknode));
    p->data = e;
    p->next = s;
    s = p;
    return 0;
}
int pop(LinkStack s,char e){
    if(s == NULL)return -1;
    LinkStack p =s;
    e = s->data;
    s = s->next;
    free(p);
    return 0;
}
int top(LinkStack s,char e){
    if(s == NULL)return -1;
    e = s->data;
    return 0;
}
//



