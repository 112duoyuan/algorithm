#include "NodeList.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
//LinkList L;//指向头结点的指针
//Lnode *p;//指向节点的指针

// LinkList L;
//初始化链表
void InitList(struct Lnode* L){
    L = (Lnode*)malloc(sizeof(Lnode));
    //L =new Lnode;
    L->next =NULL;
    memcpy(L->data,0x00,sizeof(L->data));
    return 0;
}
//判断链表是否为空
//空链表。头指针和头结点仍然存在
int IsEmpty(LinkList L){
    if(L->next == NULL){
        return 0;
    }else{
        return 1;
    }
}
//单链表的销毁
int DestroyList(LinkList L){
    Lnode * ptr;
    while(L){
        ptr = L;
        L=L->next;
        free(ptr);
    }
    return 0;
}
//清空链表 链表依然存在

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
//求单链表表长
int ListLength(LinkList L){
    Lnode *p = L->next;
    int i = 0;
    while(p){
        i++;
        p = p->next;
    }
    return i;
}
//取单链表的值
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
//按值查找
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
//插入操作
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
//删除第i个节点
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
//头插法
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
//后插法 P34
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




