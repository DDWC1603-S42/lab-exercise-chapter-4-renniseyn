//Leang Yue Nin
//A17DW0182
//Find the sum of digits of a given number

#include <iostream>
using namespace std;

int main()
{

	int no1,no2,x,sum;

	cout<<"Find the sum of a given number"<<endl;
	cout<<"------------------------------"<<endl;
	
	cout<<"Input number: "<<endl;
	cin>>no1>>no2;
	
	sum=no1+no2;
	cout<<"Sum= "<<sum; 


	while(no2>0)
	{
	x=no1%10;
	no1=no1/10;
	sum=sum+x;
	
	}
	cout<<"The sum of the digits= "<<sum<<endl;
	
}
