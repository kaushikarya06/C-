#include <iostream>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0 ; i<a.size() ; i++)
    {
       cout<< a[i];
    }
    cout<<endl;
}
void reversepart(int i , int j , vector<int>&v)
{
    while(i<=j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
int main()
{
    int k;
    cin>>k;
    
    vector<int>v1;
   
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
     int n=v1.size()-1;
    display(v1);
    //reverse
    if(k>n) k=k%n;
    reversepart(n-k,n,v1);
    reversepart(0,n-k-1,v1);
    reversepart(0,n,v1);
    display(v1);
}

