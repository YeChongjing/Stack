#include"ds42.h"
//����һ���ն���
void InitQueue(SqQueue *Q){
	Q->front = Q->rear =0;
}
//�ж�ѭ�����п�
int QueueEmpty(SqQueue *Q){
	if(Q->rear == Q->front){
		return 1;
	}
	return 0;
}
//�ж�ѭ��������
int QueueFull(SqQueue *Q){
	if((Q->rear+1)%MAXSIZE == Q->front){
		return 1;
	}
	return 0;
}
//���
void  EnQueue(SqQueue *Q,ElemType e){
	if(!QueueFull(Q)){
		Q->data[Q->rear] = e;
		Q->rear = (Q->rear+1)%MAXSIZE;
		return ;
	}
}
//����
ElemType DeQueue(SqQueue *Q){
	ElemType e;
	if(!QueueEmpty(Q)){
		e = Q->data[Q->front];
		Q->front = (Q->front+1)%MAXSIZE;
		return e;
	}
	return 0;
}
//����ѭ������
void OutQueue(SqQueue Q){
	while(Q.front!=Q.rear){
		cout<<Q.data[Q.front]<<"  ";
		Q.front = (Q.front+1)%MAXSIZE;
	}
}