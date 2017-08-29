#include<iostream>
using namespace std;
class lfind
{
	int *a;
	int n;
	int key;
	public:

    lfind()
    {  cout<<"Enter the array limit ";
        cin>>n;
    	a =  new int[n];
    	
	}
	
	
	int read()
	{ int i;
		  cout<<"\nEnter the "<<n<<" here\n";
       for(i=0;i<n;i++)
      {
  
       cin>>a[i];
     }

      cout<<"\nlist that you entered : \n";
     for(i=0;i<n;i++)
   {
  
  cout<<a[i];
  cout<<"\n";
  }
	}
	

   

	
	void lser(int k)
	{
		int i;
		for(i=0;a[i]!=k;i++)
		{
		
		}
		cout<<i+1;
		
		
	}

};
int main()
{ lfind cm;
  int key,i;
  
cm.read();
cout<<"\n enter the value can be  search in list ";
cin>>key;
cm.lser(key);

return 0;

}
