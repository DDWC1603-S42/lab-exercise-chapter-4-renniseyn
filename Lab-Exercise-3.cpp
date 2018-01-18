//Leang Yue Nin
//A17DW0182
//Display the number in reverse order
//fix and complete the program below.

#include <iostream>
using namespace std;
int main()
{
	int num,t,r,sum;

cout<<"user input a number: ";
cin>>num;

for(t=num;num!=0;num=num/10)
{
	r=num % 10;
	sum=sum*10+r;

}
cout<<"The number in reverse order: "<<sum<<endl;

return 0;
}
