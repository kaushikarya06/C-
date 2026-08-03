#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value";
    cin>>a;
    if(a>99 && a<1000)
    {
        cout<<"three digit number";
    }
    else
    {
        cout<<"not three digit number";
    }
    return 0;
}