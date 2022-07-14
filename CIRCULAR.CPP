#include"iostream.h"
#include"conio.h"
class CIRCULAR_QUEUE_82
{
	private:
		int *A,s,front,rear;
	public:
		CIRCULAR_QUEUE_82(int);
		void QUEUE_ADD_82(int ele);
		int QUEUE_DELETE_82();
		void QUEUE_LIST_ALL_82();
};
CIRCULAR_QUEUE_82::CIRCULAR_QUEUE_82(int par)
{
	front=rear=0;
	s=par;
	A=new int[s+1];
}
void CIRCULAR_QUEUE_82::QUEUE_ADD_82(int ele)
{
	if((front==1 && rear==s)||(rear+1==front))
	{
		cout<<" QUEUE is Full"<<endl;
		return;
	}
	if(front==0)
		front=1;
	if(rear==s)
		rear=0;
	rear=rear+1;
	A[rear]=ele;
}
int CIRCULAR_QUEUE_82::QUEUE_DELETE_82()
{
	if(front==0)
	{
		cout<<"\n QUEUE is Empty"<<endl;
		return NULL;
	}
	int ele=A[front];
	if(front==rear)
		front=rear=0;
	else
	{
		if(front==s)
		front=0;
		front=front+1;
	}
	return ele;
}
void CIRCULAR_QUEUE_82::QUEUE_LIST_ALL_82()
{
	if(front==0)
	{
		cout<<"QUEUE is Empty";
		return;
	}
	if(front<=rear)
	{
		for(int i=front;i<=rear;i++)
			cout<<A[i]<<" ";
	}
	else
	{
		for(int i=front;i<=s;i++)
			cout<<A[i]<<" ";
		for(i=1;i<=rear;i++)
			cout<<A[i]<<"\t";
	}
}
void MENU()
{
	int ele,opt,size;
	cout<<"Enter size of Queue ";
	cin>>size;
	CIRCULAR_QUEUE_82 obj(size);
	do
	{
		cout<<"\n 1.ADD Element";
		cout<<"\n 2.DELETE Element";
		cout<<"\n 3.LIST ALL";
		cout<<"\n 4.EXIT";
		cout<<"\n Enter your option:";
		cin>>opt;
		switch(opt)
		{
			case 1:
				cout<<"Enter element to Add in Queue ";
				cin>>ele;
				obj.QUEUE_ADD_82(ele);
				break;
			case 2:
				ele=obj.QUEUE_DELETE_82();
				cout<<endl<<ele<<"is Deleted";
				break;
			case 3:
				obj.QUEUE_LIST_ALL_82();
				break;
			case 4:
				return;
			default:
				cout<<"Invalid option";

		}
	}while(1);
}
void main()
{
	clrscr();
	MENU();
	getch();
}




