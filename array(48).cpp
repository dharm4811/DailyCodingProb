#include<iostream>
using namespace std;
#define MAX 100
class array
{ 
int *a;


  int n;
  int top; 
public:
	array()
	{
	
		top =-1;
	
		a=new int[MAX];
	}
	void insert()
	{ 
int num;
cout<<"\ninsert value in array\n";
cin>>num;
	 if(top>=MAX)
	 {
	 	cout<<"\nWARNING: array is full\n";
	 }
	 else
	 {
	 	top++;
	 	a[top]=num;
	 }
	 
}
void traverse()
{
			
		

		cout<<"\nyour array are:\n";
			 for(int i=0;i<=top;i++)
			 {
			 	cout<<a[i]<<" ";
			 	
			 }
			 
			 
	}
	void del()
	{
		 int val;
	if(top ==-1)
	{
		cout<<"\nlist is empty\n";
	}
	else
	{ a[top]=val;
		top--;
		cout<<"\ndeleted...successfully";
	}
	}
	void search()
	{int val;
	int f=0;
		cout<<"\nenter the value for search\n";
		cin>>val;
	 	for(int i =0;i<=top;i++)
	 	{
	 		if(a[i]==val)
	 		{
	 			cout<<"value found at "<<i+1;
	 		f++;
			 	break;
			 }
			 
			 
		 }
		 if(f==0)
		 {
		 	cout<<" \nnot found\n";
		 
		 }
	 	}

	 	
};
int main()
{ array sl;
	
	
	int ch;
while(1){
cout<<"\n1.insert\t\t2.traverse \t\t3.search \n4.deletion\t\t5.exit\n";
cin>>ch;
	switch(ch)
	{
		case 1:
			{
				sl.insert();
		break;	}
			
		case 2:
			{
				sl.traverse();
				
					
		break;	
		}
		case 3:
			{
				sl.search();
				
				break;
			}
			case 4:
				{
					sl.del();
					break;
				}
				case 5:
					cout<<"exiting....";
					return 0;
			
				default:
				{
					cout<<"\ntry again..\n";
					}	
	}
}
}
