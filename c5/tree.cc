//先根遍历
#include "tree.h"
#include <stddef.h>
#include "c3/stack.h"


void visit(BTree t){

}
//前序（根）遍历
void PreOrderTraverse(BTree t){
    if(t == NULL){
        return ;
    }
    visit(t);
    PreOrderTraverse(t->left);
    PreOrderTraverse(t->right);
    return ;
}

//中序遍历
void InOrderTraverse(BTree t){
    if(t == NULL){
        return;
    }else{
        InOrderTraverse(t->left);
        visit(t);
        InOrderTraverse(t->right);
    }
}
//后序同理
void LastOrderTraverse(BTree t){
    if(t == NULL){
        return;
    }else{
        LastOrderTraverse(t->left);
        LastOrderTraverse(t->right);
        visit(t);
    }
}

//中序遍历非递归算法

int InOrderTra(BTree t){
    BTree p;
    p = t;
    LinkStack * s;
    InitStack(s);
    while(p || stackEmpty(s)){
        if(p){
            Push(s,p->data);
            p = p->left;
        }else{
            char e;
            pop(s,e);//pop(s,q);
           // p = q->right; 
        }
    }
    return 0;
}
#include "queue.h"
//二叉树的层次遍历

void LevelOrder(BTree t){
    Linkqueue que;
    BTree p = t;
    InitQueue(que);
    EnQueue(que,p);
    while(/*que 不为空*/){
        /*p出队*/

        /*访问节点p*/

        /*有左孩子入队*/

        /*有有孩子入队*/
    }
}
//创建二叉树
int CreateBTree(BTree t){
    char ch;
    scanf(&ch);
    if(ch == "#"){
        return NULL;
    }else{
        if(!(t = (BNode *)malloc(sizeof(BNode)))){
            return -1;
        }
        t->data =ch;
        CreateBTree(t->left);
        CreateBTree(t->right);
    }
    return 1;
}

//复制二叉树
int copy(BTree oT,BTree T){
    if(oT == NULL){
        T = NULL;
        return 0;
    }
    T = (BNode *)malloc(sizeof(BNode));
    T->data = oT->data;
    copy(T->left,oT->left);
    copy(T->right,oT->right);
    return 0;
}
//计算二叉树深度
int depth(BTree t){
    if(t == NULL){
        return 0;
    }
    m = depth(t->left);
    n = depth(t->right);
    if(m < n){
        return (n + 1);
    }else{
        return (m + 1);
    }
}
//计算二叉树节点数
int count(BTree t){
    if(t == NULL){
        return 0;
    }
    return (count(t->left) + count(t->right) + 1);
}
//计算叶子节点数

//先序线索二叉树
 





