#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0 ; i<a.size() ; i++)
    {
       cout<< a[i];
    }
    cout<<endl;
}
// void reversepart(int i , int j , vector<int>&v)
// {
//     while(i<=j)
//     {
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
// }
int main()
{
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    display(v1);
    //reverse
    // reversepart(0,6,v1);
    reverse(v1.begin(),v1.end());
    display(v1);

}







#include <bits/stdc++.h>
using namespace std;

void swap(vector<int>&v)
{
     int i=0;
    int j=v.size()-1;
    while(i<j)
{
     if(v[i]==0) i++;
   if(v[j])==1) j--;
   if(v[j]!=v[i]) 
   {
       swap(v[i],v[j]);
   i++;
   j--;
   }
}
}
int main() {
	vector<int>v;
	v.push_back(1);
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	for(int i=0 ; i<v.size() ; i++)
	{
	    cout<<v[i];
	}
	cout<<endl;
 swap(v);
 	for(int i=0 ; i<v.size() ; i++)
	{
	    cout<<v[i];
	}
	cout<<endl;
}
