#include "NodeList.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
//LinkList L;//ָ��ͷ����ָ��
//Lnode *p;//ָ��ڵ��ָ��

// LinkList L;
//��ʼ������
void InitList(struct Lnode* L){
    L = (Lnode*)malloc(sizeof(Lnode));
    //L =new Lnode;
    L->next =NULL;
    memcpy(L->data,0x00,sizeof(L->data));
    return 0;
}
//�ж������Ƿ�Ϊ��
//������ͷָ���ͷ�����Ȼ����
int IsEmpty(LinkList L){
    if(L->next == NULL){
        return 0;
    }else{
        return 1;
    }
}
//�����������
int DestroyList(LinkList L){
    Lnode * ptr;
    while(L){
        ptr = L;
        L=L->next;
        free(ptr);
    }
    return 0;
}
//������� ������Ȼ����

int ClearList(LinkList L){
    Lnode *p,*q;
    p = L->next;
    while(p){
        q = p->next;
        free(p);
        p = q;
    }
    L->next =NULL;
    return 0;
}
//�������
int ListLength(LinkList L){
    Lnode *p = L->next;
    int i = 0;
    while(p){
        i++;
        p = p->next;
    }
    return i;
}
//ȡ�������ֵ
void GetElem(LinkList L,int i,char index){
    Lnode * p = L->next;
    int j = 1;
    while(j < i && p){
        p = p->next;
        i++;
    }
    if(!p || j>i)
        return -1;
    index = p->data;
    return 0;   
}
//��ֵ����
Lnode* LocateElem(LinkList L,char e){
    Lnode * p = L;
    while(p->data != e && p){
        p = p->next;
    }
    if(!p){
        return NULL;
    }else{
        return p;
    }
}
int LocateElem_L(LinkList L,char e){
    Lnode*p = L->next;
    int j = 1;
    while(p && p->data != e){
        p = p->next;
        j++;
    }
    if(p){
        return j;
    }else{
        return -1;
    }
}
//�������
void ListInsert(LinkList L,int i,char Elem){
    Lnode * p = L->next;
    int j = 1;
    while(p && j < i){
        j++;
        p = p->next;
    }
    if(!p || j>i){
        return -1;
    }
    Lnode * tmp = p->next;
    Lnode * elem = (Lnode*)malloc(sizeof(Lnode));
    elem->data = Elem;
    elem->next = tmp;
    p->next = elem;
    return 0;
}
//ɾ����i���ڵ�
void ListDelete(LinkList L,int i,char e){
    Lnode * p = L->next;
    int j = 1;
    while(j < i && p->data != e){
        p = p->next;
        j++;
    }
    if(!p || j > i){
        return -1;
    }
    Lnode* tmp = p->next;
    p->next = p->next->next;
    free(tmp);
    return 0;
}
//ͷ�巨
void CreateList_H(LinkList L,int n){
    L = (LinkList)mallco(sizeof(Lnode));
    for(int i = n;i > 0;i--){
        Lnode * p = (LinkList)malloc(sizeof(Lnode));
        scanf("%s",p->data);
        p->next = L->next;
        L->next = p;
    }
    return 0;   
}
//��巨 P34
void CreateList_R(LinkList L,int n){
    L = (LinkList)malloc(sizeof(Lnode));
    L->next = NULL;
    Lnode * r = L;
    for(int i = n;i > 0;i--){
        Lnode * p1 = (Lnode*)malloc(sizeof(Lnode));
        scanf("%s",p1->data);
        p1->next = NULL;
        r->next = p1;
        r = p1;
    }
}




