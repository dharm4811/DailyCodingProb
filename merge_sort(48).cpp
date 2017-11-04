#include<iostream>
using namespace std;
#define MAX 100
class merging
{
int *a;
int *b;
int *c;
int size1,size2;
public:
	merging()
	{
		a = new int[MAX];
			cout<<"\nenter the size of array a : ";
	cin>>size1; 
		b=new int [MAX];
			cout<<"\nenter the size of array b : ";
	cin>>size2; 
			c=new int [size1+size2];
	}
	
void insert_a()
{ 


	cout<<"\nEnter "<<size1<<" elements in array a\n";
	
	for( int i=0 ;i<size1;i++)
	{
		cin>>a[i];
	}

return ;
	}


void insert_b()
{ 

	cout<<"\nEnter "<<size2<<" elements in array b\n";
	for(int i=0;i<size2;i++)
	{
		cin>>b[i];

	}
	


}
void merge()
{	
int i = 0;	int j=0;
int k =0;
while(i<size1 && j<size2)
{
	if(a[i]<b[j])
	{
		c[k] = a[i];
		k++;
		i++;
	}
	else
	{
		c[k] = b[j];
		j++;
		k++;
	}
}
  while(i<size1)
  {
  	c[k]=a[i];
  	k++;
  	i++;
	  }	
	  
	while(j<size2)
	{
		c[k]=b[j];
		k++;
		j++;
	  }  


cout<<"\n after merging :\n";
for(int g = 0;g<size1+size2;g++)
{
	cout<<c[g];
	cout<<"\t";
}
}


};
int main()

{
	merging obj;
	
	
	obj.insert_a();
				
			 	
	obj.insert_b();
					
				
	obj.merge();
		    	
		
			
	

return 0;
}
