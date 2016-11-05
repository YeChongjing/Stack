#include<iostream>
using namespace std;
typedef int ElemType;
#define StackSize 100
typedef struct {
	ElemType data[StackSize];
	int top; 
}SeqStack; /* ջ��˳��ṹ������ */

void InitStack(SeqStack *s); //����һ����ջ
int StackEmpty(SeqStack *s);  //�ж�ջ��
int StackFull(SeqStack *s);  //�ж�ջ��
void Push(SeqStack *s,ElemType x); // ��ջ
int Pop(SeqStack *s,ElemType &e);// ��ջ
int GetTop(SeqStack *s,ElemType &e); // ȡջ��Ԫ��
void OutStack(SeqStack &s); // ����˳��ջ
void Cont(int n,int d);