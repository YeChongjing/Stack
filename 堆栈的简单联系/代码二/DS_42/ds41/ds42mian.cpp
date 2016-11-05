#include"ds42.h"
SqQueue  Q1;
void main( )
{ 
	int k;  
	ElemType e,x; 
	InitQueue ( &Q1);          /* 初始化一个空循环队列 */
	do 
	{ 
		cout<<"\n\n\n";
		cout<<"\n\n     1. 数据元素e进队列";
		cout<<"\n\n     2. 出队一个元素，返回其值";
		cout<<"\n\n     3. 结束程序运行";
		cout<<"\n======================================";
		cout<<"\n     请输入您的选择 (1,2,3)";
		cin>>k;
		switch(k)
		{ 
		case 1:
			{ 
				cout<<"\n进队e=?"; 
				cin>>e;
                EnQueue(&Q1,e); 
				OutQueue(Q1);
			} break;
		case 2:
			{   
				x= DeQueue(&Q1);
                cout<<"\n出队元素:"<<x<<endl;
		        OutQueue (Q1); 
		    } break;    
		case 3: exit(0);
		} /*  switch  */
		cout<<"\n ----------------";
	}while(k>=1 && k<=3);
	cout<<"\n               再见！";
    cout<<"\n        打回车键，返回。"; 
} /* main */
