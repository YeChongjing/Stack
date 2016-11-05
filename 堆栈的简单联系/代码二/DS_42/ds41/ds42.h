#include<iostream>
using namespace std;

typedef int ElemType;
#define MAXSIZE 10
typedef struct Node{
	ElemType data[MAXSIZE]; /* һά�������� */
	int front; /* ͷָ������  */
	int rear; /*βָ������  */
} SqQueue; /*ѭ�����еĽṹ������*/

void InitQueue(SqQueue *Q); //����һ���ն���
int QueueEmpty(SqQueue * Q);  //�ж�ѭ�����п�
int QueueFull(SqQueue   * Q);  //�ж�ѭ��������
void  EnQueue(SqQueue *Q,ElemType e); // ���
ElemType DeQueue(SqQueue *Q);// ����
void OutQueue (SqQueue Q); // ����ѭ������
