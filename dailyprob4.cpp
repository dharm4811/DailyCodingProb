/*This problem was asked by Stripe.

Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.*/
#include<iostream>
using namespace std;
int main(){
int n,c=0;
cout<<"enter size of array ";
cin>>n;
int *a = new int[n];
cout<<"enter value in array ";
for(int i=0;i<n;i++){
	cin>>a[i];
}
int low,high;
for(int i=0;i<n;i++){
	if(c==0){
		for(int j=0;j<n;j++){
			if(a[i]<a[j] ){
				
				if(a[i]>0){
				
				low  = a[i];
				//cout<<"low vaule "<<a[i];
				c++;
			}
			
			
			}
			else{
				
				c=0;
				break;
			}
		}
	}
	else{
		break;
	}
}
cout<<"low value is "<<low;	
	
}
