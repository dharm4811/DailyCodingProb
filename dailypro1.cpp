/*
This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

*/
#include<iostream>
using namespace std;

	

int main(){
int a[20];
int size;

cout<<"Enter size of array ";
cin>>size;

cout<<"\nenter "<<size<<" number\n";
for(int i=0;i<size;i++){
	cin>>a[i];
	
}	

int k;
int x,y;
int store;
cout<<"enter value of k: ";
cin>>k;

for(int i=0;i<size;i++)
{
	
	for(int j=0;j<size;j++){
		
		if(a[i]==a[j]){
			
			store=0;
			
}else{

	
	store=	a[i]+a[j];
//cout<<"\nstore is "<<store;
}
	
	if(store==k){
		x=	a[i];
		y= a[j];
		cout<<"\nx is  "<<x;	
	cout<<"\ny is  "<<y;
cout<<"\nSO, X and y leads to k on adding \n";	
return x+y;
	}
		
		
	}
	
}
	
	
	
}

