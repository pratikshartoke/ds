#include<iostream.h>
#include<conio.h>

class LIST_82
{   private:
		int *A,s,n,i,ele;
	public:
		LIST_82(int);
		void ADD_END(int ele);
		void ADD_BEG(int ele);
		void ADD_POS(int ele,int pos);
		int DEL_BEG();
		int DEL_POS(int pos);
		int DEL_END();
		void LIST_ALL();

};
LIST_82::LIST_82(int par)
{
	n=0;
	A=new int[s+1];
}
void LIST_82::ADD_END(int ele)
{
	if(n==s)
		 {
		   cout<<"List is full"<<endl;
		 }
		 else
		 {
		   A[n+1]=ele;
		 }
		 n++;
}
void LIST_82::ADD_BEG(int ele)
{
	if(n==s)
		{
		   cout<<"List is full"<<endl;
		}
		else
		{
		   for(i=n;i>=1;i--)
		   {
		     A[i+1]=A[i];
		   }
		   A[1]=ele;
		}
		n++;

}
void LIST_82::ADD_POS(int ele,int pos)
{
	if(pos>=0 && pos<=s)
		 {
		    if(n==s)
		    {
		       cout<<"List is full"<<endl;
		    }
		    else
		    {
		      for(i=s;i>=pos;i--)
		     {
		       A[i]=A[i-1];
		     }
		     A[pos]=ele;
		     n++;
		    }
		 }
		 else
		   cout<<"Invalid position"<<endl;

}
int LIST_82::DEL_BEG()
{
	if(n==0)
		   cout<<"List is empty"<<endl;
		 else
		 {
		   ele=A[1];
		   for(i=2;i<=n;i++)
		   {
		     A[i-1]=A[i];
		   }
		   n=n-1;
		   cout<<ele;
		 }
}
int LIST_82::DEL_POS(int pos)
{
	if(n==0)
		    cout<<"List is empty"<<endl;
		 else
		 {
		   ele=A[pos];
		   for(i=pos;i<n;i++)
			A[i]=A[i+1];
		   n--;
		   cout<<ele<<"is deleted";
		 }
}
int LIST_82::DEL_END()
{
	if(n==0)
	{
		cout<<"list is empty";
		return NULL;
	}
	int ele=A[n];
	n=n-1;
	return ele;
}
void LIST_82::LIST_ALL()
{
	cout<<"List elements are"<<endl;
		if(n==0)
		  cout<<"list is empty"<<endl;
		else
		{
		   for(i=1;i<=n;i++)
		  {
		     cout<<A[i]<<"\t";
		  }
		}

}

void MENU()
{
	LIST_82 obj(10);
	 int opt,ele,pos;
	 do
	 {
		cout<<"\n\n Choose to-----\t";
		cout<<"\n1.Add at end";
		cout<<"\n2.Add at begining";
		cout<<"\n3.Add at position";
		cout<<"\n4.Delete fron begining";
		cout<<"\n5.Delete from position";
		cout<<"\n6.Delete from end";
		cout<<"\n7.List all elements";
		cout<<"\n8.Enter your choice";
		cout<<"\n9.EXIT : ";
		cin>>opt;
		switch(opt)
		{
			case 1:
				cout<<"Enter element to add at end";
				cin>>ele;
				obj.ADD_END(ele);
				break;
			case 2:
				cout<<"Enter element to add at begin";
				cin>>ele;
				obj.ADD_BEG(ele);
				break;
			case 3:
				cout<<"Enter element to add at position";
				cin>>ele;
				cout<<"Enter position";
				cin>>pos;
				obj.ADD_POS(ele,pos);
				break;
			case 4:
			   ele=obj.DEL_BEG();
				break;
			case 5:
				cout<<"Enter element to delete at position";
				cin>>ele;
				cout<<"Enter position";
				cin>>pos;
				ele=obj.DEL_POS(pos);
				break;
			case 6:
			   ele=obj.DEL_END();
				break;
			case 7:
				obj.LIST_ALL();
				break;
			case 8:
				default:
				cout<<"Invalid option";
			case 9:
				return;
				break;
		}
	}while(1);
}

void main()
{
	 clrscr();
	 MENU();
	 getch();

}
