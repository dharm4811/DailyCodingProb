/*
This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the 
original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected 
output would be [2, 3, 6].

Follow-up: what if you can't use division?*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
int a[10];
int size; //array size
cout<<"enter array size here (Max is 10) ";
cin>>size;

cout<<"enter "<<size<<" here\n";
for(int i=0;i<size;i++)
{
cin>>a[i];

}


int c=0;
int b[size];

b[c]=1;
int temp;
for(int r=0;r<size;r++){
temp =a[r];

a[r]=1;

for(int j=0;j<size;j++){

b[c]= b[c] * a[j];

}

c++;
b[c]=1;
a[r] = temp;		

}
cout<<"List is \n";
for(int i=0;i<size;i++){
	
cout<<b[i];	
cout<<"\n";
	
}


}


