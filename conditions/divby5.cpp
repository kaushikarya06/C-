#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value";
    cin>>a;
    if(a%5==0)
    {
        cout<<"divisible by 5";
    }
    if(a%5!=0)
    {
        cout<<"not divisible by 5";
    }
    return 0;
}