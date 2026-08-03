#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value";
    cin>>a;
    if (a%3==0 || a%5==0)
    {
        if (a%15!=0)
        {
            cout<<"a is divisible by 3 or 5 but not by 15";
        }
        else
        {
            cout<<"not matching condition";
        }
    }
    else
    {
        cout<<"not matching condition";
    }
}