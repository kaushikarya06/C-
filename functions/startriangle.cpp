#include<iostream>
using namespace std;
void startraingle(int a)
{
    for(int i=1 ; i<=a ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    startraingle(3);
    startraingle(4);
    startraingle(5);
}