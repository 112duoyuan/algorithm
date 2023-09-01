#include "List3.h"

LinkList Connect(LinkList a,LinkList b){
    Lnode * ptr = a->next;
    a->next = b->next->next;
    free(b->next);
    b->next = ptr;
    return b;
}