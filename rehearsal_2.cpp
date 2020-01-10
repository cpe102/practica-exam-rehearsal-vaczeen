#include<iostream>
using namespace std;
int main()
{
	float sum=0;
	float x;
	cout<<"Enter X: ";
	cin>>x;
	while(x!=0)
	{
	if(x>0)
	{
	sum=sum+x;	
	}	
	cout<<"Enter X: ";
	cin>>x;
	}
	cout<<"sum = "<<sum;
	return 0;
}