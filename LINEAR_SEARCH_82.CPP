#include <iostream.h>
#include <conio.h>
void main()
{
      clrscr();
      int arr[10],i,num,index;
      cout<<"Enter 10 numbers: ";
       for(i=1;i<=10;i++)
       cin>>arr[i];

	  cout<<"\n Enter a number to search: ";
	  cin>>num;
	   for(i=1;i<=10;i++)
	   {
	      if(arr[i]==num)
	      {
		index=i;
		break;
	      }
	   }

      cout<<"\nFound at index no."<<index;
      cout<<endl;
      getch();
}