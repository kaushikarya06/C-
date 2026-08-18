#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a number";
	cin>>a;
	int count=0;
	while(a>0)
    {
	    a/=10;
	   count++;
	}
    cout<<count;
}

