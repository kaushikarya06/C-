#include<iostream>
using namespace std;
int fact(int x)
{
    int fact=1;
    for(int i=1 ; i<=x ; i++)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=i ; j++) 
        {
            cout<<combination(i,j);
        }
        cout<<endl;
    }

}