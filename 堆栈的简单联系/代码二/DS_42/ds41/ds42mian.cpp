#include"ds42.h"
SqQueue  Q1;
void main( )
{ 
	int k;  
	ElemType e,x; 
	InitQueue ( &Q1);          /* ��ʼ��һ����ѭ������ */
	do 
	{ 
		cout<<"\n\n\n";
		cout<<"\n\n     1. ����Ԫ��e������";
		cout<<"\n\n     2. ����һ��Ԫ�أ�������ֵ";
		cout<<"\n\n     3. ������������";
		cout<<"\n======================================";
		cout<<"\n     ����������ѡ�� (1,2,3)";
		cin>>k;
		switch(k)
		{ 
		case 1:
			{ 
				cout<<"\n����e=?"; 
				cin>>e;
                EnQueue(&Q1,e); 
				OutQueue(Q1);
			} break;
		case 2:
			{   
				x= DeQueue(&Q1);
                cout<<"\n����Ԫ��:"<<x<<endl;
		        OutQueue (Q1); 
		    } break;    
		case 3: exit(0);
		} /*  switch  */
		cout<<"\n ----------------";
	}while(k>=1 && k<=3);
	cout<<"\n               �ټ���";
    cout<<"\n        ��س��������ء�"; 
} /* main */
