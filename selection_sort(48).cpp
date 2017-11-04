#include<iostream>
#include<conio.h>
using namespace std;
class select           // using class
{ int *a;
int n;
public:
	select()
	{
		cout<<"enter the size of array\n";
		cin>>n;
		a = new int[n];
	}
void selection_sort()
{
	
	
cout<<"\n------------ selection sort ------------ \n\n";


cout<<"\nEnter "<<n<<" elements\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
	{
		swap(a[i],a[j]);
	}
	}
}
cout<<"\nAfter Sorting : \n";
for(int j=0;j<n;j++)
{
cout<<a[j]<<endl;
}
}
};
int main()
{ select sl;
	
	sl.selection_sort();
	return 0;
}
