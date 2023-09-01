#include "List.h"
#include <stdlib.h>
bool InitList(Listp L){
    L->elem = (char *)malloc((sizeof(char) * MAXSIZE));
    if(L->elem == NULL){
        return 0;
    }
    return 1;
}
void DestroyList(Listp L){
    if(L->elem){
        free(L->elem);
    }
}
void ClearList(Listp L){
    L->length = 0;
}
int GetListLength(Listp L){
    return L->length;
};
bool IsEmpty(Listp L){
    return L->length == 0 ? 0: 1;
}

//顺序表取值
int GetListValue(Listp L,int i,char value){
    if(i < 1 || i > L->length)
        return -1;
    value = L->elem[i-1];
    return 0;
};
//按值查找
int LocateValue(Listp L,char num){
    for(int i = 0;i < L->length;i++){
        if(num == L->elem[i])
            return i + 1;//返回序号
    }
    return 0;
}
//平均长度查找
//ASL = (a0 + a1 + a2+....+an)/n = (n + 1) /2

//顺序表插入
int ListInsert(Listp L,int pos,char value){
    if(pos < 1 || pos > L->length + 1){
        return -1;
    }
    if(L->length == MAXSIZE)
        return -1;
    for(int j = L->length - 1; j >= pos;j--){
        L->elem[j + 1] =L->elem[j];
    }
    L->elem[pos - 1]= value;
    L->length ++;
    return 1;
}
//顺序表的删除
int ListDelete(Listp L,int i){
    if(i < 1 || i > L->length){
        return -1;
    }
    for (int j = i;j <L->length - 1;j++){
        L->elem[j -1] = L->elem[j];//被删除元素之后元素前移
    }
    L->length--;
    return 0;
}











