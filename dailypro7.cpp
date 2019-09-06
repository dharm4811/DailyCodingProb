
/*Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.

For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.*/
#include<iostream>
using namespace std;

int main(){
	char letter[30];
	int l = 97;
	int a[26];
	for(int i=0;i<26;i++){
		letter[i] = l;
		l++;
		a[i]=i+1;
		
	}
/*	for(int i =0;i<26;i++){   //watch dictionary a to z
	cout<<letter[i]<<" = "<<a[i];
	cout<<"\n";
	}*/
	int num;
	int count=0;
cout<<"enter a number here to Know that in how many way it can be decode: ";
cin>>num;	
	for(int i =0 ;i<26;i++){
		if(num ==a[i]){
			count++;
		}
		else{
			num/10;
		}
	}
	
}
