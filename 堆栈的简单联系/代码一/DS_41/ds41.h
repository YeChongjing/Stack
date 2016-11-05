#include<iostream>
using namespace std;
typedef int ElemType;
#define StackSize 100
typedef struct {
	ElemType data[StackSize];
	int top; 
}SeqStack; /* 栈的顺序结构体类型 */

void InitStack(SeqStack *s); //构造一个空栈
int StackEmpty(SeqStack *s);  //判断栈空
int StackFull(SeqStack *s);  //判断栈满
void Push(SeqStack *s,ElemType x); // 进栈
int Pop(SeqStack *s,ElemType &e);// 退栈
int GetTop(SeqStack *s,ElemType &e); // 取栈顶元素
void OutStack(SeqStack &s); // 遍历顺序栈
void Cont(int n,int d);