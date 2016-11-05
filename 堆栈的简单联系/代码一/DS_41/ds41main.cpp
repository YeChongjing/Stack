#include"ds41.h"

SeqStack s;
int main()
{ 
	int k;
	ElemType e,x; 
	InitStack(&s);          /* 初始化一个空栈 */
	do 
	{ 
		cout<<"\n=====================================";
		cout<<"\n     1. 数据元素e进栈 ";
		cout<<"\n     2. 出栈一个元素，返回其值";
		cout<<"\n     3. 取出栈顶元素，返回其值";
		cout<<"\n     4. 十进制轮换成二进制";
		cout<<"\n     5. 十进制轮换成八进制";
		cout<<"\n     6. 十进制轮换成十六进制";
		cout<<"\n     7. 结束程序运行";
		cout<<"\n======================================";
		cout<<"\n     请输入您的选择 (1,2,3,4,5,6,7):\n";
		cin>>k;
		switch(k)
		{ 
		case 1:
			{ 
				cout<<"\n  进栈\t"; 
				cin>>e;
                Push(&s,e); 
				OutStack(s);
			} break;
		case 2:
			{   
				if(Pop(&s,x))
                cout<<"\n出栈元素:"<<x<<endl;
		        OutStack(s); 
		    } break;    
		case 3:
			{   
				if(GetTop(&s,x))
                cout<<"\n出栈元素:"<<x<<endl;
		        OutStack(s); 
			} break;
		case 4:
			{   
				int n;
				cout<<"十进制轮换成二进制"<<endl;
				cout<<"输入一个十进制数N：";
				cin>>n;
				cout<<endl;
				cout<<"轮换成二进制是：";
				Cont(n,2);
				cout<<endl;
			} break;
		case 5:
			{   
				int n;
				cout<<"十进制轮换成八进制"<<endl;
				cout<<"输入一个十进制数N：";
				cin>>n;
				cout<<endl;
				cout<<"轮换成八进制是：0";
				Cont(n,8);
				cout<<endl; 
			} break;
		case 6:
			{   
				int n;
				cout<<"十进制轮换成十六进制"<<endl;
				cout<<"输入一个十进制数N：";
				cin>>n;
				cout<<endl;
				cout<<"轮换成十六进制是：0x";
				Cont(n,16);
				cout<<endl; 
			} break; 

	    case 7: exit(0);
		} /*  switch  */
		cout<<"\n ----------------";
	}while(k>=1 && k<=7);
	cout<<"\n               再见！";
    cout<<"\n        打回车键，返回。";
   
	return 1; 
} /* main */
