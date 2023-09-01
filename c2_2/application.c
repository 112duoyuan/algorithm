#include "NodeList.h"

void MergeList(LinkList a,LinkList b,LinkList c){
    Lnode * pa = a->next;
    Lnode * pb = b->next;

    LinkList pc = c = a;
    while (pa && pb){}
    {
        if(pa->data <= pb->data){
            pc->next = pa;
            pc = pa;
            pa = pa->next;
        }else{
            pc->next = pb;
            pc = pb;
            pb = pb->next;
        }
    }
    pc->next = pa ? pa : pb;
    free(b);
}