#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int rev=0;
    int ld=0;
    while(a>0)
    {
        rev=rev*10;
        ld=a%10;
        rev+=ld;
        a/=10;
    }
    cout<<rev;
}