#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v)
{
    int n= v.size();
	int a=0;
	int b=0;
		for(int i=0 ; i<n ; i++)
	{
	    if(v[i]==0)
	    a++;
	    else
	    b++;
	}
    for(int i=0 ; i<n ; i++)
    {
        if (i<a)
        v[i]=0;
        else
        v[i]=1;
    }
}

int main() {
	vector<int>v;

	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	int n=v.size();
	for( int i=0 ; i<n ; i++)
 {
     cout<<v[i];
 }
 cout<<endl;

	sort(v);
 for( int i=0 ; i<n ; i++)
 {
     cout<<v[i];
 }
}