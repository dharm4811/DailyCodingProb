/*This problem was asked by Facebook.

Given a list of integers, return the largest product that can be made by multiplying any three integers.

For example, if the list is [-10, -10, 5, 2], we should return 500, since that's -10 * -10 * 5.

You can assume the list has at least three integers.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int *a;
	int size;
	cout<<"enter size of array"<<endl;
	cin>>size;
	a= new int[size];
    cout<<"enter value in array\n";
    for(int i =0;i<size;i++){
    	cin>>a[i];
    		if(a[i]<=0){
 			a[i] = abs(a[i]);
 			
		 }
	}
	int temp;

	int b[size];
	b[0]=a[0];
	int count =0;
 	for(int i=0;i<size;i++){
 	for(int j=i+1;j<size;j++){
	 
	 if(a[j]>a[i]){
	 	temp = a[i];
		 
		 a[i]= a[j];
	 	a[j] = temp;
	 	
	 }
	 
	 if(i==4){
	 	break;
	 }


}
	 }

        for(int i =0;i<3;i++){
        	cout<<a[i];
        	cout<<"\n";
		}
cout<<"largest multiply is : "<<a[0]*a[1]*a[2];
	 
	
	
}
