#include<iostream>
using namespace std;
int main()
{
     int a,b,c;
    cout<<"enter values of each";
    cin>>a>>b>>c;
    if ((a+b>c)  &&   (b+c>a)    &&   (c+a>b))
    {
        cout<<"it's a triangle";
    }
    else
    {
        cout<<"not a triangle";
    }
}