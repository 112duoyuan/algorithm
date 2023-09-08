#include "haftree.h"
void select(HuffmanTree t,int size,int  i,int  j){
   
}
void CreateHaff(HuffmanTree t,int n){
    int m = 2*n - 1;
    t = (HTNode *)malloc(sizeof(HTNode) * m);
    for(int i = 1; i < m + 1;i++){
        t[i].lch = 0;
        t[i].rch = 0;
        t[i].parent = 0;
    }
    for(int i = 1;i < n + 1;i++){
        scanf(t[i].weight);
    }
    for(int i = n + 1; i < m + 1;i++){
        int s1,s2;
        select(t,m,s1,s2);
        t[i].lch = s1;
        t[i].rch = s2;
        t[i].weight = t[s1].weight + t[s2].weight;
        t[s1].parent = i;
        t[s2].parent = i; 
    }
}