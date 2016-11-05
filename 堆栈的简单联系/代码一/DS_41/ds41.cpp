#include"ds41.h"
//����һ����ջ
void InitStack(SeqStack *s){
	s->top = -1;
}
//�ж�ջ��
int StackEmpty(SeqStack *s){
	return(s->top <= -1?false:true);
}
//�ж�ջ��
int StackFull(SeqStack *s){
	return(s->top >= (StackSize-1)?false:true);
}
//��ջ
void  Push(SeqStack *s,ElemType x){	
	if(StackFull(s)){
		s->top = s->top+1;
		s->data[s->top] = x;
		return;
	}else{
		cout<<"ջ����"<<endl;
		return;
	}
}
//��ջ
int Pop(SeqStack *s,ElemType &e){
	if(StackEmpty(s)){
		e = s->data[s->top];
		s->top--;
		return e;
	}else{
		cout<<"ջΪ�գ�"<<endl;
		return false;
	}
}
//ȡջ��Ԫ��
int GetTop(SeqStack *s,ElemType &e){
	if(StackEmpty(s)){
		e = s->data[s->top];
		return e; 
	}else{
		cout<<"ջΪ�գ�"<<endl;
		return false;
	}
	
}
//����˳��ջ
void OutStack(SeqStack &s){
	int i;
	cout<<"����ǣ�"<<endl;
	for(i=s.top;i>-1;i--){
		cout<<s.data[i]<<",";
	}
}
// ����ת��,����n�Ǳ�ת��������d������
void Cont(int n,int d){
	SeqStack s;
	InitStack(&s);
	ElemType x;
	int i,m=n,q=d;
	InitStack(&s);
	while(m){
		Push(&s,m%q);
		m = m/q;
		} 
	if(d==16){
		for(i=s.top;i>=0;i--){
			switch(s.data[i]){
			case 10:
				cout<<'A';break;
			case 11:
				cout<<'B';break;
			case 12:
				cout<<'C';break;
			case 13:
				cout<<'D';break;
			case 14:
				cout<<'E';break;
			case 15:
				cout<<'F';break;
			default :
				cout<<s.data[i];
			}
		}
	}else{
		for(i=s.top;i>=0;i--){
			cout<<s.data[i];
		}
	}
		
}














