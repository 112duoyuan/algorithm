#include "List4.h"
#include "stddef.h"
DuLinkList GetElemP_Dul(DuLinkList L,int i){
    DulNode * p = L->next;
    for(int j = 1;j<= i;j++){
        p = p->next;
    }
    if(p){
        return p;
    }
    return NULL;
}
//第i位置前插入e
void Dul_ListInsert(DuLinkList L,int i,char e){
    DulNode * p = GetElemP_Dul(L,i);
    if(!p){
        return -1;
    }
    DuLinkList s = (DuLinkList)malloc(sizeof(DulNode));
    s->data = e;
    DulNode * TmpNext = p->next,* Tmpprior =p;
    p->next = s;
    s->prior = p;
    s->next = TmpNext;
    s->next->prior = s;
    return 0; 
}
//双向链表删除
void ListDelete(DuLinkList L,int i,char e){
    DuLinkList p;
    if(p= GetElemP_Dul(L,i) == NULL){
        return -1;
    }
    e =p->data;
    p->prior->next = p->next;
    p->next->prior = p->prior;
    free(p);
    return 0;
}