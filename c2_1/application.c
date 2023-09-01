//线性表合并
#include "List.h"
void Union(Listp a,Listp b){
    int na = GetListLength(a);
    int nb = GetListLength(b);
    for(int i =0;i<nb;i++){
        char value = GetListValue(b,i,value);
        int pos = LocateValue(b,value);
        if(!pos){
            return -1;
        }else{
            int pos =LocateValue(a,value);
            if(!pos){
                return -1;
            }else{
                ListInsert(a,a->length,value);
                a->length++;
            }
        }
    }

}
//有序表的合并 P43
int MergeList(Listp a,Listp b,Listp c){
    int n1 = GetListLength(a);
    int n2 = GetListLength(b);
    for(int i = 0;i<n1;i++){
        for(int j = 0;j < n2;j++){
            char a1;
            char b1;
            c->length++;
            if(atoi(GetListValue(a,i,a1)) <= aoti(GetListValue(b,j,b1))){
                c->elem = a1;
                a->length--;
            }else{
                c->elem = b1;
                b->length--;
            }
        }
    }
    if(a->length > 0){
        int l1 = n1 - a->length;
        for(int i = l1;i < n1;i++){
            char tmp1;
            GetListValue(a,l1,tmp1);
            ListInsert(c,c->length,tmp1);
        }
    }    
    if(b->length > 0){
        int l2 = n2 - b->length;
        for(int i = l2;i < n2;i++){
            char tmp2;
            GetListValue(a,l2,tmp2);
            ListInsert(c,c->length,tmp2);
        }
    }
    return 1;
}
//answer
void MergeList(Listp a,Listp b,Listp c){
    char * p1 = a->elem;
    char * p2 = b->elem;
    c->length = a->length + b->length;
    c->elem = (char *)malloc(sizeof(char) * c->length);
    char * p3 = c->elem;
    char * p1_last = p1 + a->length -1;
    char * p2_last = p2 + b->length -1;
    while(p1 <= p1_last && p2 <= p2_last){
        if(*p1 <= *p2){
            *p3++ = *p1++;
        }else{
            *p3++ = *p2++;
        }
        while(p1 <= p1_last) *p3++ = *p1++;
        while(p2 <= p2_last) *p3++ = *p2++;
    }
}


