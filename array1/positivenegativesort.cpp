#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v)
{
    int n=v.size();
    int i=0;
    int j=n-1;
    for(int i=0 ; i<n ; i++)
    {
        
        if (i<0)
        i++;
        else if (j>0)
        j--;
        else{
        swap(v[i],v[j]);
        i++;
        j--;}
    }
}

int main() {
	vector<int>v;
	v.push_back(1);
	v.push_back(-3);
	v.push_back(9);
	v.push_back(-8);
	int n=v.size();
	for(int i=0 ; i<n ; i++)
	{
	    cout<<v[i];
	}
	cout<<endl;
	sort(v);
	for(int i=0 ; i<n ; i++)
	{
	    cout<<v[i];
	}
	

}
