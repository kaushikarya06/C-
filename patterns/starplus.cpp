#include<iostream>
using namespace std;
int main() 
{
	int a;
	cout<<"enter value"<<endl;
	cin>>a;
	int mid=a/2+1;
	for(int i=1 ; i<=a ; i++)
	{
	    for (int j=1 ; j<=a ; j++)
	    {
	        if(mid==j || mid==i)
	        cout<<"*";
	        else cout<<" ";
	    }
	    cout<<endl;
	}

}
