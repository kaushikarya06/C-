#include<iostream>
using namespace std;
int main()
{
int a;
int fac=1;
cout<<"enter a number"<<endl;
cin>>a;
for (int i=1 ; i<=a ; i++)
{
    fac*=i;
}
cout<<fac;
}