#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&a)
{
    int n=a.size();
    int b=0;
    int c=0;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==0) b++;
        else c++;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(i<b) a[i]=0;
        else a[i]=1;
    }
}

int main() {
	vector<int>v;

v.push_back(1);
v.push_back(0);
v.push_back(0);
v.push_back(1);
v.push_back(1);
for(int i=0 ; i<v.size() ; i++)
{
cout<<v[i];
}
cout<<endl;

sort(v);
for(int i=0 ; i<v.size() ; i++)
{
cout<<v[i];
}
cout<<endl;
}