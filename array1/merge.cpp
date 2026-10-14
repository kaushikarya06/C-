#include <bits/stdc++.h>
using namespace std;
vector<int>merge(vector<int>&v , vector<int>&v1)
{
    int n = v.size();
    int m = v1.size();
    vector<int>v2(m+n);
    int i=0; 
    int j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(v[i]<v1[j])
        {
            v2[k]=v[i];
            i++;
            k++;
        }
        else
        {
            v2[k]=v1[j];
            j++;
            k++;
        }
    }
    if(i==n)
    {
        while(j<m)
        {
            v2[k]=v1[j];
            j++;
            k++;
        }
    }
    if(j==m)
    {
        while(i<n)
        {
            v2[k]=v[i];
            i++;
            k++;
        }
    }
    return v2;
}

int main() {
	vector<int>v;
    v.push_back(1);
    v.push_back(4);
	v.push_back(5);
	v.push_back(8);
	
	for(int i=0 ; i<v.size() ; i++)
	{
	    cout<<v[i];
	}
	cout<<endl;
	vector<int>v1;
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(10);
	v1.push_back(12);
	for(int i=0 ; i<v1.size() ; i++)
	{
	    cout<<v1[i];
	}
	cout<<endl;
	
	vector<int>l=merge(v,v1);
	for(int i=0 ; i<l.size() ; i++)
	{
	    cout<<l[i]<<"";
	}
	cout<<endl;

}

