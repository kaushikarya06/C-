#include<iostream>
using namespace std;
int main()
{
    int a,ld;
    int sum=0;
    int count=0;
    cout<<"enter a number"<<endl;
    cin>>a;
    while (a>0)
    {
        ld=a%10;
        a/=10;
        count++;
        sum+=ld;
        
        
        
    }
    cout<<sum<<endl;
    cout<<count;
    
}