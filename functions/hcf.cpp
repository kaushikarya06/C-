#include<iostream>
using namespace std;
int fun(int x, int y)
{
    int hcf;
    	for(int i=1 ; i<=min(x,y); i++)
	{
	    if (x%i==0  && y%i==0){
	    hcf=i;}
	}
	return hcf;
}
int main() 
{
	int x,y;
	cin>>x>>y;
    cout<<fun(x,y);
}
