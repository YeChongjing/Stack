#include<iostream>
using namespace std;

typedef int ElemType;
#define MAXSIZE 10
typedef struct Node{
	ElemType data[MAXSIZE]; /* 一维数组子域 */
	int front; /* 头指针子域  */
	int rear; /*尾指针子域  */
} SqQueue; /*循环队列的结构体类型*/

void InitQueue(SqQueue *Q); //构造一个空队列
int QueueEmpty(SqQueue * Q);  //判断循环队列空
int QueueFull(SqQueue   * Q);  //判断循环队列满
void  EnQueue(SqQueue *Q,ElemType e); // 入队
ElemType DeQueue(SqQueue *Q);// 出队
void OutQueue (SqQueue Q); // 遍历循环队列
