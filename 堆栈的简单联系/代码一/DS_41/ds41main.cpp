#include"ds41.h"

SeqStack s;
int main()
{ 
	int k;
	ElemType e,x; 
	InitStack(&s);          /* ��ʼ��һ����ջ */
	do 
	{ 
		cout<<"\n=====================================";
		cout<<"\n     1. ����Ԫ��e��ջ ";
		cout<<"\n     2. ��ջһ��Ԫ�أ�������ֵ";
		cout<<"\n     3. ȡ��ջ��Ԫ�أ�������ֵ";
		cout<<"\n     4. ʮ�����ֻ��ɶ�����";
		cout<<"\n     5. ʮ�����ֻ��ɰ˽���";
		cout<<"\n     6. ʮ�����ֻ���ʮ������";
		cout<<"\n     7. ������������";
		cout<<"\n======================================";
		cout<<"\n     ����������ѡ�� (1,2,3,4,5,6,7):\n";
		cin>>k;
		switch(k)
		{ 
		case 1:
			{ 
				cout<<"\n  ��ջ\t"; 
				cin>>e;
                Push(&s,e); 
				OutStack(s);
			} break;
		case 2:
			{   
				if(Pop(&s,x))
                cout<<"\n��ջԪ��:"<<x<<endl;
		        OutStack(s); 
		    } break;    
		case 3:
			{   
				if(GetTop(&s,x))
                cout<<"\n��ջԪ��:"<<x<<endl;
		        OutStack(s); 
			} break;
		case 4:
			{   
				int n;
				cout<<"ʮ�����ֻ��ɶ�����"<<endl;
				cout<<"����һ��ʮ������N��";
				cin>>n;
				cout<<endl;
				cout<<"�ֻ��ɶ������ǣ�";
				Cont(n,2);
				cout<<endl;
			} break;
		case 5:
			{   
				int n;
				cout<<"ʮ�����ֻ��ɰ˽���"<<endl;
				cout<<"����һ��ʮ������N��";
				cin>>n;
				cout<<endl;
				cout<<"�ֻ��ɰ˽����ǣ�0";
				Cont(n,8);
				cout<<endl; 
			} break;
		case 6:
			{   
				int n;
				cout<<"ʮ�����ֻ���ʮ������"<<endl;
				cout<<"����һ��ʮ������N��";
				cin>>n;
				cout<<endl;
				cout<<"�ֻ���ʮ�������ǣ�0x";
				Cont(n,16);
				cout<<endl; 
			} break; 

	    case 7: exit(0);
		} /*  switch  */
		cout<<"\n ----------------";
	}while(k>=1 && k<=7);
	cout<<"\n               �ټ���";
    cout<<"\n        ��س��������ء�";
   
	return 1; 
} /* main */
