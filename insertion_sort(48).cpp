#include<iostream>
using namespace std;
class insert
{int *a;
int n;
public:
	insert()
	{
		cout<<"Enter the size of array\n";
		cin>>n;
		a = new int [n];
	}
void insertion_sort()
{
	
	
cout<<"\n------------ selection sort ------------ \n\n";

cout<<"\nEnter Elements : \n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=1;i<n;i++)
{
	int j=i ;
	int t=a[i];
	while(t<a[j-1] &&j>0)
	{
		a[j] = a[j-1];
		j--;
	}
	a[j] = t;
}
cout<<"\nAfter Sorting : \n";
for(int j=0;j<n;j++)
{
cout<<a[j]<<endl;
}
}
};
int main()
{
  insert ob;
	ob.insertion_sort();
	return 0;
}
