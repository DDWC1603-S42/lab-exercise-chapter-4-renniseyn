//Leang Yue Nin
//A17DW0182
//Check whether a number is prime or not
//finish up this program, properly, and nicely.

#include<iostream>
using namespace std;

int main() {
	
	int i=1,u=1,sum=0;
	cout<<"The perfect numbers between 1 to 500 are: "<<endl;
	
	while(i<500)
	{
		while(u<500)
		{
			if(u<i)
			{
				if(i%u==0)
				{
					sum=sum+u;
					u++;
				}
			}
		}
	}
	
	if(sum==i)
		{
			cout<<i<<"is a perfect number."<<endl;
			i++;
			u=1;
			sum=0;
		}
		
	return 0;
}
