#include<iostream>
using namespace std;
int main() 
{
	int n;
	int fac=0;
	int a=1;
	int b=1;
	cout<<"enter the value"<<endl;
	cin>>n;
	for (int i=1; i<=n-2;i++)
	{
	    fac=a+b;
	    a=b;
	    b=fac;
	}
	cout<<b;

}
