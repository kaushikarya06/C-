#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a number";
    int n;
    cin>>n;
    if (n%3==0)
    {
        if (n%5==0)
        {
            cout<<"divisible by 3 and 5";
        }
        else
        {
            cout<<"divisible by 3 but not by 5";
        }
    }
    else
    {
        cout<<"not divisible by 3";
    }
}