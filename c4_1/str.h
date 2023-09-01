#define MAXLEN 255
typedef struct {
    char str[MAXLEN + 1];
    int length;
}String,*ptr;

#define CHUNKSIZE 80
typedef struct Chunk{
    char ch[CHUNKSIZE];
    struct Chunk * next;
}Chunk;
typedef struct {
    Chunk*head,*tail;
    int curlen;
}LString;