//二叉树第i层至多有2^(i-1)个节点

//深度为k二叉树至多有2^(k)-1个节点

//对任何一颗二叉树T、叶子数为n0，度为2的节点数为n2 则n0 = n2 + 1
//叶子，表示没有子节点的节点、度为2表示节点有两个子分支

//满二叉树
//深度为k有2^(k)-1个结点的二叉树称为满二叉树

//完全二叉树
//见图

//性质
#define MAXSIZE 100
typedef char sqlBTree[MAXSIZE];
//二叉树顺序存储适合于满二叉树、完全二叉树

//二叉树链表存储结构
typedef struct BNode{
    char data;
    struct BNode *left,*right;
}BNode,*BTree;

//线索二叉树
typedef struct BThrNode{
    int data;
    int ltag,rtag;//左 0左孩子 1 前驱 右 右孩子 后继
    struct BThrNode * left,*right;
}BThrNode,*BThrTree;















