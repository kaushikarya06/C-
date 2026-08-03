#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter values";
    cin>>a>>b>>c;
    // if (a>b && a>c)
    // {
    //     cout<<a<<"is lagest";
    // }
    // else if (b>a  && b>c)
    // {
    //     cout<<b<<"is lagest";
    // }
    // else
    // {
    //     cout<<c<<"is lagest";
    // }
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<"is largest";
        }
        else
        {
            cout<<c<<"is largest";
        }

    }
    else
    {
        if (b>c)
        {
            cout<<b<<"is largest";
        }
        else
        {
            cout<<c<<"is largest";
        }
    
    }
}
