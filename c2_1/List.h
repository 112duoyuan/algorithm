#include <stdbool.h>
#include "TOTAL.h"
typedef struct List{
    char * elem;
    int length;
}List,*Listp;

bool InitList(Listp L);
int GetListLength(Listp L);
bool IsEmpty(Listp L);
int LocateValue(Listp L,char num);
int GetListValue(Listp L,int i,char value);
int ListInsert(Listp L,int pos,char value);
