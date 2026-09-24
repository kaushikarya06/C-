#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> v;
	int idx;
	int x;
	cout<<"enter the value of x"<<endl;
	cin>>x;
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	for(int i=v.size()-1 ; i>=0 ; i--)
	{
	    if(x==v[i]){
	    idx=i;
	    break;}
	}
	cout<<idx;
}
