/*This problem was asked by Microsoft.

A number is considered perfect if its digits sum up to exactly 10.

Given a positive integer n, return the n-th perfect number.

For example, given 1, you should return 19. Given 2, you should return 28.
for example2 , given 3 , you should return 37. solution : 10-3 = 7 then 10*3= 30 then 30+7 = 37*/
#include<iostream>
using namespace std;
int perfectnum(int num){
const int a = 10;
int remainSub = num;
 remainSub= a - num;
 num = a * num;
 num = num + remainSub;
 return num;
	
}
int main(){
	int number;
	cout<<"enter a number to find its nth perfect number \n";
	cin>>number;
	int x = perfectnum(number);
cout<<"perfect number is "<<x;

}
