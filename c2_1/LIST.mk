#define LIST_INIT_SIZE 100

//int 
typedef struct {
    int elem[LIST_INIT_SIZE];
    int length;
}SqList2;//顺序表

//多项式顺序存储结构类型定义

#define MAXSIZE 1000

// typedef struct {
//     float p;
//     int e;
// }Polynomial;

// typedef struct {
//     Polynomial * elem;
//     int length;
// }Sq2List;


//顺序表类型定义
typedef struct {
    float p;
    int e;
}Polynomial;

typedef struct{
    Polynomial *elem;
    int length;
}Sq3List;

//数组动态分配
typedef struct {
    char *data;
    int length;
}SqList;
SqList L;
L.data = (char*)malloc(sizeof(char)* MAXSIZE);
//对应free


//数组静态分配
typedef struct {
    ElemType data[MAXSIZE];
    int length;
}Sq4List;

/*
int * p1 = new int(10);10个int变量的空间
对应delete

*/
//数组名字做参数
//传递的是数组的首地址

//对形参数组所做的任何变化都会反映到实参数组
void sub(char b[]){
    b[] = "world";
}

char a[10] = "hello";
sub(a);
cout << a << endl;
will print world;

&引用用同一块空间，多了个别名

#



