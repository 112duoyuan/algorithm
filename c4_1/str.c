#include "str.h"

//串匹配算法
//BF KMP算法
int Index_BF(String s,String t,int pos){
    int i =pos,j = 0;
    while(i <= s.length && j <= t.length){
        if(s.str[i] == t.str[j]){
            i++;
            j++;
        }else{
            i = i -j + 1;
            j =0;
        }
    }
    if(i > s.length)
        return -1;
    if(j >= t.length)
        return i - s.length;
}
//KMP
//最长公共前后缀
void Get_Next(String s,int next[MAXLEN + 1]){
    int i =1,j = 0;
    next[0]=0;
    while(i < s.length){
        if(s.str[i] == s.str[j]){
            next[i] = j + 1;
            i++;
            j++;
        }else{
            if(j == 0){
                next[i] = 0;
                i++;
            }else{
                j = next[j-1];
            }
        }
    }
}
int KMP(String s,String s1,char next[MAXLEN + 1]){
    int i = 0,j=0;
    while(i < s.length && j < s1.length){
        if(s.str[i] == s1.str[j]){
            i++;
            j++;
        }else{
            j = next[j-1];
        }
    }
    if(i < s.length){
        return i-s1.length;
    }else{
        return -1;
    }
}
