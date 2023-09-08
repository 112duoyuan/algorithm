//哈夫曼树 最优二叉树 带权路径长度（WPL）最短的树
//如何构造？？

//树的路径长度
//哈夫曼树权越大离根越近
//哈夫曼树的节点度数为0 或2没有度为1的节点

//顺序存储结构
typedef struct {
    int weight;
    int parent,lch,rch;
}HTNode,*HuffmanTree;
