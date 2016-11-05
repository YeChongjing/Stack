#include"ds42.h"
//构造一个空队列
void InitQueue(SqQueue *Q){
	Q->front = Q->rear =0;
}
//判断循环队列空
int QueueEmpty(SqQueue *Q){
	if(Q->rear == Q->front){
		return 1;
	}
	return 0;
}
//判断循环队列满
int QueueFull(SqQueue *Q){
	if((Q->rear+1)%MAXSIZE == Q->front){
		return 1;
	}
	return 0;
}
//入队
void  EnQueue(SqQueue *Q,ElemType e){
	if(!QueueFull(Q)){
		Q->data[Q->rear] = e;
		Q->rear = (Q->rear+1)%MAXSIZE;
		return ;
	}
}
//出队
ElemType DeQueue(SqQueue *Q){
	ElemType e;
	if(!QueueEmpty(Q)){
		e = Q->data[Q->front];
		Q->front = (Q->front+1)%MAXSIZE;
		return e;
	}
	return 0;
}
//遍历循环队列
void OutQueue(SqQueue Q){
	while(Q.front!=Q.rear){
		cout<<Q.data[Q.front]<<"  ";
		Q.front = (Q.front+1)%MAXSIZE;
	}
}