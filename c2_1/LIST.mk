#define LIST_INIT_SIZE 100

//int 
typedef struct {
    int elem[LIST_INIT_SIZE];
    int length;
}SqList2;//˳���

//����ʽ˳��洢�ṹ���Ͷ���

#define MAXSIZE 1000

// typedef struct {
//     float p;
//     int e;
// }Polynomial;

// typedef struct {
//     Polynomial * elem;
//     int length;
// }Sq2List;


//˳������Ͷ���
typedef struct {
    float p;
    int e;
}Polynomial;

typedef struct{
    Polynomial *elem;
    int length;
}Sq3List;

//���鶯̬����
typedef struct {
    char *data;
    int length;
}SqList;
SqList L;
L.data = (char*)malloc(sizeof(char)* MAXSIZE);
//��Ӧfree


//���龲̬����
typedef struct {
    ElemType data[MAXSIZE];
    int length;
}Sq4List;

/*
int * p1 = new int(10);10��int�����Ŀռ�
��Ӧdelete

*/
//��������������
//���ݵ���������׵�ַ

//���β������������κα仯���ᷴӳ��ʵ������
void sub(char b[]){
    b[] = "world";
}

char a[10] = "hello";
sub(a);
cout << a << endl;
will print world;

&������ͬһ��ռ䣬���˸�����

#



