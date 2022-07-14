#include<iostream.h>
#include<conio.h>
class QUEUE_82
{
	private:
		int *A,size,front,rear,ele;
	public:
		QUEUE_82(int);
		void QUEUE_ADD_82(int ele);
		int QUEUE_DEL_82();
		void LIST_ALL_82();

};
QUEUE_82::QUEUE_82(int par)
{
	front=rear=0; size=par;
	A=new int[size+1];
}
void QUEUE_82::QUEUE_ADD_82(int ele)
{
	if(rear==size)
	{
		cout<<"List is full"<<endl;
		return;
	}
	else
	if(front==0)
	{
		front=1;
	}
	rear=rear+1;
	A[rear]=ele;
}

int QUEUE_82::QUEUE_DEL_82()
{
	if(front==0)
	{
		cout<<"QUEUE is empty";
		return NULL;
	}
	int ele=A[front];
	if(front==rear)
		front=rear=0;
	else
		front=front+1;
	cout<<ele<<"is deleted";
	return ele;
}
void QUEUE_82::LIST_ALL_82()
{
	cout<<"Elements of QUEUE are: "<<endl;
	if(front==0)
	{
		cout<<"QUEUE is empty";
		return;
	}
	else
		for(int i=front;i<=rear;i++)
		{
			cout<<A[i]<<"\t";
		}
}

void MENU()
{

	int ele,size,opt;
	cout<<"Enter size of QUEUE : "<<endl;
	cin>>size;
	QUEUE_82 obj(size);
	do
	{
		cout<<"\n 1.ADD QUEUE";
		cout<<"\n 2.DELETE QUEUE";
		cout<<"\n 3.LIST ALL";
		cout<<"\n 4.EXIT"<<endl;
		cout<<"Enter your option : "<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1:
				cout<<"Enter ele to add in QUEUE: ";
				cin>>ele;
				obj.QUEUE_ADD_82(ele);
				break;
			case 2:
				ele=obj.QUEUE_DEL_82();
				break;
			case 3:
				obj.LIST_ALL_82();
				break;
			case 4:
				return;
		}
	}while(1);

}
void main()
{
	clrscr();
	MENU();
	getch();
}