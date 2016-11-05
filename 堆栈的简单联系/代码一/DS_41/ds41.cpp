#include"ds41.h"
//构造一个空栈
void InitStack(SeqStack *s){
	s->top = -1;
}
//判断栈空
int StackEmpty(SeqStack *s){
	return(s->top <= -1?false:true);
}
//判断栈满
int StackFull(SeqStack *s){
	return(s->top >= (StackSize-1)?false:true);
}
//进栈
void  Push(SeqStack *s,ElemType x){	
	if(StackFull(s)){
		s->top = s->top+1;
		s->data[s->top] = x;
		return;
	}else{
		cout<<"栈满！"<<endl;
		return;
	}
}
//退栈
int Pop(SeqStack *s,ElemType &e){
	if(StackEmpty(s)){
		e = s->data[s->top];
		s->top--;
		return e;
	}else{
		cout<<"栈为空！"<<endl;
		return false;
	}
}
//取栈顶元素
int GetTop(SeqStack *s,ElemType &e){
	if(StackEmpty(s)){
		e = s->data[s->top];
		return e; 
	}else{
		cout<<"栈为空！"<<endl;
		return false;
	}
	
}
//遍历顺序栈
void OutStack(SeqStack &s){
	int i;
	cout<<"结果是："<<endl;
	for(i=s.top;i>-1;i--){
		cout<<s.data[i]<<",";
	}
}
// 数制转换,其中n是被转换的数，d是数制
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














