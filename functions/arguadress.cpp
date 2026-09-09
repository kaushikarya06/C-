#include<iostream>
using namespace std;
int fun(int a,int b)
{
    cout<<"address of a"<<&a<<endl;
    cout<<"address of b"<<&b<<endl;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"address of x"<<&x<<endl;
    cout<<"address of y"<<&y<<endl;
    fun(x,y);
}