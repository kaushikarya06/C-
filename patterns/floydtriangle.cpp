#include<iostream>
using namespace std;
int main() 
{
	int a;
	int k=1;
	cout<<"enter the no. of rows"<<endl;
	cin>>a;
	for (int i=1 ; i<=a ; i++)
	{
	    for (int j=1 ; j<=i ; j++)
	    {
	        cout<<k;
	        k++;
	    }
	    cout<<endl;
	}
	

}
